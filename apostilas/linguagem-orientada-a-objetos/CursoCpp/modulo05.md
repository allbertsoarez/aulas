# MÓDULO 05 - C++ MODERNO AVANÇADO (C++11/14/17/20)

Neste módulo, atingimos a maturidade da linguagem. O C++ Moderno (C++17 e C++20) introduziu recursos que tornam o código não apenas mais rápido, mas matematicamente mais expressivo e seguro. Vamos explorar como a linguagem evoluiu para modelar conceitos abstratos (como funções anônimas, uniões disjuntas e domínios restritos) diretamente no sistema de tipos, eliminando classes de erros inteiras em tempo de compilação.

## 5.1 - EXPRESSÕES LAMBDA E FECHAMENTOS (ANALOGIA COM CÁLCULO LAMBDA)
Na matemática, o cálculo lambda ($\lambda$-calculus) é a base formal para a definição de funções. Em C++, as `[expressões lambda](https://en.cppreference.com/w/cpp/language/lambda)` permitem a criação de funções anônimas inline. 

Um "fechamento" (closure) é a instância de uma lambda que captura variáveis do seu escopo externo. Matematicamente, é uma função que "lembra" do ambiente em que foi criada. Elas são fundamentais para passar comportamentos como argumentos para os algoritmos da STL (como `std::sort` ou `std::transform`).

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros = {5, 2, 9, 1, 5, 6};
    int fator_multiplicacao = 10;

    // Lambda que captura 'fator_multiplicacao' por valor ([=] ou [&fator])
    auto multiplicar = [fator_multiplicacao](int x) { 
        return x * fator_multiplicacao; 
    };

    // Aplicando a lambda (função de alta ordem)
    std::transform(numeros.begin(), numeros.end(), numeros.begin(), multiplicar);

    for (const auto& n : numeros) {
        std::cout << n << " "; // Saída: 50 20 90 10 50 60
    }
    return 0;
}
```

## 5.2 - TIPOS OPCIONAIS E VARIANTES: OPTIONAL, VARIANT E ANY (C++17)
O C++17 trouxe tipos que modelam perfeitamente estruturas matemáticas de dados incertos ou heterogêneos.

- **[std::optional](https://en.cppreference.com/w/cpp/utility/optional):** Modela uma **Função Parcial**. Na matemática, uma função parcial $f: A \to B$ pode não estar definida para alguns elementos de $A$. O `optional` representa um valor que pode ou não existir (análogo a $B \cup \{\bot\}$, onde $\bot$ é "indefinido").
- **[std::variant](https://en.cppreference.com/w/cpp/utility/variant):** Modela uma **União Disjunta** ($A \sqcup B$). Uma variável que pode armazenar com segurança um de vários tipos especificados, mas apenas um por vez. Substitui as `union` inseguras do C.
- **[std::any](https://en.cppreference.com/w/cpp/utility/any):** Um contêiner de tipo único que pode conter qualquer valor. Útil para cenários de altíssima dinamicidade, mas deve ser usado com moderação devido ao custo de *type erasure*.

```cpp
#include <iostream>
#include <optional>
#include <variant>
#include <string>

// Função parcial: raiz quadrada só é definida para x >= 0 nos Reais
std::optional<double> raizQuadradaSegura(double x) {
    if (x < 0) return std::nullopt; // Retorna "indefinido"
    return std::sqrt(x);
}

// União Disjunta: O resultado pode ser um número OU uma mensagem de erro
using ResultadoMatematico = std::variant<double, std::string>;

ResultadoMatematico dividir(double a, double b) {
    if (b == 0.0) return std::string("Erro: Divisão por zero");
    return a / b;
}

int main() {
    auto res1 = raizQuadradaSegura(16.0);
    if (res1.has_value()) {
        std::cout << "Raiz: " << res1.value() << "\n";
    }

    auto res2 = dividir(10.0, 0.0);
    // std::visit aplica uma lambda para tratar cada tipo possível da variante
    std::visit([](auto&& arg) {
        std::cout << "Resultado: " << arg << "\n";
    }, res2);

    return 0;
}
```

## 5.3 - CONCEITOS (CONCEPTS) E RESTRIÇÕES DE TEMPLATE (C++20)
Antes do C++20, templates eram como funções $f: T \to T$ sem restrições sobre $T$. Se você passasse um tipo que não suportasse a operação `+`, o erro de compilação ocorria dentro da função, gerando mensagens de erro crypticas.

Os `[Concepts](https://en.cppreference.com/w/cpp/language/constraints)` permitem definir explicitamente o **Domínio** de uma função template. É análogo a escrever $f: \{x \in \mathbb{R} \mid x > 0\} \to \mathbb{R}$. O compilador verifica as restrições na interface, gerando erros claros e imediatos.

```cpp
#include <iostream>
#include <concepts>
#include <string>

// Define o domínio: T deve ser um tipo aritmético (int, double, float, etc.)
template <typename T>
concept Aritmetico = std::is_arithmetic_v<T>;

// Restringe o template apenas ao domínio definido
template <Aritmetico T>
T calcularQuadrado(T valor) {
    return valor * valor;
}

int main() {
    std::cout << calcularQuadrado(5) << "\n";    // OK: int é aritmético
    std::cout << calcularQuadrado(3.14) << "\n"; // OK: double é aritmético
    
    // std::string s = "teste";
    // calcularQuadrado(s); // ERRO DE COMPILAÇÃO LIMPO: 'string' não satisfaz 'Aritmetico'
    
    return 0;
}
```

## 5.4 - STRING_VIEW E OTIMIZAÇÕES DE PERFORMANCE SEM CÓPIA
O `[std::string_view](https://en.cppreference.com/w/cpp/string/basic_string_view)` (C++17) é uma visão não-proprietária de uma string. Matematicamente, é como definir um subconjunto ou um intervalo $[a, b]$ de um conjunto maior sem precisar copiar os elementos do conjunto original.

Ele é essencial para funções que apenas *leem* strings, eliminando alocações de memória na Heap. **Atenção:** Como ele não possui os dados, a string original deve permanecer viva enquanto o `string_view` estiver em uso.

```cpp
#include <iostream>
#include <string_view>

// Passagem por string_view: zero cópias, máxima performance
void imprimirPrefixo(std::string_view str, size_t tamanho) {
    if (tamanho <= str.length()) {
        std::cout << str.substr(0, tamanho) << "\n";
    }
}

int main() {
    std::string texto_grande = "Este é um texto muito grande que não será copiado.";
    
    // Aceita std::string
    imprimirPrefixo(texto_grande, 10); 
    
    // Aceita string literal (C-string) sem converter para std::string antes!
    imprimirPrefixo("Literal direta", 7); 
    
    return 0;
}
```

## 5.5 - [O PULO DO GATO] - PROGRAMAÇÃO EM TEMPO DE COMPILAÇÃO COM CONSTEXPR E IF CONSTEXPR
A palavra-chave `[constexpr](https://en.cppreference.com/w/cpp/language/constexpr)` permite que funções e variáveis sejam avaliadas em **tempo de compilação**. O `[if constexpr](https://en.cppreference.com/w/cpp/language/if)` (C++17) permite que o compilador descarte ramas de código que não se aplicam ao tipo atual, evitando erros de compilação em templates genéricos.

**Analogia Matemática:** É o equivalente a provar um teorema por casos. Se a proposição $P$ for verdadeira, o compilador compila apenas o bloco $Q$; se for falsa, apenas o bloco $R$. O código que não se aplica é literalmente apagado antes da execução.

```cpp
#include <iostream>
#include <type_traits>

// Função constexpr: pode ser avaliada em tempo de compilação
constexpr int fatorial(int n) {
    return (n <= 1) ? 1 : n * fatorial(n - 1);
}

template <typename T>
void processarTipo(T valor) {
    // if constexpr avalia a condição em tempo de compilação
    if constexpr (std::is_integral_v<T>) {
        std::cout << "Inteiro processado: " << valor * 2 << "\n";
    } else if constexpr (std::is_floating_point_v<T>) {
        std::cout << "Ponto flutuante processado: " << valor / 2.0 << "\n";
    } else {
        std::cout << "Tipo desconhecido.\n";
    }
    // O compilador gera apenas o código para o ramo verdadeiro!
}

int main() {
    // Avaliado em tempo de compilação! O valor 120 é inserido diretamente no binário.
    constexpr int fat5 = fatorial(5); 
    std::cout << "Fatorial de 5: " << fat5 << "\n";

    processarTipo(10);    // Chama com int
    processarTipo(3.14);  // Chama com double

    return 0;
}
```
