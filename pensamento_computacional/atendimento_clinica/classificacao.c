
#include "clinica.h"

int classificarPaciente(Paciente p) {

    // PRIORIDADE URGENTE
    if (p.idade > 80) {
        return 3;
    }

    // PRIORIDADE PREFERENCIAL
    if (
        p.gestante == 1 ||
        p.lactante == 1 ||
        p.necessidadeEspecial == 1 ||
        p.obeso == 1
    ) {
        return 2;
    }

    // Mulheres com 60 anos ou mais
    if (p.genero == 'F' && p.idade >= 60) {
        return 2;
    }

    // Homens com 65 anos ou mais
    if (p.genero == 'M' && p.idade >= 65) {
        return 2;
    }

    // Sem prioridade
    return 1;
}
