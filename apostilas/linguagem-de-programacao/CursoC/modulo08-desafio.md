# 🚀 DESAFIO PRÁTICO DO MÓDULO 8

## 🎯 Objetivo
Criar um "Array Dinâmico Infinito" que cresce automaticamente conforme a necessidade, praticando `malloc`, `realloc` e `free`.

## 📋 Requisitos
1. Comece alocando um array dinâmico inicial com capacidade para **5 elementos** usando `malloc`.
2. Use um loop para ler números inteiros do usuário. O loop termina quando o usuário digitar `-1`.
3. Mantenha variáveis `contador` (quantos números foram inseridos) e `capacidade` (tamanho atual do array).
4. Se `contador == capacidade`, use `realloc` para **dobrar** a capacidade do array.
5. Após o usuário digitar `-1`, imprima todos os números, libere a memória com `free` e anule o ponteiro.

## 🖥️ Exemplo de Saída Esperada
```text
Digite um numero (-1 para sair): 10
...
Digite um numero (-1 para sair): 60
Redimensionando array para 10 posicoes...
Digite um numero (-1 para sair): -1

Numeros digitados: 10 20 30 40 50 60
```

## 💡 Dicas
- **Regra de ouro do realloc:** Sempre atribua o resultado a um ponteiro temporário primeiro. Se o `realloc` falhar (retornar `NULL`), você ainda tem o ponteiro original para dar `free` e evitar vazamento.

---
🔗 [Retornar ao Sumário](SUMARIO.md)
