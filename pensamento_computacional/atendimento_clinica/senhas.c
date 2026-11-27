
#include <stdio.h>
#include <string.h>
#include "clinica.h"

void gerarSenha(Paciente *p, Contadores *cont) {

    int categoria = classificarPaciente(*p);

    if (categoria == 3) {

        cont->urgente++;

        sprintf(p->senha, "U%03d", cont->urgente);

        strcpy(p->categoria, "Urgente");
    }

    else if (categoria == 2) {

        cont->preferencial++;

        sprintf(p->senha, "P%03d", cont->preferencial);

        strcpy(p->categoria, "Preferencial");
    }

    else {

        cont->normal++;

        sprintf(p->senha, "N%03d", cont->normal);

        strcpy(p->categoria, "Normal");
    }
}
