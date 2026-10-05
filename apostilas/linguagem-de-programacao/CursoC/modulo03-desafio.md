# 🚀 DESAFIO PRÁTICO DO MÓDULO 3

## 🎯 Objetivo
Criar um "Verificador de Números Primos", aplicando estruturas condicionais e loops.

## 📋 Requisitos
1. Peça ao usuário para digitar um número inteiro maior que 1.
2. Utilize um loop `do...while` para garantir que o usuário não digite números inválidos (menores ou iguais a 1).
3. Utilize um loop `for` para verificar se o número é divisível por algum valor entre 2 e a raiz quadrada do número (ou até `numero - 1`).
4. Se encontrar um divisor, o número não é primo. Use o `break` para sair do loop mais cedo e otimizar o código.
5. Exiba uma mensagem clara informando se o número é primo ou não.

## 🖥️ Exemplo de Saída Esperada
```text
Digite um numero inteiro maior que 1: -5
Erro! Digite um numero valido.
Digite um numero inteiro maior que 1: 29
O numero 29 eh PRIMO.
```

## 💡 Dicas
- Para verificar se um número `n` é divisível por `i`, use o operador de módulo: `if (n % i == 0)`.
- Uma variável booleana (ou um `int` valendo 0 ou 1) pode ajudar a controlar se um divisor foi encontrado.

---
🔗 [Retornar ao Sumário](SUMARIO.md)
