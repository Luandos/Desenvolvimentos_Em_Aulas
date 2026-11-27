
#include "clinica.h"

void inicializarFila(Fila *fila) {

    fila->inicio = 0;
    fila->fim = 0;
    fila->quantidade = 0;
}

// INSERIR PACIENTE
int inserirFila(Fila *fila, Paciente p) {

    if (fila->quantidade >= MAX_PACIENTES) {
        return 0;
    }

    fila->pacientes[fila->fim] = p;

    fila->fim = (fila->fim + 1) % MAX_PACIENTES;

    fila->quantidade++;

    return 1;
}

// REMOVER PACIENTE
int removerFila(Fila *fila, Paciente *p) {

    if (fila->quantidade == 0) {
        return 0;
    }

    *p = fila->pacientes[fila->inicio];

    fila->inicio = (fila->inicio + 1) % MAX_PACIENTES;

    fila->quantidade--;

    return 1;
}

// CONSULTAR PRIMEIRO PACIENTE
int consultarFila(Fila fila, Paciente *p) {

    if (fila.quantidade == 0) {
        return 0;
    }

    *p = fila.pacientes[fila.inicio];

    return 1;
}
