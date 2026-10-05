# GERENCIAMENTO DINÂMICO DE MEMÓRIA

## 1. STACK VS HEAP: A DUALIDADE DA MEMÓRIA

### 1.1 - O que é a Stack (Pilha)?
Como vimos no Módulo 4, a **Stack** é a região da memória usada para gerenciar as chamadas de função. Cada vez que uma função é chamada, um "bloco" (Stack Frame) é empilhado contendo as variáveis locais e os parâmetros. 
- **Características:** Extremamente rápida, tamanho fixo e limitado (geralmente alguns Megabytes), e o gerenciamento é **automático** (a memória é liberada assim que a função retorna).
- **Analogia:** Pense na Stack como o seu **armário de escritório**. Você tem gavetas fixas para suas coisas do dia a dia. É rápido pegar o que você precisa, mas o espaço é limitado e você não pode guardar um sofá lá dentro.

### 1.2 - O que é o Heap (Monte)?
O **Heap** é uma vasta região da memória RAM disponível para o seu programa "alugar" espaços em tempo de execução. 
- **Características:** Mais lenta que a Stack, tamanho limitado apenas pela memória física do sistema (RAM), e o gerenciamento é **manual** (você pede a memória e, quando não precisar mais, você a devolve).
- **Analogia:** Pense no Heap como um **grande galpão de armazenamento**. Se você precisa guardar um sofá (um array gigante de 1 milhão de inteiros), você aluga um espaço no galpão. Mas atenção: quando você terminar de usar o sofá, você precisa avisar o gerente do galpão para liberar o espaço, caso contrário, ele ficará ocupado para sempre.

### 1.3 - Comparação e quando usar cada um
- Use a **Stack** para variáveis pequenas, de tempo de vida curto e tamanho conhecido em tempo de compilação (ex: `int x = 10;`, `int notas[5];`).
- Use o **Heap** quando você não sabe o tamanho do dado até o programa estar rodando (ex: ler um arquivo e armazenar todas as linhas), ou quando precisa que os dados sobrevivam após o retorno de uma função.

---

## 2. FUNÇÕES DE ALOCAÇÃO DINÂMICA

Para interagir com o Heap, o C nos fornece 4 funções fundamentais, declaradas na biblioteca [`<stdlib.h>`](https://en.cppreference.com/w/c/memory).

### 2.1 - [`malloc`](https://en.cppreference.com/w/c/memory/malloc) (Memory Allocation)
A função `malloc` solicita um bloco contíguo de bytes no Heap e retorna um **ponteiro** para o início desse bloco. Ela **não inicializa** a memória (o conteúdo vem "sujo", com lixo).

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    
    // Pedimos espaço para 5 inteiros (5 * 4 bytes = 20 bytes)
    int *vetor = (int *)malloc(n * sizeof(int));
    
    // SEMPRE verifique se a alocação funcionou!
    if (vetor == NULL) {
        printf("Erro: Memoria insuficiente!\n");
        return 1;
    }
    
    // Usando o array dinâmico
    for (int i = 0; i < n; i++) {
        vetor[i] = i * 10;
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
```
**[O PULO DO GATO]** O `sizeof(int)` garante que o código seja portável. Se você rodar isso em um sistema onde `int` tem 2 bytes ou 8 bytes, o `malloc` calculará o tamanho correto automaticamente.

### 2.2 - [`calloc`](https://en.cppreference.com/w/c/memory/calloc) (Contiguous Allocation)
O `calloc` faz a mesma coisa que o `malloc`, mas com duas diferenças: ele recebe o número de elementos e o tamanho de cada um separadamente, e **zera toda a memória alocada**. É ideal quando você precisa de um array limpo.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Aloca espaço para 5 inteiros e já zera todos eles
    int *vetor = (int *)calloc(5, sizeof(int));
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]); // Imprimirá: 0 0 0 0 0
    }
    
    return 0;
}
```

### 2.3 - [`realloc`](https://en.cppreference.com/w/c/memory/realloc) (Reallocation)
E se você alocou um array de 5 posições, mas no meio do programa percebeu que precisa de 10? O `realloc` tenta redimensionar o bloco de memória original. Se não houver espaço contíguo logo ao lado, ele aloca um bloco novo em outro lugar, copia os dados antigos e libera o bloco original.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int *)malloc(5 * sizeof(int));
    
    // Precisa de mais espaço! Redimensionando para 10 inteiros.
    int *temp = (int *)realloc(vetor, 10 * sizeof(int));
    
    if (temp == NULL) {
        printf("Erro ao redimensionar!\n");
        free(vetor); // Libera o original para evitar leak
        return 1;
    }
    
    vetor = temp; // Atualiza o ponteiro para o novo endereço
    
    return 0;
}
```
**[ATENÇÃO]** Note que atribuímos o resultado do `realloc` a um ponteiro temporário (`temp`). Se o `realloc` falhar, ele retorna `NULL`, e se você tivesse feito `vetor = realloc(vetor, ...)`, você perderia o endereço da memória original, causando um vazamento irrecuperável!

### 2.4 - [`free`](https://en.cppreference.com/w/c/memory/free) (Liberação)
Tudo o que você aloca no Heap com `malloc`, `calloc` ou `realloc` **deve** ser devolvido ao sistema usando o `free`. Se você não fizer isso, ocorre um **Memory Leak** (Vazamento de Memória).

```c
free(vetor);
vetor = NULL; // Boa prática: anule o ponteiro após liberar
```

---

## 3. O PERIGO DOS VAZAMENTOS DE MEMÓRIA (MEMORY LEAKS)

### 3.1 - O que é um Memory Leak?
Um vazamento de memória ocorre quando você aloca espaço no Heap, mas perde a referência para ele (o ponteiro é sobrescrito ou a função termina) sem chamar o `free`. O espaço continua "alugado" pelo seu programa, mas você não pode mais usá-lo nem devolvê-lo ao sistema. Em programas que rodam por dias (servidores, sistemas embarcados), isso eventualmente consome toda a RAM e causa um crash.

### 3.2 - Como evitar e boas práticas
1. **Regra de Ouro:** Para cada `malloc`/`calloc`, deve haver exatamente um `free` no caminho de execução do programa.
2. **Anule o ponteiro:** Após dar `free(ponteiro)`, faça `ponteiro = NULL`. Isso evita o temido *Double Free* (tentar liberar a mesma memória duas vezes, o que corrompe o Heap).
3. **Não libere memória da Stack:** Nunca chame `free()` em um ponteiro que aponta para uma variável local ou array estático.

### 3.3 - Ferramentas de detecção (Valgrind)
No mundo profissional, não confiamos apenas no nosso olhar. Usamos ferramentas como o **[Valgrind](https://valgrind.org/)** (no Linux/Mac) para analisar o programa e dizer exatamente em qual linha o vazamento ocorreu.
*Exemplo de uso:* `valgrind --leak-check=full ./meu_programa`

---

## 4. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Gerenciamento de Memória (cppreference)](https://en.cppreference.com/w/c/memory)
- 📖 [malloc, calloc, realloc, free (cppreference)](https://en.cppreference.com/w/c/memory/malloc)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 8
**Objetivo:** Criar um "Array Dinâmico Infinito".
O programa deve ler números inteiros do usuário e armazená-los em um array. O usuário não sabe quantos números vai digitar, então o array deve crescer automaticamente conforme a necessidade.

**Requisitos:**
1. Comece alocando um array dinâmico inicial com capacidade para **5 elementos** usando `malloc`.
2. Use um loop para ler números do usuário. O loop termina quando o usuário digitar `-1`.
3. Mantenha uma variável `contador` para saber quantos números foram inseridos e uma variável `capacidade` para saber o tamanho atual do array.
4. Se o `contador` atingir a `capacidade`, use o `realloc` para **dobrar** a capacidade do array (ex: de 5 para 10, de 10 para 20).
5. Após o usuário digitar `-1`, imprima todos os números armazenados, libere a memória com `free` e anule o ponteiro.

**Exemplo de Saída Esperada:**
```text
Digite um numero (-1 para sair): 10
Digite um numero (-1 para sair): 20
Digite um numero (-1 para sair): 30
Digite um numero (-1 para sair): 40
Digite um numero (-1 para sair): 50
Digite um numero (-1 para sair): 60
Redimensionando array para 10 posicoes...
Digite um numero (-1 para sair): -1

Numeros digitados: 10 20 30 40 50 60
```

*Dica: Lembre-se da boa prática de usar um ponteiro temporário ao chamar o `realloc` para evitar perder o endereço original em caso de falha!*

### 🔗 [Retornar ao Sumário](SUMARIO.md)
