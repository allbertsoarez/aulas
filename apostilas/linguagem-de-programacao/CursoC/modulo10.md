# TÓPICOS AVANÇADOS E BOAS PRÁTICAS

## 1. MAKEFILES: AUTOMATIZANDO A COMPILAÇÃO

### 1.1 - O problema de compilar muitos arquivos manualmente
No Módulo 9, aprendemos a dividir o código em múltiplos arquivos `.c` e `.h`. Mas digitar `gcc main.c utils.c database.c -o programa` toda vez que você muda uma única linha de código é inviável em projetos reais. O **Make** é uma ferramenta que automatiza esse processo, compilando apenas o que foi modificado.

### 1.2 - Sintaxe básica de um Makefile
O Make funciona com base em **regras**. Uma regra diz: "Para gerar este *alvo*, preciso destas *dependências*. Se elas mudaram, execute este *comando*".

Crie um arquivo chamado `Makefile` (sem extensão) na pasta do seu projeto:

```makefile
# Variáveis para facilitar a manutenção
CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = meu_programa
SRCS = main.c utils.c

# Regra padrão (a primeira é executada quando você digita apenas 'make')
all: $(TARGET)

# Regra para linkar os arquivos objeto no executável final
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Regra para limpar os arquivos compilados
clean:
	rm -f $(TARGET) *.o
```

**[O PULO DO GATO]** A indentação dos comandos (como `$(CC)...` e `rm...`) **deve ser feita com a tecla TAB**, e não com espaços. O Make é rigoroso quanto a isso; se usar espaços, ele dará um erro de sintaxe.

### 1.3 - Compilando com o Make
Agora, em vez de digitar o comando gigante do GCC, basta abrir o terminal na pasta do projeto e digitar:
- `make`: Compila o programa.
- `make clean`: Apaga o executável (útil para limpar o projeto).

---

## 2. DEPENDURANDO CÓDIGO (DEBUGGING)

### 2.1 - O fim do "printf" para achar erros
Iniciantes costumam espalhar `printf("CHEGUEI AQUI\n")` pelo código para achar bugs. Isso é lento e polui o terminal. Para investigar problemas reais, usamos um **Debugger**, como o **GDB** (GNU Debugger) ou o debugger integrado do VS Code.

### 2.2 - Preparando o código para o Debug
Para que o debugger consiga mapear a memória do executável de volta para as linhas do seu código `.c`, você deve compilar com a flag `-g` (gerar informações de debug).

```bash
gcc -g main.c -o programa_debug
```

### 2.3 - Comandos essenciais do GDB
Ao executar `gdb ./programa_debug`, você entra no prompt do debugger. Os comandos mais usados são:
- `break main` (ou `b main`): Cria um **breakpoint** (pare o programa quando chegar na função main).
- `run` (ou `r`): Inicia a execução até o próximo breakpoint.
- `next` (ou `n`): Executa a próxima linha de código (sem entrar em funções).
- `step` (ou `s`): Executa a próxima linha, **entrando** dentro da função se houver chamada.
- `print variavel` (ou `p variavel`): Mostra o valor atual de uma variável.
- `continue` (ou `c`): Continua a execução até o próximo breakpoint.

*Dica de ouro: No VS Code, você pode fazer tudo isso clicando nos botões de "Play", "Step Over" e "Step Into" na barra de debug, sem precisar digitar comandos no terminal.*

---

## 3. OPERADORES BIT A BIT (LOW LEVEL)

### 3.1 - O mundo dos bits
Tudo na memória do computador é armazenado em bits (0s e 1s). Um `char` tem 8 bits, um `int` tem 32 bits. Em programação de baixo nível (drivers, sistemas embarcados, criptografia), precisamos manipular esses bits individualmente.

### 3.2 - A analogia com a Teoria dos Conjuntos
Se você já estudou Teoria dos Conjuntos na matemática, os operadores bit a bit são exatamente as operações entre conjuntos, onde cada bit representa a presença (1) ou ausência (0) de um elemento:

- **AND (`&`)**: Interseção ($A \cap B$). Só resulta em 1 se ambos os bits forem 1.
- **OR (`|`)**: União ($A \cup B$). Resulta em 1 se pelo menos um dos bits for 1.
- **XOR (`^`)**: Diferença Simétrica ($A \Delta B$). Resulta em 1 se os bits forem diferentes.
- **NOT (`~`)**: Complementar ($A^c$). Inverte todos os bits (0 vira 1, 1 vira 0).

### 3.3 - Deslocamento de Bits (Shift)
- **Left Shift (`<<`)**: Move os bits para a esquerda. Equivale a multiplicar por 2. (`x << 1` é o mesmo que `x * 2`).
- **Right Shift (`>>`)**: Move os bits para a direita. Equivale a dividir por 2. (`x >> 1` é o mesmo que `x / 2`).

### 3.4 - Casos de uso reais: Máscaras e Flags
Como armazenar 8 "verdadeiro/falso" (booleans) gastando apenas 1 byte? Usamos um `char` e manipulamos seus bits!

```c
#include <stdio.h>

// Definindo as "máscaras" (cada flag ocupa 1 bit)
#define FLAG_LEITURA    1  // 00000001
#define FLAG_ESCRITA    2  // 00000010
#define FLAG_EXECUCAO   4  // 00000100

int main() {
    unsigned char permissoes = 0; // Começa com tudo desligado (00000000)
    
    // Ligar o bit de LEITURA e ESCRITA (União / OR)
    permissoes = permissoes | FLAG_LEITURA | FLAG_ESCRITA; 
    // Agora permissoes é 00000011 (valor 3)
    
    // Verificar se o bit de ESCRITA está ligado (Interseção / AND)
    if (permissoes & FLAG_ESCRITA) {
        printf("Voce tem permissao de escrita!\n");
    }
    
    // Desligar o bit de LEITURA (Usando AND com o NOT / Complementar)
    permissoes = permissoes & ~FLAG_LEITURA;
    
    return 0;
}
```

---

## 4. FERRAMENTAS MODERNAS: SANITIZERS

### 4.1 - O que são Sanitizers?
O C é uma linguagem que confia cegamente no programador. Se você acessar uma memória inválida, o programa simplesmente "crasha" (Segmentation Fault) sem dizer o porquê. Os **Sanitizers** são ferramentas modernas do compilador que injetam código de vigilância no seu programa para detectar erros de memória em tempo de execução e apontar exatamente a linha do erro.

### 4.2 - AddressSanitizer (ASan)
O ASan detecta vazamentos de memória, *buffer overflows* (estourar o limite de um array) e *use-after-free* (usar um ponteiro após dar `free`).
Para usá-lo, compile com as flags:
```bash
gcc -fsanitize=address -g main.c -o programa_asan
```
Se você tiver um bug de memória, ao rodar o programa, o ASan imprimirá um relatório detalhado e colorido no terminal dizendo exatamente em qual linha o erro ocorreu. É a melhor ferramenta de segurança para o programador C moderno.

---

## 5. ARGUMENTOS DE LINHA DE COMANDO

### 5.1 - A assinatura completa do `main`
Até agora, usamos `int main()`. Mas a forma completa e profissional da função principal permite que o programa receba parâmetros diretamente do terminal, no momento em que é executado.

```c
int main(int argc, char *argv[])
```
- `argc` (argument count): Um inteiro com a **quantidade** de argumentos passados (incluindo o nome do programa).
- `argv` (argument vector): Um **array de strings** (ponteiros para `char`) contendo os argumentos em si.

### 5.2 - Criando ferramentas CLI (Command Line Interface)
```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Voce passou %d argumentos.\n", argc);
    
    for (int i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }
    
    return 0;
}
```
Se você compilar isso como `./meu_programa` e executar no terminal:
`./meu_programa ola mundo 42`

A saída será:
```text
Voce passou 4 argumentos.
Argumento 0: ./meu_programa
Argumento 1: ola
Argumento 2: mundo
Argumento 3: 42
```
*Nota: O `argv[0]` é sempre o nome/caminho do próprio executável.*

---

## 6. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Operadores Bit a Bit (cppreference)](https://en.cppreference.com/w/c/language/operator_arithmetic)
- 📖 [Makefile (GNU Manual)](https://www.gnu.org/software/make/manual/)
- 📖 [AddressSanitizer (Clang/GCC)](https://github.com/google/sanitizers/wiki/AddressSanitizer)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 10 (PROJETO FINAL)
**Objetivo:** Criar uma ferramenta de linha de comando chamada `minhas_wc` (inspirada no comando `wc` do Linux) que conta linhas, palavras e caracteres de um arquivo de texto.

**Requisitos:**
1. O programa deve receber o **nome do arquivo** como argumento via `argv[1]`.
2. Se o usuário não passar nenhum argumento (`argc < 2`), o programa deve imprimir uma mensagem de erro e sair com `return 1`.
3. O programa deve abrir o arquivo, ler caractere por caractere (ou linha por linha) e contar:
   - Total de caracteres.
   - Total de linhas (contando as ocorrências de `\n`).
   - Total de palavras (uma palavra é qualquer sequência de caracteres separada por espaços ou quebras de linha).
4. O projeto **deve** ser compilado usando um `Makefile`.
5. *(Opcional/Desafio Extra)*: Compile o projeto com o AddressSanitizer (`-fsanitize=address`) e rode-o para garantir que não há vazamentos de memória.

**Exemplo de Saída Esperada:**
```bash
$ make
gcc -Wall -Wextra -g minhas_wc.c -o minhas_wc

$ ./minhas_wc
Erro: Forneça o nome de um arquivo!
Uso: ./minhas_wc <arquivo.txt>

$ ./minhas_wc poema.txt
Arquivo: poema.txt
Linhas: 4 | Palavras: 20 | Caracteres: 125
```

*Dica: Para contar palavras, crie uma variável `int dentro_da_palavra = 0;`. Se você encontrar um caractere que não é espaço e `dentro_da_palavra` for 0, você achou uma nova palavra (incrementa o contador e muda a flag para 1). Se encontrar um espaço, zere a flag.*

### 🔗 [Retornar ao Sumário](SUMARIO.md)
