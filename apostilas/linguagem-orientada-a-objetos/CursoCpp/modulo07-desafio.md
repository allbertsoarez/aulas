# DESAFIO FINAL INTEGRADOR DO CURSO

## ENUNCIADO DO DESAFIO
Você foi contratado como Arquiteto de Software para desenvolver o núcleo de um **Sistema de Gestão Acadêmica Universitária**. O sistema deve gerenciar alunos, disciplinas e notas, utilizando rigorosamente todos os conceitos de C++ Moderno aprendidos ao longo do curso. O código deve ser seguro contra vazamentos de memória, imune a estados inválidos e altamente performático.

## REQUISITOS OBRIGATÓRIOS
1. **Modelagem OOP e Smart Pointers:**
   - Crie uma classe `Aluno` (com matrícula, nome e um `std::vector` de notas).
   - Crie uma classe `Disciplina` (com código, nome e um `std::map` que associa a matrícula do aluno ao seu objeto `Aluno`).
   - O sistema deve armazenar as disciplinas usando `[std::unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr)`.
2. **C++17 e Segurança de Tipos:**
   - Utilize `[std::string_view](https://en.cppreference.com/w/cpp/string/basic_string_view)` em todos os métodos que apenas leem nomes ou códigos, garantindo zero cópias.
   - Utilize `[std::optional](https://en.cppreference.com/w/cpp/utility/optional)` no método `buscarAluno(const std::string& matricula)` da classe `Disciplina`. Se o aluno não existir, retorne `std::nullopt`.
   - Utilize `constexpr` para definir a constante de `MEDIA_APROVACAO` (ex: 7.0) e `PESO_PROVA` (ex: 2.0).
3. **STL e Algoritmos:**
   - Ao calcular a média de um aluno, utilize `[std::accumulate](https://en.cppreference.com/w/cpp/numeric/accumulate)` ou um `range-based for`.
   - Utilize `[std::sort](https://en.cppreference.com/w/cpp/algorithm/sort)` para ordenar as notas do aluno antes de exibi-las.
4. **Tratamento de Exceções:**
   - Lance uma `[std::invalid_argument](https://en.cppreference.com/w/cpp/error/invalid_argument)` se uma nota inserida for menor que 0.0 ou maior que 10.0.
   - Capture essa exceção na `main` e exiba uma mensagem de erro elegante, sem quebrar o programa.
5. **Formatação:**
   - Use `<iomanip>` para formatar as médias com exatamente 2 casas decimais.

## EXEMPLO DE SAÍDA ESPERADA
```text
--- SISTEMA DE GESTÃO ACADÊMICA ---

Criando disciplina de Calculo I (MAT101)...
Adicionando aluno: Carl Gauss (Mat: 2023001)
Adicionando aluno: Ada Lovelace (Mat: 2023002)

Lancando notas para Carl Gauss...
Nota 1: 8.5
Nota 2: 9.0
Nota invalida (-1.0) ignorada gracas ao tratamento de excecao!
Nota 3: 7.5

Lancando notas para Ada Lovelace...
Nota 1: 10.0
Nota 2: 9.5
Nota 3: 10.0

--- RELATORIO FINAL ---
Disciplina: Calculo I (MAT101)

Aluno: Carl Gauss
Notas (ordenadas): 7.50 8.50 9.00
Media Final: 8.33
Status: Aprovado

Aluno: Ada Lovelace
Notas (ordenadas): 9.50 10.00 10.00
Media Final: 9.83
Status: Aprovado

Busca opcional:
Aluno 99999 encontrado? Nao (nullopt)
```

## DICAS PARA RESOLUÇÃO
- A classe `Aluno` deve ter um método `adicionarNota(double nota)` que internamente faz o `try-catch` ou deixa a `main` capturar. A validação `if (nota < 0 || nota > 10)` deve lançar a exceção.
- O `std::map` da `Disciplina` pode ser declarado como `std::map<std::string, std::unique_ptr<Aluno>> alunos;`.
- Para o `std::optional`, a assinatura do método de busca será: `std::optional<Aluno*> buscarAluno(std::string_view matricula) const;` (retornando o ponteiro bruto observável, ou você pode usar `std::reference_wrapper`, mas o ponteiro observável é mais simples para iniciantes).
- Lembre-se de usar `std::fixed` e `std::setprecision(2)` ao imprimir as médias.
- Este desafio integra OOP, Memória (Smart Pointers), STL (Map, Vector, Sort), Modernidade (string_view, optional, constexpr) e Robustez (Exceções). É o teste definitivo do seu novo conhecimento!
