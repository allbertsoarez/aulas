# 📦 BACKUP COMPLETO DO CURSO DE LINGUAGEM C

> **Data de Geração:** Outubro de 2026  
> **Versão:** 1.0 (Consolidado)  
> **Nota:** Este é um arquivo de backup consolidado para leitura offline, impressão ou portabilidade. Para edições e manutenção, utilize sempre os arquivos individuais do repositório.

---

## 📑 ÍNDICE INTERNO

- [SUMÁRIO GERAL](#sumário-geral)
- [MÓDULO 1: Introdução e Preparação](#módulo-1-introdução-e-preparação-do-ambiente)
- [DESAFIO 01](#desafio-prático-do-módulo-1)
- [MÓDULO 2: Fundamentos e Sintaxe](#módulo-2-fundamentos-e-sintaxe)
- [DESAFIO 02](#desafio-prático-do-módulo-2)
- [MÓDULO 3: Controle de Fluxo](#módulo-3-controle-de-fluxo)
- [DESAFIO 03](#desafio-prático-do-módulo-3)
- [MÓDULO 4: Funções e Escopo](#módulo-4-funções-e-escopo)
- [DESAFIO 04](#desafio-prático-do-módulo-4)
- [MÓDULO 5: Arrays e Strings](#módulo-5-arrays-e-strings)
- [DESAFIO 05](#desafio-prático-do-módulo-5)
- [MÓDULO 6: Ponteiros e Memória](#módulo-6-ponteiros-e-memória)
- [DESAFIO 06](#desafio-prático-do-módulo-6)
- [MÓDULO 7: Tipos de Dados Definidos pelo Usuário](#módulo-7-tipos-de-dados-definidos-pelo-usuário)
- [DESAFIO 07](#desafio-prático-do-módulo-7)
- [MÓDULO 8: Gerenciamento Dinâmico de Memória](#módulo-8-gerenciamento-dinâmico-de-memória)
- [DESAFIO 08](#desafio-prático-do-módulo-8)
- [MÓDULO 9: Arquivos e Pré-processador](#módulo-9-arquivos-e-pré-processador)
- [DESAFIO 09](#desafio-prático-do-módulo-9)
- [MÓDULO 10: Tópicos Avançados e Boas Práticas](#módulo-10-tópicos-avançados-e-boas-práticas)
- [DESAFIO 10](#desafio-prático-do-módulo-10)
- [BÔNUS: MINICURSO RÁPIDO](#bônus-minicurso-rápido)

---

# SUMÁRIO GERAL

> **Legenda:** 🧠 Teoria | 🛠️ Configuração/Ferramentas | 💻 Prática/Código | 🚀 Projeto/Desafio

## 1. [MÓDULO 1: INTRODUÇÃO E PREPARAÇÃO DO AMBIENTE](modulo01.md)
1. 🧠 [CONTEXTO E MOTIVAÇÃO](https://pt.wikipedia.org/wiki/C_(linguagem_de_programa%C3%A7%C3%A3o)) *(Link em PT-BR)*
   - 1.1 - Por que aprender C? (A base de tudo)
   - 1.2 - Aplicações reais no mercado atual
   - 1.3 - O objetivo deste curso: desenvolvendo o modelo mental de memória
2. 🛠️ [PREPARAÇÃO DO AMBIENTE DE DESENVOLVIMENTO](https://learn.microsoft.com/pt-br/cpp/build/vscpp-step-0-installation) *(Link em PT-BR)*
   - 2.1 - Instalação do compilador GCC (Windows, Linux e Mac)
   - 2.2 - Configuração do Visual Studio Code e extensões essenciais
   - 2.3 - O ciclo de compilação (Pré-processamento, Compilação, Montagem, Linkagem)
3. 💻 [O PRIMEIRO CONTATO COM O CÓDIGO](https://en.cppreference.com/w/c/io/printf) *(Referência Oficial)*
   - 3.1 - Escrevendo e executando o "Hello World"
   - 3.2 - A diretiva de pré-processamento `#include`
   - 3.3 - A função principal `main` e a função `printf`
   - 3.4 - Compilando manualmente via terminal

🚀 **DESAFIO DO MÓDULO:** [Imprimir um diagrama ASCII no terminal](modulo01-desafio.md)

---

## 2. [MÓDULO 2: FUNDAMENTOS E SINTAXE](modulo02.md)
1. 🧠 [VARIÁVEIS, TIPOS PRIMITIVOS E MEMÓRIA](https://pt.wikipedia.org/wiki/Tipo_de_dado) *(Link em PT-BR)*
   - 1.1 - O que é uma variável na memória RAM?
   - 1.2 - Tipos primitivos: o tamanho importa (`int`, `float`, `double`, `char`)
   - 1.3 - O operador `sizeof`: descobrindo o tamanho das coisas
2. 💻 [ENTRADA E SAÍDA DE DADOS](https://en.cppreference.com/w/c/io) *(Referência Oficial)*
   - 2.1 - Formatadores do `printf` (`%d`, `%f`, `%c`, `%s`)
   - 2.2 - Capturando dados com `scanf` e o problema do buffer
   - 2.3 - Constantes: `#define` vs `const`

🚀 **DESAFIO DO MÓDULO:** [Criar uma calculadora de área de círculo interativa](modulo02-desafio.md)

---

## 3. [MÓDULO 3: CONTROLE DE FLUXO](modulo03.md)
1. 🧠 [ESTRUTURAS CONDICIONAIS](https://en.cppreference.com/w/c/language/if) *(Referência Oficial)*
   - 1.1 - Os comandos `if` e `else`
   - 1.2 - O operador ternário
   - 1.3 - O comando `switch` e o "fall-through"
2. 🧠 [ESTRUTURAS ITERATIVAS (LOOPS)](https://en.cppreference.com/w/c/language/while) *(Referência Oficial)*
   - 2.1 - O loop `while`
   - 2.2 - O loop `do...while`
   - 2.3 - O loop `for`
   - 2.4 - Controle de loops: `break` e `continue`

🚀 **DESAFIO DO MÓDULO:** [Criar um verificador de números primos](modulo03-desafio.md)

---

## 4. [MÓDULO 4: FUNÇÕES E ESCOPO](modulo04.md)
1. 🧠 [FUNÇÕES: DECLARAÇÃO E DEFINIÇÃO](https://en.cppreference.com/w/c/language/functions) *(Referência Oficial)*
   - 1.1 - O conceito matemático de função aplicado ao C
   - 1.2 - Sintaxe: retorno, nome, parâmetros
   - 1.3 - Declaração (protótipo) vs Definição (implementação)
2. 🧠 [ESCOPO DE VARIÁVEIS E A PILHA DE EXECUÇÃO](https://en.cppreference.com/w/c/language/scope) *(Referência Oficial)*
   - 2.1 - Variáveis locais e globais
   - 2.2 - O qualificador `static`
   - 2.3 - A mágica da Pilha de Execução (Call Stack)
3. 💻 [PASSAGEM DE PARÂMETROS E RECURSÃO](https://en.cppreference.com/w/c/language/functions) *(Referência Oficial)*
   - 3.1 - Passagem por valor (a regra do C)
   - 3.2 - O conceito de recursão e o caso base

🚀 **DESAFIO DO MÓDULO:** [Criar uma calculadora de MDC usando recursão](modulo04-desafio.md)

---

## 5. [MÓDULO 5: ARRAYS E STRINGS](modulo05.md)
1. 🧠 [ARRAYS UNIDIMENSIONAIS E MULTIDIMENSIONAIS](https://en.cppreference.com/w/c/language/array) *(Referência Oficial)*
   - 1.1 - O que é um Array? (A visão da memória contígua)
   - 1.2 - Declaração, inicialização e acesso
   - 1.3 - Arrays multidimensionais (Matrizes)
2. 💻 [STRINGS EM C](https://en.cppreference.com/w/c/string/byte) *(Referência Oficial)*
   - 2.1 - O que é uma String em C? (O caractere nulo `\0`)
   - 2.2 - Declaração e leitura segura (`fgets`)
   - 2.3 - Manipulação de strings (`string.h`)
   - 2.4 - O perigo do Buffer Overflow

🚀 **DESAFIO DO MÓDULO:** [Criar um verificador de palíndromos](modulo05-desafio.md)

---

## 6. [MÓDULO 6: PONTEIROS E MEMÓRIA](modulo06.md)
1. 🧠 [O QUE É UM PONTEIRO?](https://en.cppreference.com/w/c/language/pointer) *(Referência Oficial)*
   - 1.1 - O conceito fundamental: endereço de memória
   - 1.2 - Declarando um ponteiro
2. 💻 [OPERADORES DE PONTEIROS](https://en.cppreference.com/w/c/language/pointer) *(Referência Oficial)*
   - 2.1 - O operador "endereço de" (`&`)
   - 2.2 - O operador de "dereferência" (`*`)
   - 2.3 - O clássico exemplo: a função `swap` (troca)
3. 🧠 [PONTEIROS E ARRAYS: A RELAÇÃO INTRÍNSECA](https://en.cppreference.com/w/c/language/array) *(Referência Oficial)*
   - 3.1 - O nome de um array é um ponteiro
   - 3.2 - Acessando elementos via ponteiro
4. 💻 [ARITMÉTICA DE PONTEIROS](https://en.cppreference.com/w/c/language/operator_member_access) *(Referência Oficial)*
   - 4.1 - Somando e subtraindo de ponteiros
   - 4.2 - Iterando sobre um array usando apenas ponteiros
   - 4.3 - Ponteiro nulo (`NULL`)

🚀 **DESAFIO DO MÓDULO:** [Inverter um array usando apenas ponteiros](modulo06-desafio.md)

---

## 7. [MÓDULO 7: TIPOS DE DADOS DEFINIDOS PELO USUÁRIO](modulo07.md)
1. 🧠 [STRUCTS (REGISTROS)](https://en.cppreference.com/w/c/language/struct) *(Referência Oficial)*
   - 1.1 - O que é uma Struct? (Agrupando dados heterogêneos)
   - 1.2 - Declaração e inicialização
   - 1.3 - Acessando membros e o operador seta (`->`)
2. 🧠 [UNIONS (UNIÕES)](https://en.cppreference.com/w/c/language/union) *(Referência Oficial)*
   - 2.1 - O que é uma Union? (Compartilhando memória)
   - 2.2 - Struct vs Union na memória
3. 🧠 [ENUMS E TYPEDEF](https://en.cppreference.com/w/c/language/enum) *(Referência Oficial)*
   - 3.1 - O que é um Enum? (Deixando o código legível)
   - 3.2 - O qualificador `typedef` e o padrão ouro com `struct`

🚀 **DESAFIO DO MÓDULO:** [Criar um calculador de áreas de formas geométricas](modulo07-desafio.md)

---

## 8. [MÓDULO 8: GERENCIAMENTO DINÂMICO DE MEMÓRIA](modulo08.md)
1. 🧠 [STACK VS HEAP: A DUALIDADE DA MEMÓRIA](https://en.cppreference.com/w/c/memory) *(Referência Oficial)*
   - 1.1 - O que é a Stack (Pilha)?
   - 1.2 - O que é o Heap (Monte)?
   - 1.3 - Comparação e quando usar cada um
2. 💻 [FUNÇÕES DE ALOCAÇÃO DINÂMICA](https://en.cppreference.com/w/c/memory/malloc) *(Referência Oficial)*
   - 2.1 - `malloc` (Memory Allocation)
   - 2.2 - `calloc` (Contiguous Allocation)
   - 2.3 - `realloc` (Reallocation)
   - 2.4 - `free` (Liberação)
3. 🧠 [O PERIGO DOS VAZAMENTOS DE MEMÓRIA](https://en.cppreference.com/w/c/memory/free) *(Referência Oficial)*
   - 3.1 - O que é um Memory Leak?
   - 3.2 - Como evitar e boas práticas
   - 3.3 - Ferramentas de detecção (Valgrind)

🚀 **DESAFIO DO MÓDULO:** [Criar um array dinâmico infinito](modulo08-desafio.md)

---

## 9. [MÓDULO 9: ARQUIVOS E PRÉ-PROCESSADOR](modulo09.md)
1. 💻 [MANIPULAÇÃO DE ARQUIVOS DE TEXTO](https://en.cppreference.com/w/c/io) *(Referência Oficial)*
   - 1.1 - O conceito de Fluxo de Dados (Streams) e o ponteiro `FILE`
   - 1.2 - Abrindo e fechando arquivos (`fopen`, `fclose`)
   - 1.3 - Escrevendo e lendo texto formatado (`fprintf`, `fscanf`)
   - 1.4 - Lendo linha por linha (`fgets`)
2. 💻 [ARQUIVOS BINÁRIOS E ESTRUTURAS](https://en.cppreference.com/w/c/io/fwrite) *(Referência Oficial)*
   - 2.1 - A diferença entre texto e binário
   - 2.2 - Escrevendo e lendo blocos de memória (`fwrite`, `fread`)
   - 2.3 - Salvando e carregando Structs diretamente no disco
3. 🧠 [O PRÉ-PROCESSADOR E ORGANIZAÇÃO DE CÓDIGO](https://en.cppreference.com/w/c/preprocessor) *(Referência Oficial)*
   - 3.1 - O que é o pré-processador?
   - 3.2 - Macros e constantes (`#define`)
   - 3.3 - Compilação condicional e o "Include Guard"
   - 3.4 - Dividindo o código em múltiplos arquivos (`.c` e `.h`)

🚀 **DESAFIO DO MÓDULO:** [Criar um gerenciador de estoque binário](modulo09-desafio.md)

---

## 10. [MÓDULO 10: TÓPICOS AVANÇADOS E BOAS PRÁTICAS](modulo10.md)
1. 🛠️ [MAKEFILES: AUTOMATIZANDO A COMPILAÇÃO](https://www.gnu.org/software/make/manual/) *(Documentação GNU)*
   - 1.1 - O problema de compilar muitos arquivos manualmente
   - 1.2 - Sintaxe básica de um Makefile
   - 1.3 - Compilando com o Make
2. 🛠️ [DEBUGGING: DEPENDURANDO CÓDIGO](https://en.cppreference.com/w/c/program/debug) *(Referência Oficial)*
   - 2.1 - O fim do "printf" para achar erros
   - 2.2 - Preparando o código para o debug (flag `-g`)
   - 2.3 - Comandos essenciais do GDB
3. 🧠 [OPERADORES BIT A BIT (LOW LEVEL)](https://en.cppreference.com/w/c/language/operator_arithmetic) *(Referência Oficial)*
   - 3.1 - O mundo dos bits
   - 3.2 - A analogia com a Teoria dos Conjuntos
   - 3.3 - Deslocamento de bits (Shift)
   - 3.4 - Casos de uso reais: Máscaras e Flags
4. 🛠️ [FERRAMENTAS MODERNAS E LINHA DE COMANDO](https://github.com/google/sanitizers/wiki/AddressSanitizer) *(Documentação Sanitizers)*
   - 4.1 - O que são Sanitizers? (AddressSanitizer)
   - 4.2 - Argumentos de linha de comando (`argc`, `argv`)

🚀 **DESAFIO DO MÓDULO:** [Criar uma ferramenta de linha de comando (minhas_wc)](modulo10-desafio.md)

---

## 11. [BÔNUS: MINICURSO RÁPIDO](MiniCurso.md)
1. 🚀 [MINICURSO: FUNDAMENTOS ESSENCIAIS DA LINGUAGEM C](MiniCurso.md) *(Material Completo)*
   - 1.1 - Visão geral e estrutura condensada (7 módulos)
   - 1.2 - Do "Hello World" ao Projeto Final Integrador
   - 1.3 - Cheat Sheet e próximos passos

🚀 **ACESSO RÁPIDO:** [Abrir o MiniCurso.md](MiniCurso.md)

---
---

# MÓDULO 1: INTRODUÇÃO E PREPARAÇÃO DO AMBIENTE

## 1. CONTEXTO E MOTIVAÇÃO

### 1.1 - Por que aprender C? (A base de tudo)
A linguagem C não é apenas mais uma opção no vasto universo da programação; ela é o **alicerce**. Criada no início da década de 1970 por Dennis Ritchie nos Laboratórios Bell, o C foi projetado para ser uma linguagem de sistemas. 

Se você olhar para as linguagens mais populares do mundo hoje — C++, Java, C#, JavaScript, Python, Rust, Go — todas elas possuem uma sintaxe e uma filosofia fortemente inspiradas no C. Aprender C é como aprender latim: você não vai usá-lo para conversar no dia a dia, mas ele vai te dar a chave para entender a raiz de quase todas as outras línguas (linguagens) modernas.

### 1.2 - Aplicações reais no mercado atual
Enquanto linguagens como Python são excelentes para análise de dados e JavaScript domina a web, o C reina absoluto onde a **performance e o controle de hardware** são inegociáveis. 

O C é a linguagem dos Sistemas Operacionais (Windows, Linux, macOS são escritos majoritariamente em C), de Bancos de Dados de alta performance (MySQL, PostgreSQL), de Compiladores e Interpretadores, e de Sistemas Embarcados (o software que roda dentro do micro-ondas, do carro, do marca-passo ou de um rover em Marte). Dominar C abre as portas para as áreas mais críticas e bem pagas da engenharia de software.

### 1.3 - O objetivo deste curso: desenvolvendo o modelo mental de memória
A maioria dos cursos de programação ensina você a apertar botões e decorar sintaxe. Este curso tem um objetivo diferente: **ensinar você a pensar como a máquina**. 

Em linguagens modernas, o "Coletor de Lixo" (Garbage Collector) limpa a memória para você. Em C, **você é o dono da memória**. Você decide onde a variável nasce, quanto espaço ela ocupa e quando ela morre. Ao final deste curso, você não será apenas um "digitador de código", mas um engenheiro que enxerga a memória RAM como um tabuleiro de xadrez, sabendo exatamente onde cada peça está e como ela se move.

---

## 2. PREPARAÇÃO DO AMBIENTE DE DESENVOLVIMENTO

### 2.1 - Instalação do compilador GCC
Para transformar o seu texto em C em um programa que o computador entende, precisamos de um **Compilador**. O mais famoso e utilizado no mundo acadêmico e profissional é o **GCC (GNU Compiler Collection)**.

- **No Windows:** A forma mais moderna e estável é instalar o [MSYS2](https://www.msys2.org/). Após instalar, abra o terminal "MSYS2 UCRT64" e digite: `pacman -S mingw-w64-ucrt-x86_64-gcc`.
- **No Linux (Debian/Ubuntu):** Abra o terminal e digite: `sudo apt update && sudo apt install build-essential`.
- **No macOS:** Abra o terminal e digite: `xcode-select --install` (ou use o Homebrew: `brew install gcc`).

*Para verificar se funcionou, abra o terminal do seu sistema e digite `gcc --version`. Se uma mensagem com o número da versão aparecer, o compilador está pronto.*

### 2.2 - Configuração do Visual Studio Code
O código em C é apenas texto puro. Você pode escrevê-lo no Bloco de Notas, mas para ser produtivo, usaremos o **Visual Studio Code (VS Code)**.

1. Baixe e instale o [VS Code](https://code.visualstudio.com/).
2. Abra o VS Code, vá na aba de Extensões (ícone de quadradinhos na barra lateral) e instale o **C/C++ Extension Pack** (da Microsoft).
3. Crie uma pasta no seu computador chamada `curso-c`, abra-a no VS Code (`File > Open Folder`) e crie um arquivo chamado `main.c`.

### 2.3 - O ciclo de compilação: do código fonte ao executável
**[O PULO DO GATO]** A maioria dos iniciantes acha que o compilador apenas "transforma o código em programa". Na verdade, o processo é dividido em 4 fases distintas. Entender isso é o que separa os amadores dos profissionais:

1. **Pré-processamento:** O compilador lê o seu código e faz uma "faxina". Ele expande macros, remove comentários e, o mais importante, inclui os arquivos de cabeçalho (como o `stdio.h`). O resultado é um arquivo de texto gigante e expandido.
2. **Compilação:** O texto expandido é traduzido para **Assembly** (uma linguagem de baixo nível, cheia de mnemônicos como `MOV`, `ADD`, `JMP`), específica para a arquitetura do seu processador.
3. **Montagem:** O código Assembly é traduzido para **Código de Máquina** (aqueles 0s e 1s). O resultado é um arquivo "objeto" (`.o` ou `.obj`), que ainda não é um programa executável.
4. **Linkagem:** O seu programa usa funções prontas, como o `printf`. Onde está o código do `printf`? Ele está em uma biblioteca do sistema. O **Linker** pega o seu arquivo objeto e "costura" junto com as bibliotecas necessárias, gerando o **Executável** final (`.exe` no Windows ou sem extensão no Linux/Mac).

---

## 3. O PRIMEIRO CONTATO COM O CÓDIGO

### 3.1 - Escrevendo e executando o "Hello World"
No seu arquivo `main.c`, digite o seguinte código:

```c
#include <stdio.h>

int main() {
    printf("Olá, Mundo!\n");
    return 0;
}
```

Não se assuste. Vamos dissecar cada linha nas próximas seções.

### 3.2 - A diretiva de pré-processamento [`#include`](https://en.cppreference.com/w/c/preprocessor/include)
```c
#include <stdio.h>
```
Isso **não é uma função** e não termina com ponto e vírgula. É uma **diretiva de pré-processamento**. 

Quando o compilador lê essa linha na Fase 1 (Pré-processamento), ele literalmente procura o arquivo `stdio.h` (Standard Input Output Header) no seu sistema e **copia e cola** o conteúdo dele para dentro do seu `main.c`. 

O `stdio.h` contém as "plantas" (declarações) de como usar funções de entrada e saída, como o `printf`. Sem essa linha, o compilador não saberia o que é o `printf`.

### 3.3 - A função principal [`main`](https://en.cppreference.com/w/c/language/main_function)
```c
int main() {
    // ...
}
```
Em C, tudo o que executa deve estar dentro de uma **função**. E todo programa em C, sem exceção, **precisa** ter uma função chamada exatamente `main`. 

É o ponto de partida. Quando você clica duas vezes no executável, o Sistema Operacional carrega o programa na memória e diz: "Comece a executar a partir da linha onde está o `main`".

O `int` antes do `main` indica que essa função retorna um número inteiro para o Sistema Operacional quando termina.

### 3.4 - A função de saída formatada [`printf`](https://en.cppreference.com/w/c/io/printf) e o `\n`
```c
printf("Olá, Mundo!\n");
```
Aqui chamamos a função `printf` (print formatted) para imprimir texto na tela (no terminal).

- O texto deve estar entre aspas duplas `" "`.
- O `\n` é uma **sequência de escape**. Ele não imprime as letras "barras e n". Ele é um comando invisível que diz ao terminal: "Pule para a próxima linha" (New Line).
- O `;` (ponto e vírgula) no final é obrigatório. Em C, ele funciona como o ponto final em uma frase. Ele diz ao compilador: "Este comando (statement) acabou".

### 3.5 - Compilando manualmente via terminal
Vamos executar as fases de compilação e linkagem manualmente para perder o medo do terminal.

Abra o terminal integrado do VS Code (`Terminal > New Terminal`) e, na pasta onde o `main.c` está salvo, digite:

```bash
gcc main.c -o programa
```

- `gcc`: Chama o compilador.
- `main.c`: O arquivo de entrada (código fonte).
- `-o programa`: A flag `-o` (output) diz ao compilador para nomear o arquivo final de saída como `programa` (ou `programa.exe` no Windows).

Para executar o seu programa recém-criado:
- **No Windows:** Digite `.\programa.exe`
- **No Linux/Mac:** Digite `./programa`

Se tudo deu certo, você verá `Olá, Mundo!` brilhando no seu terminal. Parabéns, você acabou de compilar seu primeiro programa em C!

---

## 4. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Documentação Oficial de Referência (C) - cppreference](https://en.cppreference.com/w/c) *(Mantenha esta aba sempre aberta. É a bíblia do C).*
- 📖 [Guia de Instalação Microsoft (PT-BR)](https://learn.microsoft.com/pt-br/cpp/build/vscpp-step-0-installation)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 1
Agora é a sua vez de testar o que aprendeu. 

**Objetivo:** Criar um programa que imprima um "selo" ou "crachá" em formato ASCII no terminal.

**Requisitos:**
1. O desenho deve ter bordas (use caracteres como `*`, `#`, `-` ou `|`).
2. Deve conter o **seu nome** centralizado (ou o nome de um personagem fictício).
3. Deve usar múltiplas chamadas de `printf` ou uma única chamada com várias quebras de linha `\n`.
4. O código deve compilar sem erros e sem "warnings" (avisos).

**Exemplo de Saída Esperada:**

```text
+-------------------+
|                   |
|   SEU NOME AQUI   |
|   Dev C - 2026    |
|                   |
+-------------------+
```

*Tente fazer isso sem olhar a resposta. Se travar, releia o item 3.4 sobre o `\n`.*

---
---

# DESAFIO PRÁTICO DO MÓDULO 1

## 🎯 Objetivo
Criar um programa que imprima um "crachá" ou "selo" em formato ASCII no terminal, praticando o uso de `printf` e quebras de linha.

## 📋 Requisitos
1. O desenho deve ter bordas visíveis (use caracteres como `*`, `#`, `-`, `+` ou `|`).
2. Deve conter o **seu nome** (ou de um personagem fictício) centralizado.
3. Deve conter uma segunda linha de texto (ex: curso, ano ou cargo).
4. O código deve compilar sem erros e sem *warnings*.

## 🖥️ Exemplo de Saída Esperada
```text
+------------------------+
|                        |
|   SEU NOME AQUI        |
|   Dev C - 2026         |
|                        |
+------------------------+
```

## 💡 Dicas
- Lembre-se de que cada `printf` imprime na mesma linha, a menos que você use `\n`.
- Você pode usar um único `printf` com múltiplos `\n` ou vários `printf`s menores. Escolha a abordagem que achar mais organizada.

---
🔗 [Retornar ao Sumário](#sumário-geral)

---
