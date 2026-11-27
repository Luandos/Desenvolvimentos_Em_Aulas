# Sistema de Gerenciamento de Senhas Clínicas

Sistema desenvolvido em linguagem C para gerenciamento de senhas e organização de filas de atendimento em uma clínica médica. A aplicação permite cadastrar pacientes, classificá-los automaticamente conforme critérios de prioridade e controlar a ordem de atendimento.

O projeto tem como objetivo aplicar conceitos de programação estruturada, modularização e manipulação de estruturas de dados na construção de uma solução funcional.

## Funcionalidades

- Cadastro de pacientes e registro de suas informações.
- Classificação automática por categoria de atendimento.
- Geração de senhas sequenciais independentes.
- Gerenciamento de filas utilizando o conceito FIFO (First In, First Out).
- Consulta da próxima senha a ser chamada.
- Registro e finalização de atendimentos.
- Painel textual com informações das chamadas e pacientes em espera.
- Contagem de pacientes por categoria.

## Categorias de Atendimento

O sistema utiliza três categorias para organizar a prioridade das chamadas:

| Código | Categoria | Critérios |
|:---:|:---|:---|
| N | Normal | Pacientes sem condições de prioridade. |
| P | Preferencial | Gestantes, lactantes, pessoas com necessidades especiais, pessoas com obesidade, mulheres a partir de 60 anos e homens a partir de 65 anos. |
| U | Urgente | Pacientes com idade superior a 80 anos. |

A ordem de atendimento segue a seguinte prioridade:

**Urgente → Preferencial → Normal**

Dentro de cada categoria, é respeitada a ordem de emissão das senhas.

As regras de classificação são critérios didáticos definidos para a atividade e não representam uma classificação médica de risco.

## Tecnologias e Conceitos

- Linguagem C
- Estruturas de dados (`struct`)
- Ponteiros e passagem de parâmetros por referência
- Vetores
- Filas circulares
- Funções e modularização
- Estruturas condicionais e de repetição

## Estrutura do Projeto

```text
Sistema_Clinica/
│
├── main.c
├── clinica.h
├── cadastro.c
├── classificacao.c
├── senhas.c
├── filas.c
├── atendimento.c
├── painel.c
│
└── README.md
```

### Organização dos Arquivos

| Arquivo | Descrição |
|---|---|
| `main.c` | Responsável pelo menu principal e integração dos módulos. |
| `clinica.h` | Contém as estruturas de dados e os protótipos das funções. |
| `cadastro.c` | Realiza o cadastro e a coleta de informações dos pacientes. |
| `classificacao.c` | Implementa as regras de classificação das prioridades. |
| `senhas.c` | Responsável pela geração das senhas sequenciais. |
| `filas.c` | Gerencia a inserção, remoção e consulta dos pacientes nas filas. |
| `atendimento.c` | Controla as chamadas e a finalização dos atendimentos. |
| `painel.c` | Apresenta as informações das filas e dos atendimentos. |

## Compilação e Execução

Para compilar o projeto, é necessário possuir um compilador C, como o GCC.

**1. Clone o repositório:**

```bash
git clone URL_DO_REPOSITORIO
```

**2. Acesse o diretório:**

```bash
cd Sistema_Clinica
```

**3. Compile os arquivos:**

```bash
gcc main.c cadastro.c classificacao.c senhas.c filas.c atendimento.c painel.c -o clinica
```

**4. Execute o programa:**

Windows:

```bash
clinica.exe
```

Linux:

```bash
./clinica
```

## Exemplo de Utilização

Ao iniciar a aplicação, o usuário terá acesso ao menu principal:

```text
====================================
    SISTEMA DE ATENDIMENTO CLINICO
====================================

1 - Cadastrar paciente
2 - Consultar proxima senha
3 - Chamar paciente
4 - Finalizar atendimento
5 - Exibir painel
0 - Encerrar sistema

Escolha uma opcao:
```

Exemplo de senhas geradas:

```text
N001 - Normal
P001 - Preferencial
U001 - Urgente
```

As chamadas seguem a prioridade estabelecida pelo sistema, independentemente da ordem em que os pacientes foram cadastrados.

## Objetivo Acadêmico

Projeto desenvolvido como atividade acadêmica para aplicação prática dos conceitos de programação em linguagem C, com foco na modularização, organização de estruturas de dados e gerenciamento de filas.

---

**Desenvolvido por [Seu Nome]**

Ciência da Computação | Linguagem C
