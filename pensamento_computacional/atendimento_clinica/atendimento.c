
#include <stdio.h>
#include "clinica.h"

void inicializarAtendimento(Atendimento *at) {

    at->ativo = 0;
}

// CONSULTAR PROXIMA SENHA
void consultarProxima(Fila *urgente, Fila *preferencial,
                      Fila *normal) {

    Paciente p;

    printf("\n===== PROXIMA SENHA =====\n");

    if (consultarFila(*urgente, &p)) {
        printf("Senha: %s\n", p.senha);
        printf("Categoria: %s\n", p.categoria);
    }

    else if (consultarFila(*preferencial, &p)) {
        printf("Senha: %s\n", p.senha);
        printf("Categoria: %s\n", p.categoria);
    }

    else if (consultarFila(*normal, &p)) {
        printf("Senha: %s\n", p.senha);
        printf("Categoria: %s\n", p.categoria);
    }

    else {
        printf("Nao existem pacientes aguardando.\n");
    }
}

// CHAMAR PACIENTE
void chamarPaciente(Fila *urgente, Fila *preferencial,
                    Fila *normal, Atendimento *at) {

    if (at->ativo) {
        printf("\nJa existe um paciente em atendimento!\n");
        return;
    }

    int sucesso = 0;

    if (removerFila(urgente, &at->paciente)) {
        sucesso = 1;
    }

    else if (removerFila(preferencial, &at->paciente)) {
        sucesso = 1;
    }

    else if (removerFila(normal, &at->paciente)) {
        sucesso = 1;
    }

    if (sucesso) {

        at->ativo = 1;

        printf("\n===== PACIENTE CHAMADO =====\n");

        printf("Senha: %s\n", at->paciente.senha);

        printf("Categoria: %s\n", at->paciente.categoria);
    }

    else {
        printf("\nNao existem pacientes na fila!\n");
    }
}

// FINALIZAR ATENDIMENTO
void finalizarAtendimento(Atendimento *at) {

    if (!at->ativo) {
        printf("\nNao existe atendimento em andamento!\n");
        return;
    }

    printf("\nAtendimento finalizado!\n");
    printf("Senha atendida: %s\n", at->paciente.senha);

    at->ativo = 0;
}
