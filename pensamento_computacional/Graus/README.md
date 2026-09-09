# Conversor de Temperatura em C

Programa de console em C que converte valores entre as escalas **Celsius**, **Fahrenheit** e **Kelvin**, através de um menu interativo no terminal.

## Funcionalidades

O programa oferece as seguintes conversões:

1. Celsius → Fahrenheit
2. Kelvin → Fahrenheit
3. Celsius → Kelvin
4. Fahrenheit → Kelvin
5. Fahrenheit → Celsius
6. Kelvin → Celsius
7. Sair do programa

## Como funciona

- Cada conversão é implementada em uma função própria (ex: `celcius_faren()`, `kelvin_celcius()`), que lê o valor de entrada, calcula o resultado e imprime na tela.
- A função `menu()` centraliza a exibição das opções e direciona a chamada para a função de conversão correspondente, em um laço `do-while` que se repete até o usuário escolher sair (opção 7).
- A função `main()` apenas chama `menu()`, mantendo o ponto de entrada do programa limpo e organizado.

## Tecnologias

- Linguagem C (padrão C99 ou superior)
- Bibliotecas: `stdio.h`, `stdlib.h`

## Como compilar e executar

### Linux / macOS
```bash
gcc -Wall -o conversor Conversor_de_temperatura.c
./conversor
```

### Windows (com MinGW)
```bash
gcc -Wall -o conversor.exe Conversor_de_temperatura.c
conversor.exe
```

## Exemplo de uso

```
===== Conversor de Temperatura =====
1 - Celsius para Fahrenheit
2 - Kelvin para Fahrenheit
3 - Celsius para Kelvin
4 - Fahrenheit para Kelvin
5 - Fahrenheit para Celsius
6 - Kelvin para Celsius
7 - Sair
Escolha uma opcao:
1
Diga o valor do celcius:
25
Valor em Fahrenheit 77.00
```

## Estrutura do projeto

```
.
├── Conversor_de_temperatura.c
└── README.md
```

## Possíveis melhorias futuras

- Validar a entrada do usuário (evitar comportamento inesperado ao digitar letras em vez de números).
- Adicionar um loop para permitir múltiplas conversões dentro da mesma opção sem voltar ao menu.
- Separar as funções de conversão em um arquivo `.h`/`.c` próprio (modularização).

## Autor

Projeto desenvolvido por Luan como parte dos estudos de lógica de programação e linguagem C.
