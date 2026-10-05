# SUMÁRIO

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
