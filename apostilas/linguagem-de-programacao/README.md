<div align="center">
  <br><br>
  <h1>⚙️ APOSTILA DE LINGUAGEM DE PROGRAMAÇÃO</h1>
  <h2>Da Máquina ao Código: Assembly e C</h2>
  <br>
  <p><strong>Disciplina:</strong> Linguagem de Programação</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [A Evolução da Programação](#1-a-evolução-da-programação)
2. [Introdução ao Assembly](#2-introdução-ao-assembly)
3. [Variáveis e Memória em Assembly](#3-variáveis-e-memória-em-assembly)
4. [Controle de Fluxo em Assembly](#4-controle-de-fluxo-em-assembly)
5. [Assembly vs C: O Grande Salto](#5-assembly-vs-c-o-grande-salto)
6. [Estrutura Básica de um Programa em C](#6-estrutura-básica-de-um-programa-em-c)
7. [Variáveis e Tipos de Dados em C](#7-variáveis-e-tipos-de-dados-em-c)
8. [Entrada e Saída de Dados em C](#8-entrada-e-saída-de-dados-em-c)
9. [Estruturas de Controle em C](#9-estruturas-de-controle-em-c)
10. [Estruturas de Repetição em C](#10-estruturas-de-repetição-em-c)
11. [Funções em C](#11-funções-em-c)
12. [Exercícios Práticos](#12-exercícios-práticos)
13. [Referências Bibliográficas](#13-referências-bibliográficas)

---

## 1. A Evolução da Programação

### 1.1 Por que aprender Assembly se já temos Python?
Muitos alunos perguntam: *"Por que aprender C ou Assembly se posso programar em Python?"* A resposta é simples: **para entender o que acontece por baixo do capô**.

Imagine que você é um mecânico. Você pode dirigir um carro sem saber como o motor funciona, mas se o carro quebrar, você ficará perdido. Na programação é a mesma coisa.

### 1.2 A Linha do Tempo

| Geração | Época | Linguagem | Como era programar |
| :--- | :--- | :--- | :--- |
| **1ª Geração** | 1940s | Código de Máquina (Binário) | `01001000 01100101 01101100` — Tudo em 0s e 1s! |
| **2ª Geração** | 1950s | Assembly | `MOV EAX, 1` — Mnemônicos, mas ainda muito próximo do hardware. |
| **3ª Geração** | 1970s | C, Pascal, Fortran | `printf("Olá");` — Linguagens estruturadas, mais próximas do humano. |
| **4ª Geração** | 1990s | Python, Java, C# | `print("Olá")` — Alto nível, orientadas a objetos, muito mais simples. |

> 💡 **A grande lição:** Cada geração **abstraiu** a complexidade da anterior. Programar hoje é **muito mais fácil** do que era há 50 anos. Se você acha difícil aprender Python, imagine ter que programar em binário!

---

## 2. Introdução ao Assembly

### 2.1 O que é Assembly?
Assembly é uma linguagem de **baixo nível** que usa **mnemônicos** (abreviações em inglês) para representar instruções de máquina. Cada linha de Assembly corresponde a **uma única instrução** do processador.

### 2.2 Conceitos Fundamentais
- **Registradores:** São "mini-memórias" dentro do processador. Os principais em x86 são:
  - `EAX` — Acumulador (usado em cálculos)
  - `EBX` — Base (usado para endereçamento)
  - `ECX` — Contador (usado em loops)
  - `EDX` — Dados (usado em I/O)
- **Syscalls:** São chamadas ao sistema operacional (Linux) para realizar tarefas como imprimir na tela ou sair do programa.
- **Seções de memória:**
  - `.data` — Dados inicializados (variáveis com valor)
  - `.bss` — Dados não inicializados (reserva de espaço)
  - `.text` — O código do programa (instruções)

### 2.3 Olá Mundo em Assembly (15 linhas!)
```nasm
section .data
    msg db "Ola, Mundo!", 10
    len equ $ - msg

section .text
    global _start

_start:
    mov eax, 4          ; syscall sys_write
    mov ebx, 1          ; stdout
    mov ecx, msg        ; endereço da mensagem
    mov edx, len        ; tamanho
    int 0x80            ; chama o kernel

    mov eax, 1          ; syscall sys_exit
    mov ebx, 0          ; código 0 (sucesso)
    int 0x80
```

> 💻 **Prática:** Compile e execute este código no arquivo [`ola_mundo.asm`](../../codigo-fonte/asm/ola_mundo.asm).

---

## 3. Variáveis e Memória em Assembly

### 3.1 "Variáveis" em Assembly
Em Assembly, **não existem variáveis** como conhecemos em C ou Python. O que existe são **rótulos** (labels) que apontam para endereços de memória. Você precisa dizer ao processador **exatamente** quantos bytes quer reservar.

| Diretiva | Tamanho | Equivalente em C |
| :--- | :--- | :--- |
| `db` (define byte) | 1 byte | `char` |
| `dw` (define word) | 2 bytes | `short` |
| `dd` (define double word) | 4 bytes | `int` |

### 3.2 Acessando a Memória
Para ler ou escrever na memória, usamos **colchetes `[]`**:
```nasm
mov eax, [numero]    ; Lê o CONTEÚDO do endereço "numero"
mov [resultado], eax ; Escreve o valor de EAX no endereço "resultado"
```

> 💻 **Prática:** Veja como manipular "variáveis" no arquivo [`variaveis.asm`](../../codigo-fonte/asm/variaveis.asm).

---

## 4. Controle de Fluxo em Assembly

### 4.1 Condicionais (if/else)
Em Assembly, não existe `if`. Usamos **comparação** (`cmp`) seguida de **saltos** (`jmp`):

```nasm
cmp eax, 18      ; Compara EAX com 18
jl menor          ; Se EAX < 18, pula para o rótulo "menor"
; ... código do "maior" ...
jmp fim           ; Pula o bloco "menor" (equivale ao else)
menor:
; ... código do "menor" ...
fim:
```

| Instrução de Salto | Significado | Equivalente em C |
| :--- | :--- | :--- |
| `je` | Jump if Equal | `if (a == b)` |
| `jne` | Jump if Not Equal | `if (a != b)` |
| `jg` | Jump if Greater | `if (a > b)` |
| `jl` | Jump if Less | `if (a < b)` |
| `jge` | Jump if Greater or Equal | `if (a >= b)` |
| `jle` | Jump if Less or Equal | `if (a <= b)` |

### 4.2 Repetição (loops)
Não existe `for` ou `while`. O loop é feito manualmente com `cmp` e `jmp`:
```nasm
mov ecx, 1          ; contador = 1
loop_inicio:
    cmp ecx, 10     ; contador <= 10?
    jg loop_fim     ; Se não, sai do loop
    ; ... corpo do loop ...
    inc ecx         ; contador++
    jmp loop_inicio ; Volta ao início
loop_fim:
```

> 💻 **Prática:** Veja condicionais em [`condicional.asm`](../../codigo-fonte/asm/condicional.asm) e loops em [`repeticao.asm`](../../codigo-fonte/asm/repeticao.asm).

---

## 5. Assembly vs C: O Grande Salto

Agora vem a parte mais importante! Vamos comparar o **mesmo programa** escrito nas duas linguagens para você entender o quanto o C simplificou a vida do programador.

### 5.1 Comparação: Soma de dois números

| Assembly (12 linhas de lógica) | C (3 linhas de lógica) |
| :--- | :--- |
| `mov eax, [a]` | `int a = 10;` |
| `add eax, [b]` | `int b = 20;` |
| `mov [soma], eax` | `int soma = a + b;` |

### 5.2 Comparação: Olá Mundo

| Assembly | C |
| :--- | :--- |
| 15 linhas | 5 linhas |
| Precisa saber syscalls | Basta usar `printf()` |
| Precisa calcular tamanho da string | O `printf` faz isso sozinho |
| Precisa chamar `sys_exit` | O `return 0` faz isso |

### 5.3 O que o C fez por você?
| Recurso | Em Assembly | Em C |
| :--- | :--- | :--- |
| Variáveis | Rótulos de memória + colchetes | `int x = 10;` |
| Impressão | Syscall `sys_write` + registradores | `printf("x = %d", x);` |
| Leitura | Syscall `sys_read` + buffer manual | `scanf("%d", &x);` |
| if/else | `cmp` + `jl` + `jmp` + rótulos | `if (x > 0) { } else { }` |
| for/while | `cmp` + `inc` + `jmp` + rótulos | `for (int i=0; i<10; i++) { }` |
| Funções | `call` + `ret` + pilha manual | `int soma(int a, int b) { }` |

> 🎯 **Conclusão:** Se você consegue entender a lógica em Assembly, **C vai parecer incrivelmente fácil!** E se C parece fácil, Python vai parecer **moleza**. Programar não é difícil — difícil era programar em 1950!

> 💻 **Prática:** Veja a comparação lado a lado no arquivo [`comparacao_c.asm`](../../codigo-fonte/asm/comparacao_c.asm).

---

## 6. Estrutura Básica de um Programa em C

Agora que você viu como era difícil em Assembly, vamos aproveitar a simplicidade do C!

```c
#include <stdio.h> // Biblioteca de entrada/saída (o Assembly precisava de syscalls!)

int main() {       // Função principal (o Assembly precisava de _start e int 0x80!)
    printf("Olá, Mundo!\n"); // Uma linha! (O Assembly precisava de 6 linhas!)
    return 0;
}
```

> 💻 **Prática:** Compile e execute seu primeiro programa C no arquivo [`ola_mundo.c`](../../codigo-fonte/c/ola_mundo.c).

---

## 7. Variáveis e Tipos de Dados em C

Lembra que em Assembly você precisava usar `dd`, `db` e colchetes `[]`? Em C, basta declarar o tipo e o nome:

| Tipo em C | Tamanho | Diretiva Assembly equivalente |
| :--- | :--- | :--- |
| `char` | 1 byte | `db` |
| `int` | 4 bytes | `dd` |
| `float` | 4 bytes | *(muito complexo em Assembly!)* |
| `double` | 8 bytes | *(quase impossível em Assembly puro!)* |

```c
int idade = 25;
float altura = 1.75;
char letra = 'A';
```

> 💻 **Prática:** Veja os tipos de dados em C no arquivo [`variaveis_tipos.c`](../../codigo-fonte/c/variaveis_tipos.c).

---

## 8. Entrada e Saída de Dados em C

Lembra das syscalls `sys_write` e `sys_read` do Assembly? Em C, usamos `printf()` e `scanf()`:

```c
int idade;
printf("Digite sua idade: ");  // Substitui 6 linhas de Assembly!
scanf("%d", &idade);           // Substitui 8 linhas de Assembly!
printf("Você tem %d anos.\n", idade);
```

> 💻 **Prática:** Pratique entrada e saída no arquivo [`entrada_saida.c`](../../codigo-fonte/c/entrada_saida.c).

---

## 9. Estruturas de Controle em C

Lembra dos `cmp`, `jl`, `jmp` e rótulos do Assembly? Em C, usamos `if/else`:

```c
if (nota >= 70) {
    printf("Aprovado!\n");
} else if (nota >= 50) {
    printf("Recuperação.\n");
} else {
    printf("Reprovado.\n");
}
```

> 💻 **Prática:** Veja condicionais em C no arquivo [`condicionais_if.c`](../../codigo-fonte/c/condicionais_if.c).

---

## 10. Estruturas de Repetição em C

Lembra do `cmp` + `inc` + `jmp` do Assembly? Em C, usamos `for`:

```c
for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
}
```

> 💻 **Prática:** Gere uma tabuada no arquivo [`repeticao_for.c`](../../codigo-fonte/c/repeticao_for.c).

---

## 11. Funções em C

Em Assembly, funções exigem manipulação manual da **pilha** (`push`, `pop`, `call`, `ret`). Em C:

```c
int somar(int a, int b) {
    return a + b;
}
```

> 💻 **Prática:** Crie suas funções no arquivo [`funcoes.c`](../../codigo-fonte/c/funcoes.c).

---

## 12. Exercícios Práticos

| # | Exercício | Linguagem | Dificuldade |
| :---: | :--- | :---: | :---: |
| 1 | Escreva um programa em Assembly que imprima seu nome. | ASM | ⭐⭐⭐ |
| 2 | Escreva o mesmo programa do exercício 1 em C. Compare o número de linhas. | C | ⭐ |
| 3 | Crie um programa em C que leia dois números e imprima a soma, subtração, multiplicação e divisão. | C | ⭐ |
| 4 | Faça um programa em C que leia a idade e informe se pode votar (>= 16). | C | ⭐ |
| 5 | Escreva um programa em C que calcule o fatorial de um número usando `for`. | C | ⭐⭐ |
| 6 | Crie uma função em C que receba dois números e retorne o maior. | C | ⭐⭐ |

> 💻 **Prática:** Os códigos de Assembly estão na [Pasta de Assembly](../../codigo-fonte/asm/README.md) e os de C estão na [Pasta de C](../../codigo-fonte/c/README.md).

---

## 13. Referências Bibliográficas

- TANENBAUM, Andrew S. **Organização Estruturada de Computadores**. São Paulo: Pearson, 2013.
- SCHILDT, Herbert. **C: A Referência Completa**. Rio de Janeiro: Alta Books, 2013.
- MIZRAHI, Victorine Viviane. **Treinamento em Linguagem C**. São Paulo: Pearson, 2008.
- KERNIGHAN, Brian W.; RITCHIE, Dennis M. **C: Como Programar**. São Paulo: Pearson, 2006.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
