# PONTEIROS E MEMÓRIA

## 1. O QUE É UM PONTEIRO?

### 1.1 - O conceito fundamental: endereço de memória
No Módulo 2, dissemos que a memória RAM é um armazém com milhões de gavetas numeradas. Cada gaveta tem um **número único** (o endereço). Quando você declara `int x = 42;`, o compilador guarda o valor `42` em uma gaveta específica, digamos, a gaveta número `0x7ffd5a3b`.

Um **ponteiro** é simplesmente uma variável que, em vez de armazenar um valor comum (como 42), armazena o **número de uma gaveta** (um endereço de memória). Ou seja, um ponteiro "aponta" para outro dado na memória.

Na matemática, pense assim: se $x = 42$ é uma variável comum, um ponteiro $p$ seria como uma função $p \rightarrow x$, onde o domínio de $p$ é o conjunto dos endereços de memória e a imagem é o valor armazenado naquele endereço.

### 1.2 - Declarando um ponteiro
Para declarar um ponteiro, usamos o tipo do dado que ele vai apontar, seguido de um asterisco `*`.

```c
#include <stdio.h>

int main() {
    int x = 42;       // Variável comum: guarda o valor 42
    int *p = &x;      // Ponteiro: guarda o ENDEREÇO de x
    
    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", (void *)&x);
    printf("Valor guardado em p: %p\n", (void *)p);
    printf("Valor apontado por p: %d\n", *p);
    
    return 0;
}
```
*Nota: Usamos `%p` para imprimir endereços de memória e fazemos o cast para `(void *)` porque é a forma segura e padronizada recomendada pela especificação do C.*

---

## 2. OPERADORES DE PONTEIROS

### 2.1 - O operador "endereço de" (`&`)
O operador `&` (E comercial) retorna o **endereço de memória** de uma variável. Você já o usou no `scanf` sem saber exatamente o porquê. Agora faz sentido: o `scanf` precisa saber em qual gaveta da memória ele deve depositar o valor que o usuário digitar.

```c
int idade = 25;
printf("O endereco da variavel idade eh: %p\n", (void *)&idade);
```

### 2.2 - O operador de "dereferência" (`*`)
O operador `*` (asterisco) faz o caminho inverso: dado um endereço de memória, ele **acessa o valor** que está armazenado naquela gaveta. Isso se chama "dereferenciar" o ponteiro.

```c
int x = 10;
int *p = &x;

printf("Valor via ponteiro: %d\n", *p); // Imprime 10

*p = 99; // Altera o valor DE x através do ponteiro
printf("Novo valor de x: %d\n", x);     // Imprime 99
```
**[O PULO DO GATO]** É exatamente isso que permite a "passagem por referência" em C. Como o C só passa parâmetros por valor (cópia), a única forma de uma função modificar a variável original do chamador é passando o **endereço** dela e usando `*` dentro da função para acessar e modificar o valor original.

### 2.3 - O clássico exemplo: a função `swap` (troca)
Este é o exemplo que prova que você entendeu ponteiros. Tente trocar duas variáveis sem usar ponteiros e você verá que é impossível, porque a função recebe apenas cópias.

```c
#include <stdio.h>

// Função que troca os valores de duas variáveis
void trocar(int *a, int *b) {
    int temp = *a;  // Guarda o valor apontado por a
    *a = *b;        // Coloca o valor apontado por b no local de a
    *b = temp;      // Coloca o valor original de a no local de b
}

int main() {
    int x = 5, y = 10;
    
    printf("Antes: x = %d, y = %d\n", x, y);
    trocar(&x, &y); // Passamos os ENDEREÇOS de x e y
    printf("Depois: x = %d, y = %d\n", x, y);
    
    return 0;
}
```

---

## 3. PONTEIROS E ARRAYS: A RELAÇÃO INTRÍNSECA

### 3.1 - O nome de um array é um ponteiro
**[CONCEITO FUNDAMENTAL]** Em C, o nome de um array, quando usado em uma expressão, **decai** (é convertido automaticamente) para um ponteiro que aponta para o seu primeiro elemento. Isso significa que `notas` e `&notas[0]` são essencialmente a mesma coisa.

```c
#include <stdio.h>

int main() {
    int notas[5] = {10, 20, 30, 40, 50};
    
    printf("Endereco do array: %p\n", (void *)notas);
    printf("Endereco do primeiro elemento: %p\n", (void *)&notas[0]);
    // Os dois endereços serão idênticos!
    
    return 0;
}
```

### 3.2 - Acessando elementos via ponteiro
Como o nome do array é um ponteiro para o primeiro elemento, podemos acessar qualquer elemento usando aritmética de ponteiros em vez de colchetes `[]`. Na verdade, a expressão `notas[i]` é apenas um "açúcar sintático" para `*(notas + i)`.

```c
#include <stdio.h>

int main() {
    int notas[5] = {10, 20, 30, 40, 50};
    int *p = notas; // p aponta para o primeiro elemento
    
    // As duas formas são equivalentes:
    printf("Via indice: %d\n", notas[2]);   // Imprime 30
    printf("Via ponteiro: %d\n", *(p + 2)); // Imprime 30
    
    return 0;
}
```

---

## 4. ARITMÉTICA DE PONTEIROS

### 4.1 - Somando e subtraindo de ponteiros
Quando você soma 1 a um ponteiro, ele **não avança 1 byte**. Ele avança o tamanho do tipo que ele aponta. Se `p` é um `int *` e `int` ocupa 4 bytes, então `p + 1` avança 4 bytes na memória. Isso é o que torna a aritmética de ponteiros poderosa e segura ao mesmo tempo.

```c
#include <stdio.h>

int main() {
    int valores[3] = {100, 200, 300};
    int *p = valores;
    
    printf("p aponta para: %d (endereco %p)\n", *p, (void *)p);
    p++; // Avança para o próximo int (4 bytes à frente)
    printf("p aponta para: %d (endereco %p)\n", *p, (void *)p);
    p++; // Avança mais um int
    printf("p aponta para: %d (endereco %p)\n", *p, (void *)p);
    
    return 0;
}
```

### 4.2 - Iterando sobre um array usando apenas ponteiros
Podemos percorrer um array inteiro sem usar índices `[]` nem a variável de controle `i`. Basta usar um ponteiro que caminha do início ao fim do array.

```c
#include <stdio.h>

int main() {
    int valores[5] = {10, 20, 30, 40, 50};
    int *p = valores;
    int *fim = valores + 5; // Ponteiro para "uma posição após o último"
    
    while (p < fim) {
        printf("%d ", *p);
        p++;
    }
    // Saída: 10 20 30 40 50
    printf("\n");
    
    return 0;
}
```

### 4.3 - Ponteiro nulo (`NULL`)
Um ponteiro que não aponta para lugar nenhum deve ser inicializado com `NULL`. Tentar dereferenciar um ponteiro nulo causa um erro fatal (Segmentation Fault). Sempre verifique antes de usar.

```c
#include <stdio.h>

int main() {
    int *p = NULL;
    
    if (p == NULL) {
        printf("O ponteiro nao aponta para nada.\n");
    }
    
    // *p = 10; // ISSO CAUSARIA UM CRASH! Nunca faça isso.
    
    return 0;
}
```

---

## 5. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Ponteiros (cppreference)](https://en.cppreference.com/w/c/language/pointer)
- 📖 [Aritmética de Ponteiros (cppreference)](https://en.cppreference.com/w/c/language/operator_member_access)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 6
**Objetivo:** Criar uma função que inverte a ordem dos elementos de um array **usando apenas ponteiros** (proibido usar índices `[]` dentro da função).

**Requisitos:**
1. Crie uma função `void inverter(int *inicio, int tamanho)` que receba um ponteiro para o primeiro elemento e o tamanho do array.
2. Dentro da função, use dois ponteiros: um apontando para o início e outro para o final do array.
3. Troque os valores apontados por esses dois ponteiros e mova-os em direção ao centro até que se encontrem.
4. No `main`, declare um array, imprima-o, chame a função e imprima-o novamente para verificar a inversão.

**Exemplo de Saída Esperada:**
```text
Array original: 1 2 3 4 5
Array invertido: 5 4 3 2 1
```

*Dica: O ponteiro do final pode ser calculado como `inicio + tamanho - 1`. Use a função `trocar` que criamos na seção 2.3 como inspiração.*

### 🔗 [Retornar ao Sumário](SUMARIO.md)
