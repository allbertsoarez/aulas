# ARQUIVOS E PRÉ-PROCESSADOR

## 1. MANIPULAÇÃO DE ARQUIVOS DE TEXTO

### 1.1 - O conceito de Fluxo de Dados (Streams) e o ponteiro `FILE`
Para o C, um arquivo (seja no disco rígido, na rede ou no teclado) é tratado como um **Fluxo de Dados (Stream)**: uma sequência contínua de bytes. Para interagir com esse fluxo, usamos uma estrutura especial chamada `FILE`, declarada na biblioteca `<stdio.h>`. Nós não acessamos o `FILE` diretamente; nós o manipulamos através de um **ponteiro** (`FILE *`).

### 1.2 - Abrindo e Fechando arquivos ([`fopen`](https://en.cppreference.com/w/c/io/fopen), [`fclose`](https://en.cppreference.com/w/c/io/fclose))
Antes de ler ou escrever, você precisa "abrir" o arquivo, o que cria a ponte entre o seu programa e o disco. E, crucialmente, você deve **fechar** o arquivo quando terminar, para garantir que os dados foram gravados e os recursos liberados.

```c
#include <stdio.h>

int main() {
    // fopen retorna um ponteiro para FILE, ou NULL se falhar
    FILE *arquivo = fopen("dados.txt", "w"); // "w" para escrita (write)
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    
    fprintf(arquivo, "Ola, arquivo!\n");
    
    fclose(arquivo); // Libera o fluxo
    return 0;
}
```
**Os modos de abertura mais comuns:**
- `"r"` (read): Abre para leitura. O arquivo deve existir.
- `"w"` (write): Abre para escrita. **Apaga** o conteúdo anterior ou cria um novo.
- `"a"` (append): Abre para escrita no **final** do arquivo, preservando o conteúdo anterior.

### 1.3 - Escrevendo e Lendo texto formatado ([`fprintf`](https://en.cppreference.com/w/c/io/fprintf), [`fscanf`](https://en.cppreference.com/w/c/io/fscanf))
As funções `fprintf` e `fscanf` funcionam exatamente como o `printf` e o `scanf`, mas em vez de escreverem na tela (stdout) ou lerem do teclado (stdin), elas escrevem e leem de um arquivo.

```c
#include <stdio.h>

int main() {
    FILE *arquivo = fopen("notas.txt", "w");
    int nota = 85;
    
    // Escrevendo no arquivo
    fprintf(arquivo, "A nota do aluno eh: %d\n", nota);
    fclose(arquivo);
    
    // Lendo do arquivo
    arquivo = fopen("notas.txt", "r");
    int nota_lida;
    fscanf(arquivo, "A nota do aluno eh: %d", &nota_lida);
    printf("Li do arquivo: %d\n", nota_lida);
    fclose(arquivo);
    
    return 0;
}
```

### 1.4 - Lendo linha por linha ([`fgets`](https://en.cppreference.com/w/c/io/fgets)) e o fim do arquivo
Para ler arquivos de texto linha a linha de forma segura, o `fgets` é a ferramenta padrão. Para saber quando o arquivo acabou, verificamos se a função retorna `NULL`.

```c
#include <stdio.h>

int main() {
    FILE *arquivo = fopen("texto.txt", "r");
    char linha[256];
    
    if (arquivo == NULL) return 1;
    
    // fgets lê até o '\n' ou até o limite do buffer (256)
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("LI: %s", linha);
    }
    
    fclose(arquivo);
    return 0;
}
```

---

## 2. ARQUIVOS BINÁRIOS E ESTRUTURAS

### 2.1 - A diferença entre Texto e Binário
Em um arquivo de texto, os números são salvos como caracteres (o número `12345` ocupa 5 bytes, um para cada dígito). Em um arquivo **binário**, os dados são salvos exatamente como estão na memória RAM (o inteiro `12345` ocupa exatamente 4 bytes). 
Arquivos binários não são legíveis por humanos no bloco de notas, mas são **muito mais rápidos** de ler/escrever e ocupam menos espaço.

### 2.2 - Escrevendo e Lendo blocos de memória ([`fwrite`](https://en.cppreference.com/w/c/io/fwrite), [`fread`](https://en.cppreference.com/w/c/io/fread))
Para ler e escrever em binário, usamos `fwrite` e `fread`. Elas não leem "texto", elas copiam blocos brutos de bytes da memória para o disco, e vice-versa.

```c
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    FILE *arquivo = fopen("dados.bin", "wb"); // "wb" = write binary
    
    // fwrite(ponteiro_dados, tamanho_de_cada_um, quantidade, arquivo)
    fwrite(numeros, sizeof(int), 5, arquivo);
    fclose(arquivo);
    
    // Lendo de volta
    int numeros_lidos[5];
    arquivo = fopen("dados.bin", "rb"); // "rb" = read binary
    fread(numeros_lidos, sizeof(int), 5, arquivo);
    fclose(arquivo);
    
    for(int i=0; i<5; i++) printf("%d ", numeros_lidos[i]);
    
    return 0;
}
```

### 2.3 - Salvando e Carregando Structs diretamente no disco
**[O PULO DO GATO]** Como o `fwrite` copia bytes brutos da memória, você pode salvar uma `struct` inteira no disco com uma única linha de código! Isso é incrivelmente poderoso para criar bancos de dados simples.

```c
#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    float salario;
} Funcionario;

int main() {
    Funcionario f1 = {1, "Maria", 5000.0};
    
    FILE *arquivo = fopen("funcionarios.bin", "wb");
    // Escreve a struct inteira na memória
    fwrite(&f1, sizeof(Funcionario), 1, arquivo);
    fclose(arquivo);
    
    // Carregando de volta
    Funcionario f_lido;
    arquivo = fopen("funcionarios.bin", "rb");
    fread(&f_lido, sizeof(Funcionario), 1, arquivo);
    fclose(arquivo);
    
    printf("Nome: %s, Salario: %.2f\n", f_lido.nome, f_lido.salario);
    
    return 0;
}
```

---

## 3. O PRÉ-PROCESSADOR E ORGANIZAÇÃO DE CÓDIGO

### 3.1 - O que é o Pré-processador?
Como vimos no Módulo 1, antes de compilar, o código passa por uma "faxina". O pré-processador é um programa que lê o seu código e faz substituições de texto. Ele reconhece linhas que começam com `#`.

### 3.2 - Macros e Constantes ([`#define`](https://en.cppreference.com/w/c/preprocessor/replace))
Além de criar constantes simples, o `#define` pode criar "macros" (pequenos trechos de código que são injetados pelo pré-processador).

```c
#include <stdio.h>

// Macro simples
#define PI 3.14159

// Macro com "parâmetros" (cuidado: não é uma função real, é substituição de texto!)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    printf("Area: %f\n", PI * 5 * 5);
    printf("Maior: %d\n", MAX(10, 20));
    return 0;
}
```

### 3.3 - Compilação Condicional e o "Include Guard"
O pré-processador pode decidir se um bloco de código será compilado ou não usando `#ifdef`, `#ifndef` e `#endif`. O uso mais famoso disso é o **Include Guard**, que evita que um arquivo de cabeçalho (`.h`) seja incluído múltiplas vezes no mesmo programa (o que causaria erros de redefinição).

```c
// Este é o conteúdo de um arquivo chamado minha_biblioteca.h

#ifndef MINHA_BIBLIOTECA_H  // Se MINHA_BIBLIOTECA_H NÃO estiver definido...
#define MINHA_BIBLIOTECA_H  // ...defina agora.

// O código do seu cabeçalho vem aqui
void minha_funcao();

#endif // Fim do Include Guard
```

### 3.4 - Dividindo o código em múltiplos arquivos (.c e .h)
Em projetos reais, colocar tudo em um único `main.c` torna o código ingovernável. A prática padrão é:
- **Arquivos `.h` (Header/Cabeçalho):** Contêm apenas as *declarações* (protótipos de funções, structs, macros). É o "cardápio" do que está disponível.
- **Arquivos `.c` (Source/Código):** Contêm a *implementação* (o corpo das funções). É a "cozinha" onde a mágica acontece.

Para compilar múltiplos arquivos, você passa todos eles para o GCC:
`gcc main.c biblioteca.c -o programa`
O compilador compila cada `.c` separadamente em arquivos objeto (`.o`) e o Linker os une no final.

---

## 4. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Entrada/Saída de Arquivos (cppreference)](https://en.cppreference.com/w/c/io)
- 📖 [Diretivas do Pré-processador (cppreference)](https://en.cppreference.com/w/c/preprocessor)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 9
**Objetivo:** Criar um "Gerenciador de Estoque Binário".
O programa deve permitir cadastrar produtos e salvá-los em um arquivo binário para que não se percam ao fechar o programa.

**Requisitos:**
1. Crie uma `struct Produto` com `id` (int), `nome` (array de char de 50 posições) e `preco` (float).
2. No `main`, crie um menu com 3 opções: 
   - 1. Cadastrar produto (ler dados do teclado e adicionar ao arquivo `estoque.bin` usando `fwrite` no modo `"ab"` - append binary).
   - 2. Listar produtos (abrir o arquivo no modo `"rb"`, ler com `fread` em um loop até o fim do arquivo e imprimir na tela).
   - 3. Sair.
3. Use um `do...while` para manter o menu rodando até o usuário escolher 3.

**Exemplo de Saída Esperada:**
```text
--- MENU DE ESTOQUE ---
1. Cadastrar
2. Listar
3. Sair
Opcao: 1
ID: 1
Nome: Teclado
Preco: 150.50
Produto salvo!

--- MENU DE ESTOQUE ---
...
Opcao: 2
Listando produtos:
ID: 1 | Nome: Teclado | Preco: 150.50
Fim da lista.
```

*Dica: Para ler o arquivo inteiro no `fread`, você pode usar um `while(fread(&produto, sizeof(Produto), 1, arquivo) == 1)`. Se o `fread` retornar 0, significa que chegou ao fim do arquivo.*

### 🔗 [Retornar ao Sumário](SUMARIO.md)
