# 🚀 DESAFIO PRÁTICO DO MÓDULO 5

## 🎯 Objetivo
Criar um "Verificador de Palíndromos", praticando manipulação de strings e arrays.

## 📋 Requisitos
1. Peça ao usuário para digitar uma palavra (use `fgets` para segurança).
2. Remova o caractere de nova linha (`\n`) que o `fgets` coloca no final da string, se houver.
3. Descubra o tamanho da string usando `strlen`.
4. Utilize um loop `for` para comparar o primeiro caractere com o último, o segundo com o penúltimo, e assim por diante, até chegar ao meio da palavra.
5. Exiba se a palavra é um palíndromo ou não.

## 🖥️ Exemplo de Saída Esperada
```text
Digite uma palavra: arara
A palavra "arara" EH um palindromo!

Digite uma palavra: computador
A palavra "computador" NAO eh um palindromo.
```

## 💡 Dicas
- O índice do último caractere válido é `strlen(palavra) - 1`.
- O loop deve rodar enquanto o índice da esquerda for menor que o índice da direita.

---
🔗 [Retornar ao Sumário](SUMARIO.md)
