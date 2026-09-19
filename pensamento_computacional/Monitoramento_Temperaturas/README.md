# 🌡️ Monitoramento de Temperatura de Máquina

Programa desenvolvido em **C** para realizar o monitoramento da temperatura de uma máquina a partir de um limite definido pelo usuário.

Durante a execução, o sistema recebe várias medições de temperatura, identifica os menores e maiores valores registrados, calcula a média das temperaturas e encerra o monitoramento quando o limite é ultrapassado por **3 medições consecutivas**.

## 📋 Funcionalidades

- Definição do limite de temperatura pelo usuário
- Leitura contínua da temperatura atual
- Validação da entrada de dados numéricos
- Identificação da menor temperatura registrada
- Identificação da maior temperatura registrada
- Cálculo da temperatura média
- Contagem da quantidade de medições realizadas
- Monitoramento de ultrapassagens consecutivas do limite
- Encerramento automático após 3 ultrapassagens consecutivas

## ⚙️ Como funciona

Primeiramente, o programa solicita ao usuário um **limite de temperatura**.

Em seguida, são realizadas medições sucessivas. Sempre que uma temperatura ultrapassa o limite definido, um contador de ocorrências é incrementado.

Quando uma temperatura que não ultrapassa o limite é registrada, esse contador é zerado. Dessa forma, o programa somente encerra a execução quando o limite é ultrapassado em **3 medições consecutivas**.

Ao final do monitoramento, são apresentados:

- Menor temperatura registrada
- Maior temperatura registrada
- Média das temperaturas
- Quantidade total de medições realizadas

## 🛠️ Tecnologias utilizadas

- **Linguagem C**
- Biblioteca padrão `stdio.h`
- Compilador C, como GCC

## 💻 Exemplo de execução

```text
Iniciando...
Digite o limite de temperatura: 80

Digite a temperatura atual: 75
Digite a temperatura atual: 82
Digite a temperatura atual: 85
Digite a temperatura atual: 90

Limite exedido, programa irá se encerrar ...

Resultados
Menor temperatura: 75.00°C
Maior temperatura: 90.00°C
Media: 83.00
Quantidade de vezes monitorado: 4
```

## 🚀 Como executar

### 1. Clone o repositório

```bash
git clone URL_DO_SEU_REPOSITORIO
cd NOME_DO_REPOSITORIO
```

### 2. Compile o programa

Utilizando o GCC:

```bash
gcc "main(1).c" -o monitoramento
```

### 3. Execute

No Linux/macOS:

```bash
./monitoramento
```

No Windows:

```bash
monitoramento.exe
```

## 🧠 Conceitos praticados

Este projeto utiliza conceitos fundamentais de programação em C, como:

- Variáveis e tipos de dados
- Entrada e saída com `scanf()` e `printf()`
- Estrutura de repetição `while`
- Estruturas condicionais `if` e `else`
- Operadores relacionais
- Acumulação de valores
- Cálculo de média
- Controle de contadores
- Validação de entrada de dados
- Análise de valores mínimo e máximo

## 🔄 Fluxo do programa

```text
Início
  ↓
Define o limite de temperatura
  ↓
Lê uma nova temperatura
  ↓
Atualiza soma, menor e maior temperatura
  ↓
Temperatura acima do limite?
  ├── Sim → Incrementa contador de ocorrências
  │           ↓
  │        3 ocorrências consecutivas?
  │           ├── Sim → Encerra monitoramento
  │           └── Não → Nova leitura
  │
  └── Não → Zera contador de ocorrências
              ↓
           Nova leitura
  ↓
Calcula a média
  ↓
Exibe os resultados
  ↓
Fim
```

## 🚧 Possíveis melhorias

- [ ] Corrigir e padronizar mensagens exibidas pelo programa
- [ ] Adicionar unidade `°C` à apresentação da média
- [ ] Permitir escolher a quantidade de medições
- [ ] Registrar as medições em arquivo
- [ ] Criar alertas para diferentes níveis de temperatura
- [ ] Melhorar o tratamento de valores inválidos
- [ ] Permitir monitoramento em tempo real com sensores físicos
- [ ] Separar o código em funções para melhorar a organização

## 📌 Observação

Este projeto possui caráter acadêmico e foi desenvolvido para praticar conceitos fundamentais da linguagem C aplicados a um cenário de monitoramento de temperatura.

## 👨‍💻 Autor

**Luan Dos Santos**

Projeto desenvolvido para prática e evolução dos conhecimentos em programação e linguagem C.
