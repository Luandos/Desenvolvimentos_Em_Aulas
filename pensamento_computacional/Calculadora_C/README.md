# 🧮 Calculadora em C

Uma calculadora desenvolvida em **C** como projeto de estudo, com operações matemáticas básicas, funções científicas e um submenu para operações trigonométricas.

O projeto utiliza funções da biblioteca `math.h` e uma interface simples executada diretamente no terminal.

## 📋 Funcionalidades

### Operações básicas
- Soma de dois ou mais números
- Subtração de dois ou mais números
- Multiplicação de dois ou mais números
- Divisão de dois ou mais números
- Resto da divisão entre números inteiros

### Operações matemáticas
- Potenciação
- Raiz quadrada
- Raiz cúbica
- Logaritmo natural
- Logaritmo na base 10
- Função exponencial
- Valor absoluto
- Arredondamento para cima (`ceil`)
- Arredondamento para baixo (`floor`)
- Cálculo da hipotenusa

### Trigonometria
- Seno
- Cosseno
- Tangente
- Conversão entre graus e radianos

## 🛠️ Tecnologias utilizadas

- **C**
- Biblioteca padrão `stdio.h`
- Biblioteca matemática `math.h`
- Biblioteca `stdbool.h`
- GCC para compilação

## 📁 Estrutura do projeto

```text
calculadora/
├── main.c
├── README.md

```

- `main.c` — implementação da calculadora em C.
- `calculadora_cientifica_Completa.fprg` — arquivo do projeto/modelagem da calculadora no Flowgorithm.
- `README.md` — documentação do projeto.

## 🚀 Como executar

### 1. Clone o repositório

```bash
git clone URL_DO_SEU_REPOSITORIO
cd NOME_DO_REPOSITORIO
```

### 2. Compile o programa

Com GCC:

```bash
gcc main.c -o calculadora -lm
```

A opção `-lm` é necessária para vincular a biblioteca matemática utilizada pelas funções de `math.h`.

### 3. Execute

No Linux/macOS:

```bash
./calculadora
```

No Windows:

```bash
calculadora.exe
```

## 💻 Como utilizar

Ao iniciar o programa, um menu é apresentado no terminal:

```text
===== CALCULADORA =====
 1  - Soma
 2  - Subtracao
 3  - Multiplicacao
 4  - Divisao
 5  - Resto da divisao
 6  - Potencia
 7  - Raiz quadrada
 8  - Raiz cubica
 9  - Logaritmo natural
10  - Logaritmo base 10
11  - Exponencial
12  - Valor absoluto
13  - Arredondar para cima
14  - Arredondar para baixo
15  - Hipotenusa
16  - Trigonometria (submenu)
 0  - Sair
```

Basta selecionar a operação desejada e informar os valores solicitados pelo programa.

## 🧠 Conceitos praticados

Este projeto foi desenvolvido com foco no aprendizado de fundamentos da linguagem C, incluindo:

- Funções
- Variáveis e tipos de dados
- Entrada e saída de dados com `scanf` e `printf`
- Estruturas condicionais (`switch`)
- Estruturas de repetição (`do...while` e `for`)
- Arrays de tamanho definido em tempo de execução
- Operadores aritméticos
- Uso de bibliotecas
- Funções matemáticas da `math.h`
- Organização de um programa em diferentes funções

## 📌 Observações

O projeto possui caráter acadêmico e de estudo. Algumas partes do código ainda podem ser aprimoradas, principalmente no tratamento de entradas inválidas, validação de divisão por zero, inicialização de variáveis e padronização dos valores retornados pelas funções.

## 🔮 Próximos passos

Algumas melhorias que podem ser implementadas futuramente:

- [ ] Adicionar validação de entradas
- [ ] Tratar divisão por zero
- [ ] Melhorar o tratamento de erros
- [ ] Corrigir e padronizar mensagens de conversão entre graus e radianos
- [ ] Organizar as funções em arquivos `.c` e `.h`
- [ ] Melhorar a interface do terminal
- [ ] Adicionar histórico de operações
- [ ] Criar testes para as principais operações

## 👨‍💻 Autor

**Luan Dos Santos**

Projeto desenvolvido para prática e evolução dos conhecimentos em programação e linguagem C.
