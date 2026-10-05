# FUNDAMENTOS E SINTAXE

## 1. VARIÁVEIS, TIPOS PRIMITIVOS E MEMÓRIA

### 1.1 - O que é uma variável na memória RAM?
Na matemática, usamos letras (como $x$ ou $y$) para representar valores desconhecidos ou variáveis em uma equação. Na programação em C, uma variável é um **espaço nomeado na memória RAM** reservado para armazenar um dado. 

Pense na memória RAM como um enorme armazém com milhões de gavetas numeradas (endereços de memória). Quando você declara uma variável, o compilador reserva uma ou mais gavetas consecutivas, coloca uma "etiqueta" com o nome da variável e define qual tipo de "objeto" pode ser guardado ali.

### 1.2 - Tipos primitivos: o tamanho importa
Diferente de linguagens modernas que inferem tipos automaticamente, em C você **deve** declarar explicitamente o tipo de dado. Isso diz ao compilador exatamente quantos bytes de memória reservar.

- `char`: Armazena um único caractere (ex: `'A'`, `'z'`, `'5'`). Ocupa **1 byte**.
- `int`: Armazena números inteiros (ex: `42`, `-10`). Geralmente ocupa **4 bytes**.
- `float`: Armazena números reais (ponto flutuante) com precisão simples (ex: `3.14f`). Ocupa **4 bytes**.
- `double`: Armazena números reais com precisão dupla (ex: `3.1415926535`). Ocupa **8 bytes**.

### 1.3 - O operador [`sizeof`](https://en.cppreference.com/w/c/language/sizeof): descobrindo o tamanho das coisas
Uma das maiores vantagens de aprender C é ter controle total sobre a memória. O operador `sizeof` retorna o tamanho, em bytes, de um tipo de dado ou de uma variável. É uma ferramenta essencial para entender o que está acontecendo "por baixo do capô".

```c
#include <stdio.h>

int main() {
    printf("Tamanho de char: %zu bytes\n", sizeof(char));
    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de float: %zu bytes\n", sizeof(float));
    printf("Tamanho de double: %zu bytes\n", sizeof(double));
    
    return 0;
}
```
*Nota: Usamos `%zu` no `printf` porque o `sizeof` retorna um valor do tipo `size_t`, que é um tipo inteiro sem sinal garantido para ser grande o suficiente para conter o tamanho de qualquer objeto.*

---

## 2. ENTRADA E SAÍDA DE DADOS

### 2.1 - Formatadores do [`printf`](https://en.cppreference.com/w/c/io/fprintf)
A função `printf` usa "especificadores de formato" (que começam com `%`) como placeholders para inserir variáveis na string de texto.

- `%d` ou `%i`: Inteiro decimal (`int`).
- `%f`: Ponto flutuante (`float` ou `double`).
- `%c`: Caractere único (`char`).
- `%s`: String (sequência de caracteres).

```c
#include <stdio.h>

int main() {
    int idade = 25;
    float altura = 1.75;
    char inicial = 'M';
    
    printf("Inicial: %c, Idade: %d anos, Altura: %.2f m\n", inicial, idade, altura);
    // O %.2f limita a saída a 2 casas decimais.
    
    return 0;
}
```

### 2.2 - Capturando dados com [`scanf`](https://en.cppreference.com/w/c/io/fscanf) e o problema do buffer
Para ler dados do teclado, usamos o `scanf`. Há um detalhe crucial aqui: o `scanf` precisa do **endereço de memória** da variável para saber onde guardar o valor digitado. Por isso, usamos o operador "endereço de" (`&`) antes do nome da variável (exceto para strings, que veremos no Módulo 5).

```c
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // Note o '&' antes de 'numero'
    
    printf("Voce digitou: %d\n", numero);
    
    return 0;
}
```
**[ATENÇÃO]** O `scanf` pode deixar "sujeira" (como o caractere de nova linha `\n`) no buffer de entrada. Se você misturar `scanf` com leitura de caracteres (`%c`), isso pode causar comportamentos inesperados. Veremos como limpar o buffer em módulos avançados, mas por enquanto, evite misturar `%d` e `%c` no mesmo programa.

### 2.3 - Constantes: [`#define`](https://en.cppreference.com/w/c/preprocessor/replace) vs `const`
Às vezes, precisamos de valores que **nunca mudam** durante a execução do programa (como o valor de PI ou a taxa de um imposto).

1. **Diretiva `#define` (Macro do pré-processador):**
   ```c
   #define PI 3.14159
   ```
   Antes de compilar, o pré-processador substitui todas as ocorrências de `PI` no código pelo valor `3.14159`. Não ocupa espaço na memória como uma variável, mas não tem verificação de tipo.

2. **Qualificador `const` (Constante tipada):**
   ```c
   const float PI = 3.14159;
   ```
   Cria uma variável real na memória, mas o compilador impede que seu valor seja alterado. É a abordagem mais segura e recomendada no C moderno, pois respeita os tipos de dados.

---

## 3. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Operador sizeof (cppreference)](https://en.cppreference.com/w/c/language/sizeof)
- 📖 [Especificadores de formato do printf (cppreference)](https://en.cppreference.com/w/c/io/fprintf)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 2
**Objetivo:** Criar uma "Calculadora de Área de Círculo" interativa.

**Requisitos:**
1. Defina o valor de PI como uma constante (use `const float` ou `#define`).
2. Peça ao usuário para digitar o valor do raio (pode ser um número decimal, use `float` ou `double`).
3. Calcule a área usando a fórmula: $Area = PI \times raio^2$.
4. Exiba o resultado formatado com exatamente 4 casas decimais usando `printf`.

**Exemplo de Saída Esperada:**
```text
Digite o valor do raio: 5.5
Calculando...
A area do circulo com raio 5.5000 eh: 95.0332
```
*Dica: Lembre-se de usar o operador `&` no `scanf` e o especificador correto no `printf` para controlar as casas decimais.*
