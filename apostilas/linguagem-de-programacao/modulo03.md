# CONTROLE DE FLUXO

## 1. ESTRUTURAS CONDICIONAIS

### 1.1 - Os comandos [`if`](https://en.cppreference.com/w/c/language/if) e [`else`](https://en.cppreference.com/w/c/language/if)
Na matemática, é comum definirmos funções por partes, onde o resultado depende de uma condição (ex: $f(x) = x$ se $x > 0$, e $-x$ se $x \le 0$). Em C, usamos o `if` e o `else` para criar esse tipo de desvio condicional. O código dentro do bloco só será executado se a expressão entre parênteses for avaliada como "verdadeira" (qualquer valor diferente de zero).

```c
#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    if (numero > 0) {
        printf("O numero eh positivo.\n");
    } else if (numero < 0) {
        printf("O numero eh negativo.\n");
    } else {
        printf("O numero eh zero.\n");
    }
    
    return 0;
}
```

### 1.2 - O operador ternário
Para condições simples de atribuição, o C oferece o operador ternário (`condicao ? valor_se_verdadeiro : valor_se_falso`). Ele é o equivalente exato ao operador condicional em muitas linguagens modernas e funciona como um `if/else` compactado em uma única linha.

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int maior;
    
    // Equivale a: if (a > b) maior = a; else maior = b;
    maior = (a > b) ? a : b; 
    
    printf("O maior numero eh: %d\n", maior);
    
    return 0;
}
```

### 1.3 - O comando [`switch`](https://en.cppreference.com/w/c/language/switch)
Quando precisamos comparar uma única variável contra vários valores constantes (como um menu de opções), o `switch` é mais limpo e eficiente que uma longa cadeia de `if/else`. 

**[O PULO DO GATO]** O `switch` usa uma técnica chamada "fall-through". Se você não colocar a palavra `break` ao final de um `case`, o programa continuará executando os casos seguintes até encontrar um `break` ou o fim do `switch`.

```c
#include <stdio.h>

int main() {
    int opcao;
    
    printf("--- MENU MATEMATICO ---\n");
    printf("1. Calcular Fatorial\n");
    printf("2. Verificar Paridade\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("Voce escolheu Fatorial.\n");
            break; // Interrompe o switch
        case 2:
            printf("Voce escolheu Paridade.\n");
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }
    
    return 0;
}
```

---

## 2. ESTRUTURAS ITERATIVAS (LOOPS)

### 2.1 - O loop [`while`](https://en.cppreference.com/w/c/language/while)
O `while` executa um bloco de código repetidamente **enquanto** uma condição for verdadeira. A verificação da condição acontece **antes** de cada execução do bloco. Se a condição já nascer falsa, o bloco nem chega a ser executado.

```c
#include <stdio.h>

int main() {
    int contador = 1;
    
    while (contador <= 5) {
        printf("Iteracao %d\n", contador);
        contador++; // Cuidado com loops infinitos!
    }
    
    return 0;
}
```

### 2.2 - O loop [`do...while`](https://en.cppreference.com/w/c/language/do)
A diferença crucial do `do...while` para o `while` é que a verificação da condição ocorre **depois** da execução do bloco. Isso garante que o código seja executado **pelo menos uma vez**, independentemente da condição. É ideal para validação de entrada de dados (menus).

```c
#include <stdio.h>

int main() {
    int numero;
    
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);
        
        if (numero <= 0) {
            printf("Erro! Tente novamente.\n");
        }
    } while (numero <= 0); // O loop repete se a condição for verdadeira
    
    printf("Numero valido recebido: %d\n", numero);
    
    return 0;
}
```

### 2.3 - O loop [`for`](https://en.cppreference.com/w/c/language/for)
O `for` é a estrutura de iteração mais clássica e compacta. Ele agrupa em uma única linha a **inicialização** da variável de controle, a **condição** de continuação e o **passo** (incremento/decremento). É perfeito quando sabemos exatamente quantas vezes o loop deve rodar.

```c
#include <stdio.h>

int main() {
    // Inicializacao; Condicao; Passo
    for (int i = 1; i <= 5; i++) {
        printf("Contagem: %d\n", i);
    }
    
    return 0;
}
```

### 2.4 - Controle de loops: [`break`](https://en.cppreference.com/w/c/language/break) e [`continue`](https://en.cppreference.com/w/c/language/continue)
Dentro de loops, podemos usar duas palavras-chave para alterar o fluxo de forma drástica:
- `break`: Encerra o loop imediatamente, pulando para a primeira linha após o loop.
- `continue`: Encerra apenas a **iteração atual**, pulando para a próxima verificação da condição.

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Para tudo quando i for 5
        }
        if (i % 2 == 0) {
            continue; // Pula os números pares
        }
        printf("%d ", i);
    }
    // Saída esperada: 1 3 (o loop para no 5, e os pares 2 e 4 são pulados)
    printf("\n");
    
    return 0;
}
```

---

## 3. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Estruturas de Controle (cppreference)](https://en.cppreference.com/w/c/language/statements)
- 📖 [Operadores Lógicos e Relacionais (cppreference)](https://en.cppreference.com/w/c/language/operator_comparison)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 3
**Objetivo:** Criar um "Verificador de Números Primos".
Na matemática, um número primo é aquele maior que 1 que possui apenas dois divisores distintos: 1 e ele mesmo.

**Requisitos:**
1. Peça ao usuário para digitar um número inteiro maior que 1 (use um `do...while` para garantir que ele não digite números inválidos).
2. Utilize um loop `for` para verificar se o número é divisível por algum valor entre 2 e a raiz quadrada do número (ou até o número - 1, se preferir a abordagem mais simples).
3. Se encontrar um divisor, o número não é primo. Use o `break` para sair do loop mais cedo.
4. Exiba uma mensagem clara informando se o número é primo ou não.

**Exemplo de Saída Esperada:**
```text
Digite um numero inteiro maior que 1: -5
Erro! Digite um numero valido.
Digite um numero inteiro maior que 1: 29
O numero 29 eh PRIMO.
```
*Dica: Lembre-se que para verificar se um número `n` é divisível por `i`, usamos o operador de módulo: `if (n % i == 0)`.*
