# FUNDAMENTOS E MODERNIDADE INICIAL (O "C" COM ESTEROIDES)

Neste módulo, estabelecemos os axiomas do C++ Moderno. Diferente de cursos tradicionais que ensinam "C com classes", começamos imediatamente com as ferramentas que tornam o código mais seguro, legível e matematicamente elegante.

## 1.1 - INTRODUÇÃO AO ECOSSISTEMA C++ E O PRIMEIRO PROGRAMA
O C++ é uma linguagem de programação de propósito geral que suporta múltiplos paradigmas (imperativo, orientado a objetos e genérico). O ponto de entrada de qualquer programa C++ é a função `main`.

Para exibir dados na saída padrão, utilizamos o objeto `[std::cout](https://en.cppreference.com/w/cpp/io/cout)` da biblioteca `<iostream>`. O operador `<<` é o operador de inserção de fluxo, que direciona os dados para a saída.

```cpp
#include <iostream>

int main() {
    // std::endl insere uma nova linha e limpa o buffer de saída
    std::cout << "Olá, Mundo C++ Moderno!" << std::endl;
    return 0; // Indica ao sistema operacional que o programa terminou com sucesso
}
```

## 1.2 - TIPOS DE DADOS, INFERÊNCIA COM AUTO E ANALOGIA COM VARIÁVEIS MATEMÁTICAS
Na matemática, uma variável é um símbolo que representa um elemento de um conjunto (ex: $x \in \mathbb{R}$). Em C++, cada variável possui um tipo que define o conjunto de valores possíveis e as operações válidas.

O C++11 introduziu a palavra-chave `[auto](https://en.cppreference.com/w/cpp/language/auto)`, que permite que o compilador deduza o tipo da variável a partir da expressão de inicialização. Isso é análogo a dizer "seja $x$ tal que $x = 5$"; o sistema infere que $x$ é um inteiro sem que precisemos declarar explicitamente $x \in \mathbb{Z}$.

```cpp
#include <iostream>
#include <string>

int main() {
    auto idade = 25;            // O compilador infere 'int'
    auto nota = 9.5;            // O compilador infere 'double'
    auto nome = std::string("Ada Lovelace"); // O compilador infere 'std::string'
    
    std::cout << "Nome: " << nome << ", Idade: " << idade << "\n";
    return 0;
}
```

## 1.3 - OPERADORES E EXPRESSÕES: A LÓGICA PROPOSICIONAL APLICADA AO CÓDIGO
Operadores relacionais e lógicos em C++ são a implementação direta da lógica proposicional. 
- Conjunção (E lógico): `&&` (análogo a $\land$)
- Disjunção (OU lógico): `||` (análogo a $\lor$)
- Negação (NÃO lógico): `!` (análogo a $\neg$)

Esses operadores avaliam expressões que resultam em um valor booleano (`true` ou `false`), fundamentais para tomada de decisão.

## 1.4 - ESTRUTURAS DE CONTROLE DE FLUXO E O RANGE-BASED FOR
Estruturas de controle permitem alterar o fluxo sequencial de execução. O C++11 introduziu o `[range-based for](https://en.cppreference.com/w/cpp/language/range-for)`, que é matematicamente elegante para iterar sobre todos os elementos de um conjunto (ou contêiner), análogo à notação de conjunto $\forall x \in S$.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {2, 4, 6, 8, 10};
    
    // Lê-se: "Para cada elemento 'n' no conjunto 'numeros'"
    for (const auto& n : numeros) {
        std::cout << n << " ";
    }
    // Saída: 2 4 6 8 10
    return 0;
}
```

## 1.5 - FUNÇÕES, ESCOPO E PASSAGEM POR REFERÊNCIA
Uma função em C++ mapeia um domínio (parâmetros) a um contradomínio (tipo de retorno), similar a $f: X \to Y$. 

Para evitar cópias desnecessárias de dados (especialmente em objetos grandes), utilizamos a `[passagem por referência](https://en.cppreference.com/w/cpp/language/reference)` (indicada por `&`). Isso permite que a função opere diretamente sobre o objeto original, sem criar uma cópia, análogo a aplicar uma transformação linear diretamente no vetor original, em vez de copiar o vetor.

```cpp
#include <iostream>
#include <string>

// Passagem por referência constante: garante que a string não será modificada
void imprimirSaudacao(const std::string& nome) {
    std::cout << "Bem-vindo, " << nome << "!\n";
}

int main() {
    std::string aluno = "Carl Friedrich Gauss";
    imprimirSaudacao(aluno); // Nenhuma cópia da string é feita
    return 0;
}
```

## 1.6 - [O PULO DO GATO] - POR QUE ABANDONAR #DEFINE E ABRAÇAR CONSTEXPR
No C antigo, era comum usar `#define PI 3.14159`. Isso é uma diretiva de pré-processador que faz substituição textual cega, sem verificação de tipo, violando o escopo e dificultando a depuração.

No C++ Moderno, devemos usar `[constexpr](https://en.cppreference.com/w/cpp/language/constexpr)`. Uma variável `constexpr` é uma constante verdadeira, avaliada em tempo de compilação, com tipagem forte e respeito ao escopo. É o equivalente a um axioma no seu código: um valor imutável e matematicamente seguro.

```cpp
#include <iostream>

// Errado (C antigo): #define PI 3.14159
// Certo (C++ Moderno):
constexpr double PI = 3.14159265358979323846;

int main() {
    auto raio = 5.0;
    auto area = PI * raio * raio; // Avaliado com máxima precisão e segurança de tipo
    std::cout << "Área: " << area << "\n";
    return 0;
}
```
