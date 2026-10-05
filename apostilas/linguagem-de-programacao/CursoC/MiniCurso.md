# MINICURSO: FUNDAMENTOS ESSENCIAIS DA LINGUAGEM C

## APRESENTAÇÃO

Este minicurso foi desenvolvido para oferecer uma introdução sólida e prática à linguagem C, focando nos conceitos fundamentais que todo programador precisa dominar. Em aproximadamente 6 horas de estudo, você será capaz de escrever programas funcionais e compreender a lógica por trás da linguagem que é a base de quase todas as linguagens modernas.

**Objetivo:** Sair do zero e criar programas funcionais, entendendo os conceitos-chave da linguagem C.

**Pré-requisitos:** Nenhum. Apenas vontade de aprender e um computador com acesso à internet.

---

## MÓDULO 1: PRIMEIROS PASSOS

### 1.1 - Instalação do Ambiente

**Windows:**
1. Baixe e instale o [VS Code](https://code.visualstudio.com/)
2. Instale o compilador GCC via [MSYS2](https://www.msys2.org/) ou [MinGW](https://sourceforge.net/projects/mingw-w64/)
3. No VS Code, instale a extensão "C/C++" da Microsoft

**Linux (Ubuntu/Debian):**
```bash
sudo apt update
sudo apt install build-essential
```

**macOS:**
```bash
xcode-select --install
```

### 1.2 - Estrutura Básica de um Programa

Todo programa em C segue esta estrutura mínima:

```c
#include <stdio.h>

int main() {
    // Seu código aqui
    return 0;
}
```

- `#include <stdio.h>`: Inclui a biblioteca padrão de entrada/saída
- `int main()`: Função principal onde o programa começa a executar
- `return 0`: Indica que o programa terminou com sucesso

### 1.3 - Compilação e Execução

Salve o código acima em um arquivo chamado `ola.c` e compile via terminal:

```bash
gcc ola.c -o ola
./ola          # Linux/Mac
.\ola.exe      # Windows
```

### 1.4 - Sua Primeira Saída: printf

```c
#include <stdio.h>

int main() {
    printf("Olá, Mundo!\n");
    printf("Bem-vindo à linguagem C!\n");
    return 0;
}
```

- `printf()`: Função que imprime texto na tela
- `\n`: Caractere especial que pula para a próxima linha

### 🚀 EXERCÍCIO PRÁTICO DO MÓDULO 1

Crie um programa que imprime um "crachá" em ASCII com seu nome e curso:

```text
+------------------------+
|                        |
|   JOÃO DA SILVA        |
|   Curso: Computação    |
|                        |
+------------------------+
```

---

## MÓDULO 2: VARIÁVEIS E ENTRADA/SAÍDA

### 2.1 - Tipos Primitivos

- `int`: Números inteiros (ex: 10, -5, 0)
- `float`: Números reais com precisão simples (ex: 3.14, -2.5)
- `double`: Números reais com precisão dupla (ex: 3.14159265358979)
- `char`: Um único caractere (ex: 'A', 'b', '5')

### 2.2 - Declaração e Inicialização

```c
int idade = 25;
float altura = 1.75;
char inicial = 'J';
```

### 2.3 - Formatadores do printf

- `%d`: Para inteiros
- `%f`: Para floats/doubles
- `%c`: Para caracteres
- `%.2f`: Float com 2 casas decimais

```c
#include <stdio.h>

int main() {
    int idade = 25;
    float altura = 1.75;
    
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    
    return 0;
}
```

### 2.4 - Lendo Dados: scanf

```c
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);  // & é obrigatório para variáveis simples
    
    printf("Você digitou: %d\n", numero);
    
    return 0;
}
```

**Importante:** O `&` antes da variável no `scanf` passa o endereço de memória, permitindo que a função modifique o valor.

### 🚀 EXERCÍCIO PRÁTICO DO MÓDULO 2

Crie uma calculadora de IMC (Índice de Massa Corporal):
- Leia o peso (kg) e a altura (m) do usuário
- Calcule: IMC = peso / (altura * altura)
- Exiba o resultado com 2 casas decimais

---

## MÓDULO 3: CONTROLE DE FLUXO

### 3.1 - Condicionais: if, else if, else

```c
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero > 0) {
        printf("Positivo\n");
    } else if (numero < 0) {
        printf("Negativo\n");
    } else {
        printf("Zero\n");
    }
    
    return 0;
}
```

### 3.2 - Operadores Relacionais e Lógicos

**Relacionais:**
- `>`: Maior que
- `<`: Menor que
- `>=`: Maior ou igual
- `<=`: Menor ou igual
- `==`: Igual a
- `!=`: Diferente de

**Lógicos:**
- `&&`: E (ambas condições verdadeiras)
- `||`: OU (pelo menos uma condição verdadeira)
- `!`: Negação (inverte o valor)

```c
if (idade >= 18 && idade <= 65) {
    printf("Adulto em idade ativa\n");
}
```

### 3.3 - Loop for

```c
#include <stdio.h>

int main() {
    // Contando de 1 a 5
    for (int i = 1; i <= 5; i++) {
        printf("Contagem: %d\n", i);
    }
    
    return 0;
}
```

**Estrutura do for:**
```c
for (inicialização; condição; incremento) {
    // código repetido
}
```

### 🚀 EXERCÍCIO PRÁTICO DO MÓDULO 3

Crie um programa que:
1. Lê um número do usuário
2. Verifica se é par ou ímpar
3. Se for par, imprime a tabuada desse número (de 1 a 10)

---

## MÓDULO 4: ARRAYS E STRINGS

### 4.1 - Arrays (Vetores)

```c
#include <stdio.h>

int main() {
    // Declarando e inicializando
    int notas[5] = {7, 8, 6, 9, 10};
    
    // Acessando elementos (índice começa em 0)
    printf("Primeira nota: %d\n", notas[0]);
    printf("Terceira nota: %d\n", notas[2]);
    
    // Iterando sobre o array
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }
    
    printf("Média: %.2f\n", soma / 5);
    
    return 0;
}
```

### 4.2 - Strings em C

Em C, strings são arrays de caracteres terminados com `\0` (caractere nulo).

```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    
    printf("Digite seu nome: ");
    scanf("%s", nome);  // Para strings, não precisa do &
    
    printf("Olá, %s!\n", nome);
    printf("Seu nome tem %zu letras.\n", strlen(nome));
    
    return 0;
}
```

**Funções úteis da string.h:**
- `strlen(string)`: Retorna o tamanho da string
- `strcpy(destino, origem)`: Copia uma string
- `strcmp(str1, str2)`: Compara duas strings (retorna 0 se iguais)

### 🚀 EXERCÍCIO PRÁTICO DO MÓDULO 4

Crie um programa que:
1. Lê 5 nomes de alunos
2. Armazena em um array de strings
3. Imprime os nomes em ordem inversa

---

## MÓDULO 5: FUNÇÕES

### 5.1 - Declarando e Usando Funções

```c
#include <stdio.h>

// Declaração da função
int somar(int a, int b) {
    return a + b;
}

void saudacao(char nome[]) {
    printf("Olá, %s!\n", nome);
}

int main() {
    int resultado = somar(10, 20);
    printf("Soma: %d\n", resultado);
    
    saudacao("Maria");
    
    return 0;
}
```

**Estrutura de uma função:**
```c
tipo_retorno nome_funcao(tipo param1, tipo param2) {
    // código
    return valor;  // se o retorno não for void
}
```

### 5.2 - Escopo de Variáveis

```c
#include <stdio.h>

int contador = 0;  // Variável global

void incrementar() {
    contador++;  // Modifica a variável global
}

int main() {
    incrementar();
    incrementar();
    printf("Contador: %d\n", contador);  // Imprime 2
    
    return 0;
}
```

**Regra:** Variáveis declaradas dentro de funções são locais e não existem fora delas.

### 🚀 EXERCÍCIO PRÁTICO DO MÓDULO 5

Crie uma função `float calcular_area_circulo(float raio)` que retorna a área de um círculo (área = π * raio²). Use π = 3.14159.

---

## MÓDULO 6: INTRODUÇÃO A PONTEIROS E STRUCTS

### 6.1 - Ponteiros: Conceito Básico

Um ponteiro é uma variável que armazena o endereço de memória de outra variável.

```c
#include <stdio.h>

int main() {
    int numero = 42;
    int *ponteiro = &numero;  // ponteiro guarda o endereço de numero
    
    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", (void *)&numero);
    printf("Valor guardado no ponteiro: %p\n", (void *)ponteiro);
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro);
    
    return 0;
}
```

**Operadores:**
- `&`: Obtém o endereço de uma variável
- `*`: Acessa o valor armazenado no endereço (dereferência)

### 6.2 - Structs: Agrupando Dados

```c
#include <stdio.h>

// Definindo uma struct
typedef struct {
    int x;
    int y;
} Ponto;

int main() {
    Ponto p1;
    p1.x = 10;
    p1.y = 20;
    
    printf("Ponto: (%d, %d)\n", p1.x, p1.y);
    
    // Inicialização direta
    Ponto p2 = {5, 15};
    printf("Ponto 2: (%d, %d)\n", p2.x, p2.y);
    
    return 0;
}
```

### 🚀 EXERCÍCIO PRÁTICO DO MÓDULO 6

Crie:
1. Uma struct `Retangulo` com `base` e `altura` (floats)
2. Uma função `float calcular_area_retangulo(Retangulo *r)` que recebe um ponteiro para a struct e retorna a área

---

## MÓDULO 7: PROJETO FINAL INTEGRADOR

### Sistema de Cadastro de Alunos

**Objetivo:** Criar um sistema completo que une todos os conceitos aprendidos.

**Requisitos:**
- Struct `Aluno` com: `nome` (string), `idade` (int), `nota` (float)
- Array de 3 alunos
- Funções para: cadastrar, calcular média, exibir relatório
- Menu interativo

**Código base:**

```c
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

void cadastrar_aluno(Aluno *aluno, int indice) {
    printf("\n--- Cadastro do Aluno %d ---\n", indice + 1);
    printf("Nome: ");
    scanf("%s", aluno->nome);
    printf("Idade: ");
    scanf("%d", &aluno->idade);
    printf("Nota: ");
    scanf("%f", &aluno->nota);
}

float calcular_media(Aluno alunos[], int total) {
    float soma = 0;
    for (int i = 0; i < total; i++) {
        soma += alunos[i].nota;
    }
    return soma / total;
}

void exibir_relatorio(Aluno alunos[], int total) {
    printf("\n--- RELATÓRIO ---\n");
    printf("Média da turma: %.2f\n\n", calcular_media(alunos, total));
    
    printf("Alunos cadastrados:\n");
    for (int i = 0; i < total; i++) {
        printf("%d. %s - Nota: %.2f\n", i + 1, alunos[i].nome, alunos[i].nota);
    }
}

int main() {
    Aluno alunos[3];
    
    for (int i = 0; i < 3; i++) {
        cadastrar_aluno(&alunos[i], i);
    }
    
    exibir_relatorio(alunos, 3);
    
    return 0;
}
```

**Desafio extra (opcional):**
- Adicionar um menu com opções para cadastrar, visualizar e sair
- Permitir cadastrar quantos alunos o usuário quiser (até um limite máximo)

---

## PRÓXIMOS PASSOS

Parabéns! Você completou o MiniCurso de Fundamentos da Linguagem C. Agora você possui:

✅ Base sólida em sintaxe e estrutura da linguagem  
✅ Compreensão de variáveis, tipos e operadores  
✅ Capacidade de criar programas com controle de fluxo  
✅ Conhecimento de arrays, strings e funções  
✅ Introdução aos conceitos de ponteiros e structs  

### Para continuar sua jornada:

1. **Aprofunde em ponteiros:** Estude aritmética de ponteiros, ponteiros para ponteiros e ponteiros para funções
2. **Memória dinâmica:** Aprenda malloc, calloc, realloc e free
3. **Arquivos:** Pratique leitura e escrita em arquivos texto e binário
4. **Estruturas de dados:** Implemente listas encadeadas, pilhas e filas
5. **Ferramentas profissionais:** Makefiles, GDB, Valgrind

### Recursos recomendados:

- [Documentação Oficial (cppreference)](https://en.cppreference.com/w/c)
- Livro: "C Programming: A Modern Approach" - K. N. King
- Livro: "The C Programming Language" - Kernighan & Ritchie

---

**🎓 Quer dominar C de verdade?**

Este minicurso é apenas o começo. No **curso completo**, você vai aprender:
- Gerenciamento avançado de memória (Stack vs Heap)
- Alocação dinâmica e prevenção de memory leaks
- Manipulação de arquivos binários
- Makefiles e automação de builds
- Debugging profissional com GDB
- Operadores bit a bit e programação de baixo nível
- AddressSanitizer e boas práticas de segurança

**[SAIBA MAIS SOBRE O CURSO COMPLETO]**

---

*MiniCurso desenvolvido com foco em didática estruturada e aprendizado progressivo.*
