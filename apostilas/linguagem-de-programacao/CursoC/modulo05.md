# ARRAYS E STRINGS

## 1. ARRAYS UNIDIMENSIONAIS E MULTIDIMENSIONAIS

### 1.1 - O que é um Array? (A visão da memória)
Na matemática, pensamos em vetores como uma sequência de elementos indexados. Em C, um Array (ou vetor) é a materialização exata desse conceito na memória RAM: um bloco **contíguo** (vizinho) de bytes. 
Se você declara um array de 5 inteiros, o compilador reserva, por exemplo, 20 bytes contíguos na memória (5 * 4 bytes). A grande vantagem? Como o espaço é contínuo, o computador consegue calcular o endereço de qualquer elemento em tempo constante ($O(1)$), bastando fazer uma simples conta de adição.

### 1.2 - Declaração, Inicialização e Acesso
A sintaxe para declarar um array exige que você informe o tipo e o tamanho entre colchetes `[]`. O índice em C **sempre começa em zero**.

```c
#include <stdio.h>

int main() {
    // Declarando e inicializando
    int notas[5] = {7, 8, 6, 9, 10};
    
    // Acessando o terceiro elemento (índice 2)
    printf("A terceira nota eh: %d\n", notas[2]);
    
    // Iterando sobre o array
    for (int i = 0; i < 5; i++) {
        printf("Nota no indice %d: %d\n", i, notas[i]);
    }
    
    return 0;
}
```
**[O PULO DO GATO]** Se você inicializar o array na declaração, pode omitir o tamanho: `int notas[] = {7, 8, 6, 9, 10};`. O compilador é inteligente o suficiente para contar os elementos e reservar o espaço correto.

### 1.3 - Arrays Multidimensionais (Matrizes)
Para representar matrizes (como em álgebra linear), usamos arrays de arrays. A memória, no entanto, continua sendo um bloco contíguo; o C apenas faz a "tradução" das linhas e colunas para você.

```c
#include <stdio.h>

int main() {
    // Matriz 2x2 (2 linhas, 2 colunas)
    int matriz[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    printf("Elemento na linha 1, coluna 0: %d\n", matriz[1][0]); // Imprime 3
    
    return 0;
}
```

---

## 2. STRINGS EM C

### 2.1 - O que é uma String em C? (O caractere nulo `\0`)
**[CONCEITO FUNDAMENTAL]** Em C, **não existe um tipo de dado nativo chamado "String"**. Uma string em C é apenas um **Array de caracteres (`char`)** que termina obrigatoriamente com um caractere invisível chamado de **Null Terminator** (`\0`).
É esse `\0` que diz às funções do C onde a string acaba. Se você esquecer dele, o programa continuará lendo a memória além do array até encontrar um zero por acaso, causando falhas de segurança ou travamentos.

### 2.2 - Declaração e Leitura
Ao declarar uma string com tamanho fixo, sempre reserve um espaço extra para o `\0`.

```c
#include <stdio.h>

int main() {
    // O array tem 6 bytes: 5 para "Mundo" + 1 para o '\0' invisível
    char saudacao[] = "Mundo"; 
    
    char nome[50];
    printf("Digite seu nome: ");
    
    // CUIDADO: scanf("%s") para de ler no primeiro espaço em branco!
    // Para ler frases completas, use fgets:
    fgets(nome, sizeof(nome), stdin);
    
    printf("Ola, %s", nome); // O \n do fgets já está incluído na string
    
    return 0;
}
```

### 2.3 - Manipulação de Strings (A biblioteca [`string.h`](https://en.cppreference.com/w/c/string/byte))
Como strings são arrays, você **não pode** usar `==` para compará-las, nem `+` para concatená-las. Você deve usar as funções da biblioteca `string.h`:

- [`strlen`](https://en.cppreference.com/w/c/string/byte/strlen): Retorna o tamanho da string (sem contar o `\0`).
- [`strcpy`](https://en.cppreference.com/w/c/string/byte/strcpy): Copia uma string para outra.
- [`strcmp`](https://en.cppreference.com/w/c/string/byte/strcmp): Compara duas strings (retorna 0 se forem idênticas).

```c
#include <stdio.h>
#include <string.h>

int main() {
    char senha_correta[] = "admin123";
    char digitada[20];
    
    printf("Digite a senha: ");
    scanf("%s", digitada);
    
    // Comparando strings
    if (strcmp(senha_correta, digitada) == 0) {
        printf("Acesso liberado!\n");
    } else {
        printf("Senha incorreta.\n");
    }
    
    printf("Tamanho da senha digitada: %zu\n", strlen(digitada));
    
    return 0;
}
```

### 2.4 - O perigo do Buffer Overflow
Como o C confia cegamente no programador, funções como `gets()` ou `scanf("%s")` sem limites podem fazer você escrever dados além do tamanho do array, sobrescrevendo outras áreas da memória. Isso é conhecido como **Buffer Overflow** e é uma das vulnerabilidades de segurança mais famosas da história da computação. 
*Regra de ouro:* Sempre use `fgets` para ler strings, ou limite o tamanho no `scanf` (ex: `scanf("%49s", nome)` para um array de 50 posições).

---

## 3. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Arrays (cppreference)](https://en.cppreference.com/w/c/language/array)
- 📖 [Manipulação de Strings em C (cppreference)](https://en.cppreference.com/w/c/string/byte)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 5
**Objetivo:** Criar um "Verificador de Palíndromos".
Um palíndromo é uma palavra ou frase que se lê da mesma forma de trás para frente (ex: "arara", "reviver").

**Requisitos:**
1. Peça ao usuário para digitar uma palavra (use `fgets` e trate o `\n` final se necessário).
2. Descubra o tamanho da string usando `strlen`.
3. Utilize um loop `for` para comparar o primeiro caractere com o último, o segundo com o penúltimo, e assim por diante, até chegar ao meio da palavra.
4. Exiba se a palavra é um palíndromo ou não.

**Exemplo de Saída Esperada:**
```text
Digite uma palavra: arara
A palavra "arara" EH um palindromo!
```

### 🔗 [Retornar ao Sumário](SUMARIO.md)
