# MÓDULO 04 - A BIBLIOTECA PADRÃO (STL) E PROGRAMAÇÃO GENÉRICA

Neste módulo, exploramos a Standard Template Library (STL), o coração matemático e algorítmico do C++. A STL nos fornece as estruturas de dados e os algoritmos mais eficientes já escritos, permitindo que escrevamos código genérico, reutilizável e de altíssima performance. Vamos modelar nossos dados usando a teoria dos conjuntos e aplicar transformações usando o conceito de funções de alta ordem.

## 4.1 - INTRODUÇÃO A TEMPLATES (ANALOGIA COM FUNÇÕES POLIMÓRFICAS)
Na matemática, podemos definir uma função genérica $f: T \to T$ que opera sobre um tipo $T$ qualquer, sem especificar se $T$ é o conjunto dos Reais ($\mathbb{R}$) ou dos Inteiros ($\mathbb{Z}$). Em C++, os `[Templates](https://en.cppreference.com/w/cpp/language/templates)` fazem exatamente isso. Eles permitem que escrevamos funções e classes que operam com tipos genéricos, garantindo segurança de tipo (type-safety) em tempo de compilação sem sacrificar a performance.

```cpp
#include <iostream>

// Template de função: lê-se "para qualquer tipo T"
template <typename T>
T obterMaximo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // O compilador gera automaticamente as versões para int e double
    std::cout << "Max Int: " << obterMaximo(10, 20) << "\n";
    std::cout << "Max Double: " << obterMaximo(3.14, 2.71) << "\n";
    return 0;
}
```

## 4.2 - CONTÊINERES SEQUENCIAIS: VECTOR, ARRAY E STRING
Contêineres sequenciais armazenam elementos em uma ordem linear estrita, análogos a sequências ou tuplas ordenadas na matemática.

- **[std::array](https://en.cppreference.com/w/cpp/container/array):** Um array de tamanho fixo alocado na Stack. Substitui os arrays brutos do C, oferecendo verificação de limites (com `.at()`) e conhecendo seu próprio tamanho (`.size()`).
- **[std::vector](https://en.cppreference.com/w/cpp/container/vector):** O cavalo de batalha do C++. Um array dinâmico alocado na Heap. Redimensiona-se automaticamente quando necessário.
- **[std::string](https://en.cppreference.com/w/cpp/string/basic_string):** Tecnicamente um `std::basic_string<char>`, é um contêiner especializado para manipulação de texto, substituindo completamente os arrays de caracteres terminados em `\0` do C.

## 4.3 - CONTÊINERES ASSOCIATIVOS: MAP E SET
Aqui a analogia matemática brilha. Estes contêineres não armazenam elementos por índice, mas sim por chaves ou valores, utilizando árvores rubro-negras (Red-Black Trees) para manter a ordem e garantir complexidade $O(\log n)$.

- **[std::set](https://en.cppreference.com/w/cpp/container/set):** A implementação direta de um **Conjunto** na teoria dos conjuntos. Garante que todos os elementos sejam únicos (não há duplicatas) e mantém os elementos ordenados.
- **[std::map](https://en.cppreference.com/w/cpp/container/map):** A implementação de uma **Função** ou **Relação**. Mapeia uma chave (domínio) a um valor (contradomínio). Matematicamente, é um conjunto de pares ordenados $(k, v)$ onde nenhuma chave $k$ se repete.

```cpp
#include <iostream>
#include <map>
#include <set>
#include <string>

int main() {
    // Conjunto: Elementos únicos e ordenados
    std::set<int> numeros_primos = {2, 3, 5, 7, 11, 2}; // O '2' duplicado é ignorado
    
    // Mapa: Função que mapeia String (Chave) -> Double (Valor)
    std::map<std::string, double> constantes_matematicas;
    constantes_matematicas["PI"] = 3.14159;
    constantes_matematicas["E"] = 2.71828;
    
    // Acesso direto (análogo a avaliar f("PI"))
    std::cout << "PI = " << constantes_matematicas["PI"] << "\n";
    
    return 0;
}
```

## 4.4 - ITERADORES E A ELEGÂNCIA DO LAÇO BASEADO EM INTERVALO
Um `[Iterador](https://en.cppreference.com/w/cpp/iterator)` é uma generalização de um ponteiro. Ele aponta para um elemento dentro de um contêiner e fornece operadores para navegar por ele (como `++` e `*`). Eles são a "cola" que conecta os contêineres aos algoritmos da STL.

No C++11, o `range-based for` abstrai a complexidade dos iteradores, permitindo iterar sobre qualquer contêiner que possua `begin()` e `end()` de forma matematicamente limpa ($\forall x \in S$).

## 4.5 - ALGORITMOS DA STL: SORT, FIND, TRANSFORM
A STL separa os dados (contêineres) das operações (algoritmos). Os algoritmos da biblioteca `<algorithm>` operam em pares de iteradores, permitindo que você aplique operações complexas a qualquer estrutura de dados.

- **[std::sort](https://en.cppreference.com/w/cpp/algorithm/sort):** Ordena um intervalo.
- **[std::find](https://en.cppreference.com/w/cpp/algorithm/find):** Busca um elemento em um intervalo.
- **[std::transform](https://en.cppreference.com/w/cpp/algorithm/transform):** Aplica uma função a um intervalo e salva o resultado (análogo a aplicar uma transformação linear $T(v)$ a um espaço vetorial).

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> notas = {7, 5, 9, 4, 8};
    
    // Ordenação (O(n log n))
    std::sort(notas.begin(), notas.end());
    
    // Transformação: elevando todas as notas ao quadrado
    std::transform(notas.begin(), notas.end(), notas.begin(), 
                   [](int n) { return n * n; });
                   
    // Soma dos elementos (usando std::accumulate de <numeric>)
    int soma = std::accumulate(notas.begin(), notas.end(), 0);
    
    std::cout << "Soma das notas ao quadrado: " << soma << "\n";
    return 0;
}
```

## 4.6 - [O PULO DO GATO] - LOCALIDADE DE REFERÊNCIA
Na teoria da complexidade algorítmica, inserir no meio de um `[std::list](https://en.cppreference.com/w/cpp/container/list)` (lista duplamente encadeada) é $O(1)$, enquanto em um `std::vector` é $O(N)$. Logo, a lista deveria ser mais rápida, certo? **ERRADO.**

**[O PULO DO GATO]:** A CPU não lê a memória byte por byte; ela lê em blocos chamados *Cache Lines* (geralmente 64 bytes). O `std::vector` armazena seus elementos em memória contígua. Ao ler o primeiro elemento, a CPU traz os próximos para o cache L1/L2. Isso é **Localidade Espacial**. 
Já o `std::list` espalha seus nós pela Heap. Cada acesso a um nó causa um *Cache Miss*, forçando a CPU a buscar dados na RAM (que é centenas de vezes mais lenta). Na prática, para conjuntos de dados de tamanho moderado, o `std::vector` esmagará o `std::list` em performance, mesmo com a complexidade teórica desfavorável. **Sempre comece com `std::vector` e só mude se provar com um profiler que ele é um gargalo.**
