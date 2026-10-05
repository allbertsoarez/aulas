# 🚀 DESAFIO PRÁTICO DO MÓDULO 4

## 🎯 Objetivo
Criar uma "Calculadora de MDC (Máximo Divisor Comum)" utilizando **recursão**, aplicando o Algoritmo de Euclides.

## 📋 Requisitos
1. Crie uma função recursiva `int mdc(int a, int b)` que implemente a lógica:
   - Caso base: se `b == 0`, retorne `a`.
   - Passo recursivo: retorne `mdc(b, a % b)`.
2. No `main`, peça ao usuário para digitar dois números inteiros positivos.
3. Chame a função `mdc` e exiba o resultado formatado.

## 🖥️ Exemplo de Saída Esperada
```text
Digite o primeiro numero: 48
Digite o segundo numero: 18
O MDC de 48 e 18 eh: 6
```

## 💡 Dicas
- A beleza da recursão está em confiar que a função funcionará para o próximo passo. Não tente "desenrolar" a pilha mentalmente, confie no caso base.
- Certifique-se de que o caso base (`b == 0`) está correto para evitar loops infinitos (Stack Overflow).

---
🔗 [Retornar ao Sumário](SUMARIO.md)
