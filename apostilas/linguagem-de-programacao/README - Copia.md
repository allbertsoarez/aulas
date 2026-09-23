<div align="center">
  <br><br>
  <h1>⚙️ APOSTILA DE LINGUAGEM DE PROGRAMAÇÃO C</h1>
  <h2>Fundamentos, Memória e Estrutura de Dados</h2>
  <br>
  <p><strong>Disciplina:</strong> Linguagem de Programação</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução à Linguagem C](#1-introdução-à-linguagem-c)
2. [Estrutura Básica de um Programa](#2-estrutura-básica-de-um-programa)
3. [Variáveis e Tipos de Dados](#3-variáveis-e-tipos-de-dados)
4. [Operadores](#4-operadores)
5. [Entrada e Saída de Dados](#5-entrada-e-saída-de-dados)
6. [Estruturas de Controle (Condicionais)](#6-estruturas-de-controle-condicionais)
7. [Estruturas de Repetição](#7-estruturas-de-repetição)
8. [Funções](#8-funções)
9. [Introdução a Ponteiros](#9-introdução-a-ponteiros)
10. [Exercícios Práticos](#10-exercícios-práticos)
11. [Referências Bibliográficas](#11-referências-bibliográficas)

---

## 1. Introdução à Linguagem C

### 1.1 História e Importância
Criada em 1972 por Dennis Ritchie nos Laboratórios Bell, a linguagem C foi desenvolvida para criar o sistema operacional UNIX. Hoje, ela é a base de sistemas como Windows, Linux, macOS, e de linguagens modernas como C++, Java, C# e Python.

### 1.2 Por que aprender C?
- **Alto Desempenho:** É uma linguagem de baixo/médio nível, muito próxima do hardware.
- **Controle de Memória:** Permite manipular endereços de memória diretamente (ponteiros).
- **Portabilidade:** Um código C pode ser compilado em diversas arquiteturas com poucas ou nenhuma alteração.

---

## 2. Estrutura Básica de um Programa

Todo programa em C segue uma estrutura fundamental. O ponto de partida de qualquer execução é a função `main()`.

```c
#include <stdio.h> // Diretiva de pré-processamento (Biblioteca padrão)

int main() {       // Função principal (ponto de entrada)
    printf("Olá, Mundo!\n"); // Comando de saída
    return 0;      // Indica que o programa terminou com sucesso
}
```

- **`#include <stdio.h>`**: Inclui a biblioteca de Entrada/Saída padrão (Standard Input Output).
- **`int main()`**: A função obrigatória onde o programa começa a ser executado.
- **`;` (Ponto e vírgula)**: Obrigatório no final de cada comando.
- **`{ }` (Chaves)**: Delimitam o início e o fim de blocos de código.

> 💻 **Prática:** Compile e execute seu primeiro programa usando o arquivo [`ola_mundo.c`](../../codigo-fonte/c/ola_mundo.c).

---

## 3. Variáveis e Tipos de Dados

Em C, toda variável deve ser **declarada com um tipo** antes de ser usada. O tipo define quanto espaço na memória a variável ocupará.

### 3.1 Tipos Primitivos
| Tipo | Tamanho Típico | Faixa de Valores | Formatador (`printf`) |
| :--- | :--- | :--- | :---: |
| `int` | 4 bytes | -2 bilhões a +2 bilhões | `%d` ou `%i` |
| `float` | 4 bytes | ± 10⁻³⁸ a ± 10³⁸ (6 casas decimais) | `%f` |
| `double` | 8 bytes | ± 10⁻³⁰⁸ a ± 10³⁰⁸ (15 casas decimais) | `%lf` |
| `char` | 1 byte | 1 caractere (tabela ASCII) | `%c` |

### 3.2 Declaração e Inicialização
```c
int idade = 25;
float altura = 1.75;
char letra = 'A'; // Aspas simples para char, duplas para strings
```

> 💻 **Prática:** Veja mais exemplos de formatação no arquivo [`variaveis_tipos.c`](../../codigo-fonte/c/variaveis_tipos.c).

---

## 4. Operadores

### 4.1 Aritméticos
| Operador | Operação | Exemplo |
| :---: | :--- | :--- |
| `+` | Adição | `a + b` |
| `-` | Subtração | `a - b` |
| `*` | Multiplicação | `a * b` |
| `/` | Divisão | `a / b` (Se ambos forem `int`, o resultado é `int`) |
| `%` | Resto da divisão | `a % b` |

### 4.2 Relacionais e Lógicos
| Operador | Significado | | Operador | Significado |
| :---: | :--- | :---: | :---: | :--- |
| `==` | Igual a | | `&&` | E (AND) |
| `!=` | Diferente de | | `||` | OU (OR) |
| `>` | Maior que | | `!` | Negação (NOT) |
| `<` | Menor que | | | |

---

## 5. Entrada e Saída de Dados

### 5.1 Saída (`printf`)
Usado para exibir dados na tela. Utiliza especificadores de formato para variáveis.
```c
int x = 10;
printf("O valor de x é: %d\n", x); // \n quebra a linha
```

### 5.2 Entrada (`scanf`)
Usado para ler dados do teclado. **Atenção:** É obrigatório usar o `&` (operador de endereço) antes da variável.
```c
int idade;
printf("Digite sua idade: ");
scanf("%d", &idade); // O & diz ao scanf ONDE guardar o valor na memória
```

> 💻 **Prática:** Pratique leitura e escrita de dados no arquivo [`entrada_saida.c`](../../codigo-fonte/c/entrada_saida.c).

---

## 6. Estruturas de Controle (Condicionais)

Permitem que o programa tome decisões com base em condições lógicas.

### 6.1 Estrutura `if ... else`
```c
if (condicao) {
    // Executa se for VERDADEIRO
} else {
    // Executa se for FALSO
}
```

### 6.2 Múltipla Escolha (`switch`)
Ideal para comparar uma variável com vários valores constantes.
```c
switch (opcao) {
    case 1: printf("Opção 1"); break;
    case 2: printf("Opção 2"); break;
    default: printf("Opção inválida");
}
```

> 💻 **Prática:** Veja um exemplo de validação de notas no arquivo [`condicionais_if.c`](../../codigo-fonte/c/condicionais_if.c).

---

## 7. Estruturas de Repetição

### 7.1 `for`
Usado quando se sabe **quantas vezes** o laço deve repetir.
```c
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}
```

### 7.2 `while`
Repete **enquanto** a condição for verdadeira (teste no início).
```c
while (x > 0) {
    x--;
}
```

### 7.3 `do ... while`
Executa o bloco **pelo menos uma vez** (teste no final).
```c
do {
    // comandos
} while (condicao);
```

> 💻 **Prática:** Gere uma tabuada dinâmica no arquivo [`repeticao_for.c`](../../codigo-fonte/c/repeticao_for.c).

---

## 8. Funções

Funções permitem dividir o código em blocos reutilizáveis.

```c
// Tipo de retorno | Nome | Parâmetros
int multiplicar(int a, int b) {
    return a * b;
}

int main() {
    int resultado = multiplicar(5, 3);
    return 0;
}
```
- **`void`**: Usado quando a função não retorna nenhum valor.
- **Parâmetros**: Variáveis que a função recebe para trabalhar.

> 💻 **Prática:** Crie e chame suas próprias funções no arquivo [`funcoes.c`](../../codigo-fonte/c/funcoes.c).

---

## 9. Introdução a Ponteiros

O grande diferencial do C. Um **ponteiro** é uma variável que armazena o **endereço de memória** de outra variável, em vez de armazenar um valor.

- **`&` (E comercial)**: Retorna o endereço de memória de uma variável.
- **`*` (Asterisco)**: Usado para declarar um ponteiro ou para acessar o valor guardado no endereço (desreferência).

```c
int numero = 10;
int *ponteiro;     // Declaração do ponteiro
ponteiro = &numero; // Ponteiro recebe o ENDEREÇO de 'numero'

printf("%d\n", *ponteiro); // Imprime 10 (o valor guardado no endereço)
```

> *Por que usar?* Ponteiros são essenciais para manipulação de strings, alocação dinâmica de memória e passagem de parâmetros por referência.

---

## 10. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Crie um programa que leia dois números inteiros e imprima a soma, subtração, multiplicação e divisão. | ⭐ |
| 2 | Faça um programa que leia a idade de uma pessoa e informe se ela pode votar (idade >= 16). | ⭐ |
| 3 | Escreva um programa que calcule o fatorial de um número usando o laço `for`. | ⭐⭐ |
| 4 | Crie uma função que receba dois números e retorne o maior deles. | ⭐⭐ |
| 5 | Declare uma variável inteira, crie um ponteiro para ela e altere o valor da variável original usando apenas o ponteiro. | ⭐⭐⭐ |

> 💻 **Prática:** Os esqueletos dos códigos e resoluções estão disponíveis na [Pasta de Códigos C](../../codigo-fonte/c/README.md).

---

## 11. Referências Bibliográficas

- SCHILDT, Herbert. **C: A Referência Completa**. Rio de Janeiro: Alta Books, 2013.
- MIZRAHI, Victorine Viviane. **Treinamento em Linguagem C**. São Paulo: Pearson, 2008.
- KERNIGHAN, Brian W.; RITCHIE, Dennis M. **C: Como Programar**. São Paulo: Pearson, 2006.

---

<div align="center">
  <br>
  <a href="../../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
