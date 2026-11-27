#ifndef CLINICA_H
#define CLINICA_H

#define MAX_PACIENTES 100

typedef struct {
    char genero;
    int idade;
    int gestante;
    int lactante;
    int necessidadeEspecial;
    int obeso;
    char senha[16];
    char categoria[20];
} Paciente;

typedef struct {
    Paciente pacientes[MAX_PACIENTES];
    int inicio;
    int fim;
    int quantidade;
} Fila;

typedef struct {
    int urgente;
    int preferencial;
    int normal;
} Contadores;

typedef struct {
    Paciente paciente;
    int ativo;
} Atendimento;

void cadastrarPaciente(Paciente *p);
int classificarPaciente(Paciente p);
void gerarSenha(Paciente *p, Contadores *cont);

void inicializarFila(Fila *fila);
int inserirFila(Fila *fila, Paciente p);
int removerFila(Fila *fila, Paciente *p);
int consultarFila(Fila fila, Paciente *p);

void inicializarAtendimento(Atendimento *at);
void consultarProxima(Fila *urgente, Fila *preferencial, Fila *normal);
void chamarPaciente(Fila *urgente, Fila *preferencial, Fila *normal,
                    Atendimento *at);
void finalizarAtendimento(Atendimento *at);
void exibirPainel(Fila urgente, Fila preferencial, Fila normal,
                  Atendimento at);

#endif
