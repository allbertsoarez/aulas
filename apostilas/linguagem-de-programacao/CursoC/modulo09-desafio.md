# 🚀 DESAFIO PRÁTICO DO MÓDULO 9

## 🎯 Objetivo
Criar um "Gerenciador de Estoque Binário" que persiste dados no disco, praticando `fwrite` e `fread`.

## 📋 Requisitos
1. Crie uma `struct Produto` com `id` (int), `nome` (array de 50 chars) e `preco` (float).
2. Crie um menu com 3 opções em um loop `do...while`:
   - **1. Cadastrar:** Ler dados do teclado e adicionar ao arquivo `estoque.bin` usando `fwrite` no modo `"ab"` (append binary).
   - **2. Listar:** Abrir o arquivo no modo `"rb"`, ler com `fread` em um loop até o fim do arquivo e imprimir na tela.
   - **3. Sair.**
3. Garanta que o arquivo seja fechado corretamente após cada operação.

## 🖥️ Exemplo de Saída Esperada
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

Opcao: 2
Listando produtos:
ID: 1 | Nome: Teclado | Preco: 150.50
Fim da lista.
```

## 💡 Dicas
- Para ler o arquivo inteiro, use: `while(fread(&produto, sizeof(Produto), 1, arquivo) == 1)`. Se retornar 0, chegou ao fim do arquivo (EOF).

---
🔗 [Retornar ao Sumário](SUMARIO.md)
