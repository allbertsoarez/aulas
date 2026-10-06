# DESAFIO PRÁTICO: O CALCULADOR DE MÉDIAS PONDERADAS

## ENUNCIADO
Crie um programa que solicite ao usuário três notas e seus respectivos pesos. O programa deve calcular a média ponderada dessas notas e exibir o resultado formatado com duas casas decimais.

## CONTEXTO MATEMÁTICO
A média ponderada é um conceito fundamental da estatística descritiva, representado pela fórmula:
$M_p = \frac{\sum_{i=1}^{n} (nota_i \times peso_i)}{\sum_{i=1}^{n} peso_i}$
O programa deve refletir essa fórmula com precisão, tratando os dados como elementos de um conjunto numérico real (`double`).

## RESTRIÇÕES TÉCNICAS
1. Utilize `std::cin` e `std::cout` para todas as interações de entrada e saída.
2. Utilize a palavra-chave `auto` para inferir o tipo da variável que armazenará o resultado final da média.
3. Utilize `std::string` para armazenar e exibir mensagens de texto.
4. **É estritamente proibido** o uso de `<stdio.h>`, `printf`, `scanf` ou a diretiva `using namespace std;`.
5. Utilize `<iomanip>` para garantir que a saída tenha exatamente 2 casas decimais.

## SAÍDA ESPERADA
```text
Digite a nota 1 e seu peso (ex: 8.5 2): 8.5 2
Digite a nota 2 e seu peso (ex: 7.0 3): 7.0 3
Digite a nota 3 e seu peso (ex: 9.0 5): 9.0 5
A média ponderada é: 8.30
```
