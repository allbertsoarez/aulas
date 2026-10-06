# MÓDULO 07 - MINI CURSO, CHEAT SHEET E ESTRATÉGIA DE BACKUP

Chegamos ao ápice da nossa jornada. Neste módulo final, não introduziremos sintaxe nova, mas sim consolidaremos todo o conhecimento em um "Cheat Sheet" axiomático. Além disso, abordaremos a engenharia de software prática: como compilar projetos reais com CMake e como versionar seu código com Git, garantindo que seu trabalho esteja sempre seguro e colaborativo.

## 7.1 - O CHEAT SHEET DO C++ MODERNO (RESUMO AXIOMÁTICO)
Para o professor de matemática, aqui está o mapeamento direto entre os conceitos matemáticos e as ferramentas do C++ Moderno que você deve manter na mesa:

- **Conjuntos e Unicidade:** `[std::set](https://en.cppreference.com/w/cpp/container/set)` e `[std::unordered_set](https://en.cppreference.com/w/cpp/container/unordered_set)`.
- **Funções e Mapeamentos:** `[std::map](https://en.cppreference.com/w/cpp/container/map)` (funções ordenadas) e `[std::unordered_map](https://en.cppreference.com/w/cpp/container/unordered_map)` (tabelas hash).
- **Sequências e Vetores:** `[std::vector](https://en.cppreference.com/w/cpp/container/vector)` (espaços vetoriais dinâmicos) e `[std::array](https://en.cppreference.com/w/cpp/container/array)` (tuplas de tamanho fixo).
- **Axiomas e Constantes:** `[constexpr](https://en.cppreference.com/w/cpp/language/constexpr)` (avaliação em tempo de compilação).
- **Funções Parciais (Valores Nulos):** `[std::optional](https://en.cppreference.com/w/cpp/utility/optional)`.
- **União Disjunta (Tipos Múltiplos):** `[std::variant](https://en.cppreference.com/w/cpp/utility/variant)`.
- **Propriedade Exclusiva (Sem Cópias):** `[std::unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr)`.
- **Propriedade Compartilhada:** `[std::shared_ptr](https://en.cppreference.com/w/cpp/memory/shared_ptr)`.
- **Domínios Restritos (Templates):** `[Concepts](https://en.cppreference.com/w/cpp/language/constraints)` (C++20).

## 7.2 - BOAS PRÁTICAS DE COMPILAÇÃO E CMAKE
No C++ moderno, não compilamos arquivos soltos na linha de comando em projetos reais. Usamos o `[CMake](https://cmake.org/)`, que é o padrão da indústria. Pense no CMake como a definição do "Universo" do seu projeto: ele diz ao compilador quais arquivos existem, quais dependências são necessárias e quais regras (padrões C++) devem ser aplicadas.

Um `CMakeLists.txt` mínimo e moderno para o seu curso deve parecer com isto:

```cmake
cmake_minimum_required(VERSION 3.15)
project(CursoCppModerno LANGUAGES CXX)

# Exige C++20 (ou C++17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Adiciona o executável
add_executable(Modulo01 src/modulo01.cpp)
add_executable(DesafioFinal src/desafio_final.cpp)
```

## 7.3 - ESTRATÉGIA DE BACKUP E VERSIONAMENTO COM GIT
O código não versionado é como uma prova matemática feita a lápis sem cópia: um único erro pode apagar horas de trabalho. O `[Git](https://git-scm.com/)` é o sistema de controle de versão que trata cada estado do seu código como um "snapshot" imutável (uma constante).

- **Commits Atômicos:** Cada commit deve representar uma mudança lógica completa (análogo a um passo bem definido em uma prova).
- **Branches (Ramos):** Use branches para experimentar novas features sem quebrar o código principal (`main`). Matematicamente, é como criar um espaço de trabalho auxiliar para testar uma hipótese antes de incorporá-la ao teorema principal.
- **Repositórios Remotos:** Sempre mantenha um backup no GitHub ou GitLab. O comando `git push` é a sua apólice de seguro contra falhas de hardware.

## 7.4 - [O PULO DO GATO] - O MINDSET DO ENGENHEIRO DE SOFTWARE MATEMÁTICO
**[O PULO DO GATO]:** A maior diferença entre um programador júnior e um Engenheiro de Software Sênior não é a quantidade de sintaxe que ele memoriza, mas a **gestão da complexidade**. 

Na matemática, você não prova um teorema complexo misturando álgebra, geometria e cálculo em uma única equação de 50 linhas. Você cria lemas, divide em casos e usa abstrações. No C++, faça o mesmo:
1. **Separe as responsabilidades:** Uma classe faz uma coisa e faz bem (Princípio da Responsabilidade Única).
2. **Prefira a imutabilidade:** Use `const` e `constexpr` sempre que possível. Dados imutáveis são matematicamente previsíveis; dados mutáveis são fontes de bugs.
3. **Confie no Compilador:** O C++ tem um dos sistemas de tipos mais rigorosos do mundo. Se você usar `auto`, `constexpr`, `std::optional` e `Concepts`, o compilador será seu co-autor, pegando erros de lógica antes mesmo do programa rodar.

Parabéns por chegar até aqui! Você agora possui as ferramentas para escrever código C++ que não apenas funciona, mas que é elegante, seguro e matematicamente robusto.
