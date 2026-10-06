# MÓDULO 01: FUNDAMENTOS E AXIOMAS DO C++ MODERNO

Neste módulo, estabelecemos os axiomas da linguagem. Assim como na matemática, onde partimos de definições básicas para construir teoremas complexos, no C++ Moderno partimos da sintaxe fundamental e das abstrações de alto nível, evitando as armadilhas do "C com classes".

- 1.1 - Configuração do Ambiente e o Primeiro Programa
- 1.2 - Tipos de Dados, `auto` e Inferência de Tipos
- 1.3 - A Abstração Moderna: `std::string` vs. Arrays de Char
- 1.4 - Entrada e Saída Formatada e Manipulação Básica

## 1.1 - CONFIGURAÇÃO DO AMBIENTE E O PRIMEIRO PROGRAMA

Todo programa em C++ inicia sua execução na função `main`. Pense nela como o "axioma inicial" ou o ponto de partida de uma demonstração matemática: é o único ponto de entrada obrigatório e bem definido.

```cpp
#include <iostream> // Biblioteca de fluxo de entrada e saída

int main() {
    // std::cout é o fluxo de saída padrão (console)
    // O operador << é o operador de inserção de fluxo
    std::cout << "Olá, Mundo Matemático!" << std::endl;
    
    return 0; // Retorna 0 ao sistema operacional, indicando sucesso (axioma de término)
}
```
* Documentação: [`std::cout`](https://en.cppreference.com/w/cpp/io/cout), [`std::endl`](https://en.cppreference.com/w/cpp/io/manip/endl).

## 1.2 - TIPOS DE DADOS, `AUTO` E INFERÊNCIA DE TIPOS

Em C++, cada variável pertence a um "conjunto" bem definido (tipos como `int`, `double`, `bool`). No entanto, o C++ Moderno (C++11 em diante) introduziu a palavra-chave `auto`, que permite ao compilador inferir o tipo da variável com base no valor atribuído, atuando como uma variável muda em álgebra, onde o contexto define o domínio.

```cpp
#include <iostream>

int main() {
    int idade = 25;          // Tipo explícito: conjunto dos números inteiros
    double pi = 3.14159;     // Tipo explícito: conjunto dos números reais (ponto flutuante)
    
    // Inferência de tipo: o compilador deduz 'double' a partir de 3.14159
    auto constante_e = 2.71828; 
    
    std::cout << "Pi: " << pi << ", e: " << constante_e << std::endl;
    return 0;
}
```
* Documentação: [`auto`](https://en.cppreference.com/w/cpp/language/auto).

## 1.3 - A ABSTRAÇÃO MODERNA: `STD::STRING` VS. ARRAYS DE CHAR

No C tradicional, textos são manipulados como arrays de caracteres (`char[]`), que são essencialmente ponteiros crus propensos a erros de gerenciamento de memória (como *buffer overflow*). No C++ Moderno, usamos `std::string`, que é uma classe que encapsula a lógica de manipulação de texto, funcionando como um "conjunto fechado e seguro" de operações.

```cpp
#include <iostream>
#include <string> // Necessário para usar std::string

int main() {
    // Maneira Moderna e Segura (C++)
    std::string curso = "C++ Moderno";
    
    // Concatenação intuitiva (análoga à união de conjuntos)
    std::string mensagem = "Bem-vindo ao curso de " + curso + "!";
    
    std::cout << mensagem << std::endl;
    std::cout << "Tamanho da string: " << mensagem.length() << std::endl;
    
    return 0;
}
```
* Documentação: [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string), [`std::string::length`](https://en.cppreference.com/w/cpp/string/basic_string/size).

## 1.4 - ENTRADA E SAÍDA FORMATADA E MANIPULAÇÃO BÁSICA

Para receber dados do usuário, utilizamos `std::cin` com o operador de extração `>>`. Podemos combinar isso com manipuladores de fluxo para formatar a saída, garantindo precisão (como arredondamento em cálculos matemáticos).

```cpp
#include <iostream>
#include <string>
#include <iomanip> // Para manipuladores de formato como std::fixed e std::setprecision

int main() {
    std::string nome;
    double nota;

    std::cout << "Digite seu nome: ";
    std::cin >> nome; // Lê uma palavra (até o primeiro espaço)

    std::cout << "Digite sua nota final: ";
    std::cin >> nota;

    // Formatação matemática: 2 casas decimais
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Aluno: " << nome << " | Nota: " << nota << std::endl;

    return 0;
}
```
* Documentação: [`std::cin`](https://en.cppreference.com/w/cpp/io/cin), [`std::setprecision`](https://en.cppreference.com/w/cpp/io/manip/setprecision).

## [O PULO DO GATO]

**Higiene de Escopo e o Perigo do `using namespace std;`**  
Muitos tutoriais antigos ensinam a usar `using namespace std;` no início do arquivo para evitar digitar `std::`. **Não faça isso.** Em matemática, assumir uma variável global sem restrições polui o domínio do problema e pode gerar contradições (colisões de nomes). Em C++, incluir todo o namespace `std` globalmente pode causar ambiguidade com funções de outras bibliotecas. A boa prática é sempre explicitar o escopo (`std::cout`) ou, no máximo, declarar `using` para itens específicos e isolados dentro de funções.
