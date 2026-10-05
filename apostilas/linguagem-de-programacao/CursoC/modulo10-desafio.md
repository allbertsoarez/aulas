# 🚀 DESAFIO PRÁTICO DO MÓDULO 10 (PROJETO FINAL)

## 🎯 Objetivo
Criar uma ferramenta de linha de comando (CLI) chamada `minhas_wc`, inspirada no comando `wc` do Linux, que conta linhas, palavras e caracteres de um arquivo de texto.

## 📋 Requisitos
1. O programa deve receber o **nome do arquivo** como argumento via `argv[1]`.
2. Se o usuário não passar nenhum argumento (`argc < 2`), imprima uma mensagem de erro e saia com `return 1`.
3. Abra o arquivo e conte:
   - Total de caracteres.
   - Total de linhas (contando as ocorrências de `\n`).
   - Total de palavras (sequências de caracteres separadas por espaços ou quebras de linha).
4. O projeto deve ser compilado usando um `Makefile`.

## 🖥️ Exemplo de Saída Esperada
```bash
$ ./minhas_wc
Erro: Forneça o nome de um arquivo!
Uso: ./minhas_wc <arquivo.txt>

$ ./minhas_wc poema.txt
Arquivo: poema.txt
Linhas: 4 | Palavras: 20 | Caracteres: 125
```

## 💡 Dicas
- Para contar palavras, use uma flag `int dentro_da_palavra = 0;`. Se encontrar um caractere que não é espaço e a flag for 0, é uma nova palavra (incrementa contador e flag = 1). Se encontrar espaço, flag = 0.
- Compile com `gcc -Wall -Wextra -g minhas_wc.c -o minhas_wc` ou configure seu `Makefile` para fazer isso.

---
🔗 [Retornar ao Sumário](SUMARIO.md)
