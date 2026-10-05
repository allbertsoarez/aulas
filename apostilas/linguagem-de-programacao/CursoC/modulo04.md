# FUNÇÕES E ESCOPO

## 1. FUNÇÕES: DECLARAÇÃO E DEFINIÇÃO

### 1.1 - O conceito matemático de função aplicado ao C
Na matemática, uma função $f: A \rightarrow B$ é uma relação que associa a cada elemento de um conjunto de entrada (domínio) exatamente um elemento de um conjunto de saída (contradomínio). Em C, uma função segue exatamente a mesma lógica: ela recebe entradas (parâmetros), processa essas informações e retorna um resultado (ou executa uma ação).

A grande vantagem das funções é a **modularização**. Em vez de escrever um programa gigante de 1000 linhas, você o divide em pequenas funções especializadas, cada uma com uma responsabilidade clara. É o equivalente a provar um teorema complexo dividindo-o em lemas menores.

### 1.2 - Sintaxe: retorno, nome, parâmetros
A estrutura básica de uma função em C é:

```c
tipo_de_retorno nome_da_funcao(tipo param1, tipo param2) {
    // corpo da função
    return valor;
}
```

- **tipo_de_retorno**: O tipo de dado que a função devolve (`int`, `float`, `char`, etc.). Se a função não retorna nada, usamos `void` (vazio).
- **nome_da_funcao**: O identificador da função (segue as mesmas regras de variáveis).
- **parâmetros**: As entradas da função, declaradas com tipo e nome.
- **return**: O comando que encerra a função e devolve o valor ao chamador.

```c
#include <stdio.h>

// Função que calcula a área de um retângulo
float calcular_area(float base, float altura) {
    return base * altura;
}

int main() {
    float area = calcular_area(5.0, 3.0);
    printf("A area eh: %.2f\n", area);
    return 0;
}
```

### 1.3 - Declaração (protótipo) vs Definição (implementação)
Em C, o compilador lê o código de cima para baixo. Se você chamar uma função antes de ela ser definida, o compilador dará erro porque "não sabe" que ela existe. Para resolver isso, usamos o **protótipo da função** (ou declaração), que avisa ao compilador: "essa função existe, tem esses parâmetros e retorna esse tipo; a implementação vem depois".

```c
#include <stdio.h>

// Protótipo (declaração): avisa ao compilador que a função existe
float calcular_area(float base, float altura);

int main() {
    float area = calcular_area(5.0, 3.0);
    printf("A area eh: %.2f\n", area);
    return 0;
}

// Definição (implementação): o código da função em si
float calcular_area(float base, float altura) {
    return base * altura;
}
```
**[O PULO DO GATO]** É exatamente isso que os arquivos de cabeçalho (`.h`) fazem! Quando você usa `#include <stdio.h>`, você está apenas incluindo os **protótipos** das funções `printf`, `scanf`, etc. A implementação real dessas funções já está compilada em uma biblioteca do sistema, e o linker cuida de "costurar" tudo no final.

---

## 2. ESCOPO DE VARIÁVEIS

### 2.1 - Variáveis locais (escopo de bloco)
Uma variável declarada dentro de uma função (ou dentro de um bloco `{}`) só existe dentro desse bloco. Quando a função termina de executar, a variável é **destruída** e a memória que ela ocupava é liberada. Isso se chama **escopo local**.

```c
#include <stdio.h>

void minha_funcao() {
    int x = 10; // x só existe aqui dentro
    printf("Dentro da funcao: x = %d\n", x);
}

int main() {
    minha_funcao();
    // printf("%d", x); // ERRO! x não existe aqui fora
    return 0;
}
```

### 2.2 - Variáveis globais
Uma variável declarada **fora** de todas as funções (no topo do arquivo) é chamada de **variável global**. Ela pode ser acessada e modificada por qualquer função do programa, de qualquer lugar.

```c
#include <stdio.h>

int contador = 0; // Variável global

void incrementar() {
    contador++;
}

int main() {
    incrementar();
    incrementar();
    printf("Contador: %d\n", contador); // Imprime 2
    return 0;
}
```
**[ATENÇÃO]** Embora variáveis globais pareçam convenientes, elas são consideradas **má prática** na maioria dos casos. Elas tornam o código difícil de debugar (qual função alterou o valor?), impedem a reutilização do código e podem causar efeitos colaterais inesperados. Sempre prefira variáveis locais e passagem de parâmetros.

### 2.3 - O qualificador `static` (introdução breve)
Se você precisa que uma variável local "lembre" seu valor entre chamadas de função, pode usar o qualificador `static`. A variável continua com escopo local, mas sua memória não é liberada quando a função termina.

```c
#include <stdio.h>

void contador_de_chamadas() {
    static int chamadas = 0; // Inicializada apenas uma vez
    chamadas++;
    printf("Esta funcao foi chamada %d vezes.\n", chamadas);
}

int main() {
    contador_de_chamadas(); // Imprime 1
    contador_de_chamadas(); // Imprime 2
    contador_de_chamadas(); // Imprime 3
    return 0;
}
```

---

## 3. A MÁGICA DA PILHA DE EXECUÇÃO (CALL STACK)

### 3.1 - O que é a Stack?
**[CONCEITO FUNDAMENTAL]** Toda vez que uma função é chamada, o sistema operacional precisa reservar um espaço na memória para guardar as variáveis locais dessa função, os parâmetros recebidos e o endereço de retorno (para saber para onde voltar quando a função terminar). Esse espaço é chamado de **Stack Frame** (ou registro de ativação), e o conjunto de todos os frames forma a **Pilha de Execução (Call Stack)**.

Pense na Call Stack como uma pilha de pratos: cada função chamada empilha um prato no topo. Quando a função termina, seu prato é removido (desempilhado). A última função a ser chamada é a primeira a terminar (LIFO - Last In, First Out).

### 3.2 - Como as funções são empilhadas e desempilhadas
Vamos visualizar o que acontece na memória quando executamos o código abaixo:

```c
#include <stdio.h>

void funcao_c() {
    int z = 30;
    printf("Executando funcao_c\n");
}

void funcao_b() {
    int y = 20;
    funcao_c();
    printf("Executando funcao_b\n");
}

void funcao_a() {
    int x = 10;
    funcao_b();
    printf("Executando funcao_a\n");
}

int main() {
    funcao_a();
    return 0;
}
```

A ordem de execução na pilha será:
1. `main` é empilhada.
2. `main` chama `funcao_a`, que é empilhada sobre `main`.
3. `funcao_a` chama `funcao_b`, que é empilhada sobre `funcao_a`.
4. `funcao_b` chama `funcao_c`, que é empilhada sobre `funcao_b`.
5. `funcao_c` termina e é desempilhada.
6. `funcao_b` termina e é desempilhada.
7. `funcao_a` termina e é desempilhada.
8. `main` termina e é desempilhada. O programa acaba.

### 3.3 - O problema do vazamento de escopo
É por causa da Call Stack que você **não consegue** acessar a variável de uma função depois que ela termina. Quando a função é desempilhada, todas as suas variáveis locais são destruídas. Tentar acessar a memória de uma função já finalizada é um erro grave (comportamento indefinido).

---

## 4. PASSAGEM DE PARÂMETROS

### 4.1 - Passagem por valor (a regra do C)
**[CONCEITO FUNDAMENTAL]** Em C, **todos os parâmetros são passados por valor**. Isso significa que, quando você chama uma função, o C faz uma **cópia** do valor da variável e entrega essa cópia para a função. Qualquer alteração feita dentro da função afeta apenas a cópia, não a variável original.

```c
#include <stdio.h>

void tentar_dobrar(int numero) {
    numero = numero * 2; // Altera apenas a cópia local
    printf("Dentro da funcao: %d\n", numero);
}

int main() {
    int x = 10;
    tentar_dobrar(x);
    printf("Fora da funcao: %d\n", x); // Continua 10!
    return 0;
}
```

### 4.2 - O problema: como modificar a variável original?
A passagem por valor é segura, mas às vezes queremos que a função modifique a variável original (como no caso do `scanf`, que precisa "escrever" o valor digitado na variável que você passou). 

Como o C não permite passagem por referência direta, a solução é passar o **endereço** da variável (um ponteiro). A função recebe o endereço, e usando o operador `*`, pode acessar e modificar o valor original. **Esse é o gancho para o Módulo 6 (Ponteiros)!**

```c
#include <stdio.h>

// Versão que funciona, usando ponteiros (veremos no M6 em detalhes)
void dobrar_de_verdade(int *endereco) {
    *endereco = *endereco * 2;
}

int main() {
    int x = 10;
    dobrar_de_verdade(&x); // Passamos o ENDEREÇO de x
    printf("Agora x vale: %d\n", x); // Imprime 20!
    return 0;
}
```

---

## 5. RECURSÃO

### 5.1 - O conceito de recursão na matemática e no C
Na matemática, uma sequência pode ser definida de forma recursiva, como a sequência de Fibonacci: $F(n) = F(n-1) + F(n-2)$, com $F(0) = 0$ e $F(1) = 1$. Em C, uma função recursiva é aquela que **chama a si mesma**. É uma ferramenta poderosa para resolver problemas que podem ser divididos em subproblemas idênticos ao original.

### 5.2 - O caso base e o passo recursivo
Toda função recursiva precisa de dois elementos para não entrar em loop infinito:
1. **Caso base**: A condição que interrompe a recursão (o "fim da indução").
2. **Passo recursivo**: A chamada da função com um argumento que se aproxima do caso base.

### 5.3 - Exemplo clássico: Fatorial
O fatorial de um número $n$ (representado por $n!$) é definido como:
- $0! = 1$ (caso base)
- $n! = n \times (n-1)!$ para $n > 0$ (passo recursivo)

```c
#include <stdio.h>

long long fatorial(int n) {
    // Caso base
    if (n == 0 || n == 1) {
        return 1;
    }
    // Passo recursivo
    return n * fatorial(n - 1);
}

int main() {
    int numero = 5;
    printf("%d! = %lld\n", numero, fatorial(numero));
    return 0;
}
```
**[O PULO DO GATO]** Cada chamada recursiva empilha um novo frame na Call Stack. Se a recursão for muito profunda (ex: fatorial de 100.000), a pilha pode "transbordar" (Stack Overflow), causando um crash do programa. Por isso, a recursão deve ser usada com critério.

---

## 6. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Funções (cppreference)](https://en.cppreference.com/w/c/language/functions)
- 📖 [Escopo e Lifetime (cppreference)](https://en.cppreference.com/w/c/language/scope)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 4
**Objetivo:** Criar uma "Calculadora de MDC (Máximo Divisor Comum)" usando recursão.
O algoritmo de Euclides para calcular o MDC de dois números $a$ e $b$ é definido recursivamente como:
- $MDC(a, 0) = a$ (caso base)
- $MDC(a, b) = MDC(b, a \mod b)$ (passo recursivo)

**Requisitos:**
1. Crie uma função recursiva `int mdc(int a, int b)` que implemente o algoritmo de Euclides.
2. No `main`, peça ao usuário para digitar dois números inteiros positivos.
3. Use um `do...while` para garantir que os números sejam positivos.
4. Chame a função `mdc` e exiba o resultado.

**Exemplo de Saída Esperada:**
```text
Digite o primeiro numero: 48
Digite o segundo numero: 18
O MDC de 48 e 18 eh: 6
```

*Dica: Lembre-se de tratar o caso em que o usuário digita `b = 0` diretamente, ou confie que a função `mdc` já trata isso no caso base.*

### 🔗 [Retornar ao Sumário](SUMARIO.md)
