# 🔧 Códigos Fonte em Assembly (NASM x86)

Esta pasta armazena os arquivos de código-fonte em Assembly (`.asm`) relacionados à apostila de Linguagem de Programação. O objetivo é demonstrar a programação de baixo nível e a evolução histórica das linguagens.

Os exemplos utilizam a sintaxe **NASM** para arquitetura **x86 (32 bits)** no **Linux**.

## 📂 Índice de Arquivos

| Arquivo | Descrição | Tópico Relacionado |
| :--- | :--- | :--- |
| [`ola_mundo.asm`](./ola_mundo.asm) | Impressão de texto usando syscalls do Linux (`sys_write` e `sys_exit`). | 2. Introdução ao Assembly |
| [`variaveis.asm`](./variaveis.asm) | Declaração de dados (`dd`, `db`), seção `.bss` e operações aritméticas básicas. | 3. Variáveis e Memória |
| [`condicional.asm`](./condicional.asm) | Comparação (`cmp`) e saltos condicionais (`jl`, `jmp`) — o "if/else" do Assembly. | 4. Controle de Fluxo |
| [`repeticao.asm`](./repeticao.asm) | Laço de repetição usando `cmp`, `jmp` e conversão ASCII. | 4. Controle de Fluxo |
| [`comparacao_c.asm`](./comparacao_c.asm) | Soma de dois números em Assembly, com comentários comparando ao equivalente em C. | 5. Assembly vs C |

> **💡 Dica de Compilação (Linux):**
> ```bash
> nasm -f elf32 nome_do_arquivo.asm -o nome_do_arquivo.o
> ld -m elf_i386 nome_do_arquivo.o -o nome_do_executavel
> ./nome_do_executavel
> ```

> **⚠️ Nota:** Estes arquivos são didáticos e rodam apenas em sistemas Linux x86 (ou com emulador). O objetivo não é dominar Assembly, mas entender a evolução da programação.

---
<div align="center">
  <a href="../../apostilas/linguagem-de-programacao/README.md">🔙 Voltar para a Apostila de Linguagem de Programação</a>
</div>
