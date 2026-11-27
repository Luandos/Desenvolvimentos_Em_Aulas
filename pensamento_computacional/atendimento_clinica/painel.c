
#include <stdio.h>
#include "clinica.h"

void exibirPainel(Fila urgente, Fila preferencial,
                  Fila normal, Atendimento at) {

    printf("\n");
    printf("====================================\n");
    printf("       PAINEL DA CLINICA\n");
    printf("====================================\n");

    // PACIENTE ATUAL
    printf("\nEM ATENDIMENTO:\n");

    if (at.ativo) {

        printf("Senha: %s\n", at.paciente.senha);

        printf("Categoria: %s\n", at.paciente.categoria);
    }

    else {
        printf("Nenhum paciente em atendimento.\n");
    }

    // PROXIMAS SENHAS
    printf("\nPROXIMAS SENHAS:\n");

    Paciente p;

    for (int i = 0; i < urgente.quantidade; i++) {

        int pos = (urgente.inicio + i) % MAX_PACIENTES;

        p = urgente.pacientes[pos];

        printf("%s - %s\n", p.senha, p.categoria);
    }

    for (int i = 0; i < preferencial.quantidade; i++) {

        int pos = (preferencial.inicio + i) % MAX_PACIENTES;

        p = preferencial.pacientes[pos];

        printf("%s - %s\n", p.senha, p.categoria);
    }

    for (int i = 0; i < normal.quantidade; i++) {

        int pos = (normal.inicio + i) % MAX_PACIENTES;

        p = normal.pacientes[pos];

        printf("%s - %s\n", p.senha, p.categoria);
    }

    // QUANTIDADE DE PACIENTES
    printf("\n====================================\n");
    printf("PACIENTES AGUARDANDO:\n");

    printf("Urgentes: %d\n", urgente.quantidade);

    printf("Preferenciais: %d\n", preferencial.quantidade);

    printf("Normais: %d\n", normal.quantidade);

    int total = urgente.quantidade +
                preferencial.quantidade +
                normal.quantidade;

    printf("Total em espera: %d\n", total);

    printf("====================================\n");
}
