
#include <stdio.h>
#include "clinica.h"

int main() {

    // CRIANDO AS FILAS
    Fila filaUrgente;
    Fila filaPreferencial;
    Fila filaNormal;

    inicializarFila(&filaUrgente);
    inicializarFila(&filaPreferencial);
    inicializarFila(&filaNormal);

    // INICIALIZANDO OS CONTADORES
    Contadores contadores = {0, 0, 0};

    // INICIALIZANDO O ATENDIMENTO
    Atendimento atendimento;

    inicializarAtendimento(&atendimento);

    int opcao;

    do {

        printf("\n");
        printf("====================================\n");
        printf("    SISTEMA DE ATENDIMENTO CLINICO\n");
        printf("====================================\n");

        printf("1 - Cadastrar paciente\n");
        printf("2 - Consultar proxima senha\n");
        printf("3 - Chamar paciente\n");
        printf("4 - Finalizar atendimento\n");
        printf("5 - Exibir painel\n");
        printf("0 - Encerrar sistema\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: {

                Paciente paciente;

                cadastrarPaciente(&paciente);

                int categoria = classificarPaciente(paciente);

                // Verifica se a fila correspondente tem espaco
                Fila *destino;

                if (categoria == 3) {
                    destino = &filaUrgente;
                }
                else if (categoria == 2) {
                    destino = &filaPreferencial;
                }
                else {
                    destino = &filaNormal;
                }

                if (destino->quantidade >= MAX_PACIENTES) {

                    printf("\nFila cheia! Cadastro nao realizado.\n");
                    break;
                }

                gerarSenha(&paciente, &contadores);

                if (inserirFila(destino, paciente)) {

                    printf("\nPaciente cadastrado com sucesso!\n");
                    printf("Senha gerada: %s\n", paciente.senha);
                    printf("Categoria: %s\n", paciente.categoria);
                }

                else {
                    printf("\nErro ao inserir paciente na fila.\n");
                }

                break;
            }

            case 2:

                consultarProxima(
                    &filaUrgente,
                    &filaPreferencial,
                    &filaNormal
                );

                break;

            case 3:

                chamarPaciente(
                    &filaUrgente,
                    &filaPreferencial,
                    &filaNormal,
                    &atendimento
                );

                break;

            case 4:

                finalizarAtendimento(&atendimento);
