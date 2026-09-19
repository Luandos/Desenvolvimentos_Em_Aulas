# Monitoramento de Temperatura de Máquina

## 1. Identificação

**Aluno:** Luan Dos Santos Rodrigues  
**Disciplina:** Algoritmos E Pensamento Computacional  
**Professora:** Profa. Karla Sartin  
**Título do projeto:** Monitoramento de Temperatura de Máquina

## 2. Objetivo

O objetivo deste projeto é desenvolver um programa em linguagem C capaz de monitorar a temperatura de uma máquina a partir de um limite definido pelo usuário.

O programa permite acompanhar diferentes leituras de temperatura e identificar situações em que a temperatura permanece acima do limite por três medições consecutivas. Nessa situação, o monitoramento é encerrado automaticamente, simulando uma condição de alerta para uma possível elevação excessiva da temperatura.

## 3. Funcionamento do programa

### Definição do limite de temperatura

Ao iniciar o programa, o usuário informa o limite máximo de temperatura que será utilizado durante o monitoramento.

A entrada é armazenada na variável `limite` e utilizada posteriormente para comparar cada nova temperatura registrada.

### Leitura das temperaturas

Após definir o limite, o programa solicita repetidamente a temperatura atual da máquina.

Cada valor informado é armazenado na variável `temp` e utilizado para:

- acumular a soma das temperaturas;
- identificar a menor temperatura registrada;
- identificar a maior temperatura registrada;
- calcular posteriormente a média;
- verificar se a temperatura ultrapassou o limite definido.

### Tratamento de valores inválidos

O programa verifica se os valores digitados são numéricos utilizando `scanf()`.

Quando o usuário informa um valor inválido, o programa exibe uma mensagem de erro e continua solicitando uma nova entrada até que um número seja informado.

Esse tratamento é utilizado tanto para o limite de temperatura quanto para as temperaturas monitoradas.

### Identificação de temperaturas acima do limite

Após cada leitura, a temperatura atual é comparada com o limite utilizando a condição:

```c
if (temp > limite)
```

Quando a temperatura está acima do limite, o contador de ocorrências consecutivas (`contli`) é incrementado.

Quando a temperatura não ultrapassa o limite, o contador é zerado:

```c
else {
    contli = 0;
}
```

### Contagem de temperaturas consecutivas

O contador `contli` registra quantas temperaturas consecutivas ficaram acima do limite.

Por exemplo, considerando um limite de `80°C`:

```text
81°C → 1 ocorrência
85°C → 2 ocorrências
79°C → contador volta para 0
82°C → 1 ocorrência
```

Isso significa que apenas temperaturas acima do limite em sequência são consideradas para o encerramento do monitoramento.

### Condição de encerramento

O monitoramento continua enquanto:

```c
while (contli != 3)
```

Quando o contador chega a `3`, o programa informa que o limite foi excedido e encerra o processo de monitoramento.

Ao final, são apresentados:

- menor temperatura registrada;
- maior temperatura registrada;
- média das temperaturas;
- quantidade de medições realizadas.

## 4. Estruturas de repetição utilizadas

O programa utiliza a estrutura `while` em três pontos principais.

### Validação do limite

```c
while (scanf("%f", &limite) != 1)
```

Esse `while` é utilizado para repetir a entrada enquanto o valor informado não for um número válido.

### Validação das temperaturas

```c
while (scanf("%f", &temp) != 1)
```

O mesmo princípio é aplicado às temperaturas monitoradas. Enquanto a entrada for inválida, o programa continua solicitando um valor correto.

### Monitoramento principal

```c
while (contli != 3)
```

Esse é o laço responsável por manter o monitoramento em execução. A condição é testada antes de cada nova iteração e o programa permanece no laço enquanto não houver três temperaturas consecutivas acima do limite.

### Por que foi utilizado `while`?

A escolha do `while` foi adequada porque a quantidade de repetições não é definida previamente. O programa precisa continuar recebendo temperaturas até que uma determinada condição seja alcançada.

Além disso, no monitoramento principal, é importante verificar a condição de encerramento antes de iniciar uma nova leitura. Quando `contli` chega a `3`, o laço deixa de executar e o programa passa para a apresentação dos resultados.

O projeto não utiliza `do...while`, pois não houve uma situação em que fosse necessário garantir a execução do bloco pelo menos uma vez antes de verificar a condição.

## 5. Como executar

### Compilação

Considerando o arquivo `main(1).c`, utilize:

```bash
gcc "main(1).c" -o monitoramento
```

Caso o arquivo seja renomeado para `monitoramento.c`, a compilação pode ser feita com:

```bash
gcc monitoramento.c -o monitoramento
```

### Execução

Linux/macOS:

```bash
./monitoramento
```

Windows:

```bash
monitoramento.exe
```

## 6. Testes realizados

### Teste 1 — Validação de entradas inválidas

**Objetivo:** verificar se o programa rejeita valores que não são numéricos.

Foi informado um texto (`abc`) no campo do limite e, posteriormente, outro texto (`abc`) durante uma leitura de temperatura.

**Resultado obtido:** o programa identificou as entradas inválidas e solicitou novamente um número válido.

Exemplo da resposta apresentada:

```text
Valor invalido! Digite um numero:
Valor invalido, tente novamente:
```

Depois das entradas válidas, o monitoramento continuou normalmente.

### Teste 2 — Temperaturas acima do limite, porém não consecutivas

**Limite utilizado:** `80°C`

Sequência de temperaturas utilizada:

```text
81°C
79°C
82°C
78°C
90°C
79°C
91°C
85°C
86°C
87°C
```

Nesse teste, algumas temperaturas ultrapassaram `80°C`, mas foram interrompidas por temperaturas iguais ou inferiores ao limite. O contador de ocorrências consecutivas foi, portanto, zerado sempre que isso aconteceu.

**Resultado obtido:** o programa não encerrou nas primeiras ultrapassagens isoladas. O encerramento ocorreu somente depois das temperaturas `85°C`, `86°C` e `87°C`, que formaram três ocorrências consecutivas acima do limite.

Resultados apresentados ao final:

```text
Menor temperatura: 78.00°C
Maior temperatura: 91.00°C
Media: 83.44
Quantidade de vezes monitorado: 9
```

### Teste 3 — Três temperaturas consecutivas acima do limite

**Limite utilizado:** `80°C`

Sequência de temperaturas utilizada:

```text
81°C
82°C
83°C
```

As três temperaturas ficaram acima do limite de `80°C`.

**Resultado obtido:** após a terceira leitura consecutiva acima do limite, o programa exibiu a mensagem de encerramento automático:

```text
Limite exedido, programa irá se encerrar ...
```

Resultados apresentados:

```text
Menor temperatura: 81.00°C
Maior temperatura: 83.00°C
Media: 82.00
Quantidade de vezes monitorado: 3
```

## Conclusão sobre a escolha da estrutura de repetição

Foi escolhida a estrutura `while` porque o número de repetições do monitoramento não é conhecido antecipadamente. O programa deve continuar recebendo temperaturas enquanto a condição de encerramento não for atingida.

A diferença entre testar a condição antes ou depois da execução foi importante principalmente no laço principal. Com `while`, a condição `contli != 3` é verificada antes de cada nova execução do bloco. Dessa maneira, quando o contador chega a três temperaturas consecutivas acima do limite, o programa não realiza uma nova leitura e passa diretamente para a apresentação dos resultados.

Nos laços utilizados para validação das entradas, o `while` também é adequado porque a repetição só precisa ocorrer enquanto o valor informado for inválido.
