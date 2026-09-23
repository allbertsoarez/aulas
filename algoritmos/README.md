<div align="center">
  <br><br>
  <h1>🧠 APOSTILA DE ALGORITMOS</h1>
  <h2>Lógica, Pensamento Computacional e Pseudocódigo</h2>
  <br>
  <p><strong>Disciplina:</strong> Algoritmos</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução a Algoritmos](#1-introdução-a-algoritmos)
2. [Tipos de Dados e Variáveis](#2-tipos-de-dados-e-variáveis)
3. [Operadores](#3-operadores)
4. [Entrada, Processamento e Saída](#4-entrada-processamento-e-saída)
5. [Estruturas Condicionais](#5-estruturas-condicionais)
6. [Estruturas de Repetição](#6-estruturas-de-repetição)
7. [Estruturas Homogêneas (Vetores e Matrizes)](#7-estruturas-homogêneas-vetores-e-matrizes)
8. [Funções e Procedimentos](#8-funções-e-procedimentos)
9. [Exercícios Práticos](#9-exercícios-práticos)
10. [Referências Bibliográficas](#10-referências-bibliográficas)

---

## 1. Introdução a Algoritmos

### 1.1 O que é um Algoritmo?
Um algoritmo é uma sequência finita, ordenada e bem definida de passos que resolve um problema ou realiza uma tarefa. No dia a dia, seguimos algoritmos o tempo todo: uma receita de bolo, as instruções para montar um móvel ou o passo a passo para trocar um pneu.

Na computação, um algoritmo é a base de todo programa. Antes de escrever código em qualquer linguagem, precisamos pensar na **lógica** da solução.

### 1.2 Características de um Bom Algoritmo
- **Finitude:** Deve ter um número finito de passos.
- **Definição:** Cada passo deve ser claro e sem ambiguidade.
- **Entrada:** Pode ter zero ou mais entradas.
- **Saída:** Deve produzir pelo menos uma saída.
- **Efetividade:** Cada passo deve ser executável em tempo finito.

### 1.3 Formas de Representação
| Forma | Descrição |
| :--- | :--- |
| **Descrição Narrativa** | Texto em linguagem natural (português). |
| **Fluxograma** | Representação gráfica com símbolos padronizados. |
| **Pseudocódigo (Portugol)** | Linguagem intermediária entre o natural e a programação. |

> 💻 **Prática:** Para baixar os algoritmos em Portugol relacionados a esta apostila, acesse a [Pasta de Scripts Portugol](./portugol/README.md).

---

## 2. Tipos de Dados e Variáveis

### 2.1 O que é uma Variável?
Uma variável é um espaço na memória do computador que armazena um valor que pode ser alterado durante a execução do algoritmo. Toda variável possui um **nome**, um **tipo** e um **valor**.

### 2.2 Tipos Primitivos de Dados
| Tipo | Descrição | Exemplos |
| :--- | :--- | :--- |
| `INTEIRO` | Números sem parte decimal. | `5`, `-3`, `0`, `42` |
| `REAL` | Números com parte decimal. | `3.14`, `-0.5`, `2.0` |
| `CARACTERE` | Texto (cadeia de caracteres). | `"Olá"`, `"A"`, `"123"` |
| `LOGICO` | Valores booleanos. | `VERDADEIRO`, `FALSO` |

### 2.3 Regras para Nomes de Variáveis
- Devem começar com uma letra.
- Podem conter letras, números e `_` (underline).
- Não podem conter espaços ou caracteres especiais (`@`, `#`, `$`, etc.).
- Não podem ser palavras reservadas (`SE`, `ENQUANTO`, `INTEIRO`, etc.).

---

## 3. Operadores

### 3.1 Operadores Aritméticos
| Operador | Operação | Exemplo | Resultado |
| :---: | :--- | :--- | :---: |
| `+` | Adição | `5 + 3` | `8` |
| `-` | Subtração | `10 - 4` | `6` |
| `*` | Multiplicação | `3 * 7` | `21` |
| `/` | Divisão real | `7 / 2` | `3.5` |
| `DIV` | Divisão inteira | `7 DIV 2` | `3` |
| `MOD` | Resto da divisão | `7 MOD 2` | `1` |

### 3.2 Operadores Relacionais
| Operador | Significado | Exemplo | Resultado |
| :---: | :--- | :--- | :---: |
| `=` | Igual a | `5 = 5` | `VERDADEIRO` |
| `<>` | Diferente de | `5 <> 3` | `VERDADEIRO` |
| `>` | Maior que | `7 > 3` | `VERDADEIRO` |
| `<` | Menor que | `2 < 8` | `VERDADEIRO` |
| `>=` | Maior ou igual | `5 >= 5` | `VERDADEIRO` |
| `<=` | Menor ou igual | `3 <= 1` | `FALSO` |

### 3.3 Operadores Lógicos
| Operador | Significado | Exemplo | Resultado |
| :---: | :--- | :--- | :---: |
| `E` (AND) | Ambas verdadeiras | `V E V` | `VERDADEIRO` |
| `OU` (OR) | Pelo menos uma verdadeira | `F OU V` | `VERDADEIRO` |
| `NAO` (NOT) | Inverte o valor | `NAO V` | `FALSO` |

---

## 4. Entrada, Processamento e Saída

Todo algoritmo segue o modelo básico **E → P → S**:

- **Entrada (E):** Receber dados do usuário (`LEIA`).
- **Processamento (P):** Realizar cálculos e operações.
- **Saída (S):** Exibir o resultado (`ESCREVA`).

### Exemplo em Pseudocódigo:
```portugol
ALGORITMO "Soma de dois números"
VAR
    n1, n2, soma : INTEIRO
INICIO
    ESCREVA("Digite o primeiro número: ")
    LEIA(n1)
    ESCREVA("Digite o segundo número: ")
    LEIA(n2)
    soma <- n1 + n2
    ESCREVA("A soma é: ", soma)
FIMALGORITMO
```

> 💻 **Prática:** Baixe este exemplo na [Pasta de Scripts Portugol](./portugol/README.md) como `variaveis_tipos.por`.

---

## 5. Estruturas Condicionais

### 5.1 Simples (SE)
```portugol
SE (condição) ENTAO
    // comandos executados se a condição for VERDADEIRA
FIMSE
```

### 5.2 Composta (SE / SENÃO)
```portugol
SE (condição) ENTAO
    // comandos se VERDADEIRO
SENAO
    // comandos se FALSO
FIMSE
```

### 5.3 Encadeada (SE / SENÃO SE)
```portugol
SE (condição1) ENTAO
    // comandos
SENAO SE (condição2) ENTAO
    // comandos
SENAO
    // comandos
FIMSE
```

### 5.4 Múltipla Escolha (ESCOLHA / CASO)
```portugol
ESCOLHA (variável)
    CASO 1:
        ESCREVA("Opção 1")
    CASO 2:
        ESCREVA("Opção 2")
    OUTRO CASO:
        ESCREVA("Opção inválida")
FIMESCOLHA
```

---

## 6. Estruturas de Repetição

### 6.1 PARA (Repetição com Contador)
Usado quando sabemos **quantas vezes** o laço deve executar.
```portugol
PARA i DE 1 ATE 10 FACA
    ESCREVA(i)
FIMPARA
```

### 6.2 ENQUANTO (Repetição com Teste no Início)
Executa **enquanto** a condição for verdadeira. Pode não executar nenhuma vez.
```portugol
ENQUANTO (condição) FACA
    // comandos
FIMENQUANTO
```

### 6.3 REPITA (Repetição com Teste no Final)
Executa **pelo menos uma vez**, até que a condição se torne verdadeira.
```portugol
REPITA
    // comandos
ATE (condição)
```

---

## 7. Estruturas Homogêneas (Vetores e Matrizes)

### 7.1 Vetores (Arrays Unidimensionais)
Um vetor é uma variável que armazena vários valores do **mesmo tipo**, acessados por um **índice**.

```portugol
VAR
    notas : VETOR[1..5] DE REAL
INICIO
    notas[1] <- 8.5
    notas[2] <- 7.0
    // ...
```

### 7.2 Matrizes (Arrays Bidimensionais)
Uma matriz é uma tabela com **linhas e colunas**.

```portugol
VAR
    tabela : VETOR[1..3, 1..3] DE INTEIRO
```

---

## 8. Funções e Procedimentos

### 8.1 Procedimento
Executa uma tarefa mas **não retorna** valor.
```portugol
PROCEDIMENTO mostrarMensagem()
INICIO
    ESCREVA("Olá, mundo!")
FIMPROCEDIMENTO
```

### 8.2 Função
Executa uma tarefa e **retorna** um valor.
```portugol
FUNCAO somar(a, b : INTEIRO) : INTEIRO
INICIO
    RETORNE a + b
FIMFUNCAO
```

---

## 9. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Calcular a média de 3 notas e informar se o aluno foi aprovado (média >= 7). | ⭐ |
| 2 | Ler 10 números e exibir apenas os pares. | ⭐⭐ |
| 3 | Preencher um vetor com 5 notas e calcular a média geral. | ⭐⭐ |
| 4 | Criar uma função que retorne o fatorial de um número. | ⭐⭐⭐ |
| 5 | Ordenar um vetor de 10 números usando Bubble Sort. | ⭐⭐⭐ |

> 💻 **Prática:** As resoluções destes exercícios em Portugol estão disponíveis na [Pasta de Scripts Portugol](./portugol/README.md).

---

## 10. Referências Bibliográficas

- MANZANO, José Augusto N. G.; OLIVEIRA, Jayr Figueiredo de. **Algoritmos: Lógica para Desenvolvimento de Programação de Computadores**. São Paulo: Érica, 2011.
- ASCENCIO, Ana Fernanda Gomes; CAMPOS, Edilene Aparecida Veneruchi de. **Fundamentos da Programação de Computadores**. São Paulo: Pearson, 2012.
- FORBELLONE, André Luiz Villar; EBERSPÄCHER, Henri Frederico. **Lógica de Programação: A Construção de Algoritmos e Estruturas de Dados**. São Paulo: Pearson, 2005.

---

<div align="center">
  <br>
  <a href="./README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
