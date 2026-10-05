# 🚀 DESAFIO PRÁTICO DO MÓDULO 6

## 🎯 Objetivo
Inverter a ordem dos elementos de um array **usando apenas aritmética de ponteiros** (proibido usar colchetes `[]` dentro da função de inversão).

## 📋 Requisitos
1. Crie uma função `void inverter(int *inicio, int tamanho)`.
2. Dentro da função, use dois ponteiros: um apontando para o início e outro para o final do array.
3. Troque os valores apontados por esses dois ponteiros (use uma variável temporária).
4. Mova os ponteiros em direção ao centro até que eles se encontrem ou se cruzem.
5. No `main`, declare um array, imprima-o, chame a função e imprima-o novamente.

## 🖥️ Exemplo de Saída Esperada
```text
Array original: 1 2 3 4 5
Array invertido: 5 4 3 2 1
```

## 💡 Dicas
- O ponteiro do final pode ser calculado como `int *fim = inicio + tamanho - 1;`.
- A condição do loop pode ser `while (inicio < fim)`.
- Lembre-se de usar o operador `*` para acessar e modificar os valores.

---
🔗 [Retornar ao Sumário](SUMARIO.md)
