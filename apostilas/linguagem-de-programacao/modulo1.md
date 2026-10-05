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



### 🚀 DESAFIO PRÁTICO DO MÓDULO 1
Agora é a sua vez de testar o que aprendeu. 

**Objetivo:** Criar um programa que imprima um "selo" ou "crachá" em formato ASCII no terminal.

**Requisitos:**
1. O desenho deve ter bordas (use caracteres como `*`, `#`, `-` ou `|`).
2. Deve conter o **seu nome** centralizado (ou o nome de um personagem fictício).
3. Deve usar múltiplas chamadas de `printf` ou uma única chamada com várias quebras de linha `\n`.
4. O código deve compilar sem erros e sem "warnings" (avisos).

**Exemplo de Saída Esperada:**
