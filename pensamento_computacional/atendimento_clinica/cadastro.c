
#include <stdio.h>
#include "clinica.h"

void cadastrarPaciente(Paciente *p) {

    printf("\n===== CADASTRO DE PACIENTE =====\n");

    printf("Genero:\n");
    printf("1 - Mulher\n");
    printf("2 - Homem\n");
    printf("3 - Outro\n");

    int opcao;

    do {
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 3) {
            printf("Opcao invalida!\n");
        }

    } while (opcao < 1 || opcao > 3);

    if (opcao == 1)
        p->genero = 'F';
    else if (opcao == 2)
        p->genero = 'M';
    else
        p->genero = 'O';

    do {
        printf("Idade: ");
        scanf("%d", &p->idade);

        if (p->idade < 0 || p->idade > 120) {
            printf("Idade invalida!\n");
        }

    } while (p->idade < 0 || p->idade > 120);

    p->gestante = 0;
    p->lactante = 0;

    if (p->genero == 'F') {

        printf("Esta gestante? (1-Sim / 0-Nao): ");
        scanf("%d", &p->gestante);

        while (p->gestante != 0 && p->gestante != 1) {
            printf("Digite 1 para Sim ou 0 para Nao: ");
            scanf("%d", &p->gestante);
        }

        printf("E lactante? (1-Sim / 0-Nao): ");
        scanf("%d", &p->lactante);

        while (p->lactante != 0 && p->lactante != 1) {
            printf("Digite 1 para Sim ou 0 para Nao: ");
            scanf("%d", &p->lactante);
        }
    }

    printf("Possui necessidade especial? (1-Sim / 0-Nao): ");
    scanf("%d", &p->necessidadeEspecial);

    while (p->necessidadeEspecial != 0 &&
           p->necessidadeEspecial != 1) {
        printf("Digite 1 para Sim ou 0 para Nao: ");
        scanf("%d", &p->necessidadeEspecial);
    }

    printf("Possui condicao de obesidade? (1-Sim / 0-Nao): ");
    scanf("%d", &p->obeso);

    while (p->obeso != 0 && p->obeso != 1) {
        printf("Digite 1 para Sim ou 0 para Nao: ");
        scanf("%d", &p->obeso);
    }

    printf("\nCadastro realizado!\n");
}
