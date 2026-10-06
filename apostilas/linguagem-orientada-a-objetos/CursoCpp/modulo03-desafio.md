# DESAFIO PRÁTICO DO MÓDULO 03

## ENUNCIADO DO DESAFIO
Você foi contratado para desenvolver o núcleo de um software de Geometria Analítica. Seu objetivo é criar um sistema que calcule áreas de diferentes formas geométricas 2D. O sistema deve ser extensível, seguro e utilizar polimorfismo dinâmico para tratar as formas de maneira uniforme, armazenando-as em uma estrutura de dados moderna.

## REQUISITOS OBRIGATÓRIOS
1. Crie uma classe abstrata chamada `FormaGeometrica`. Ela deve ter um método virtual puro `calcularArea() const` e um destruidor virtual padrão.
2. Derive duas classes concretas: `Circulo` e `Retangulo`.
3. A classe `Circulo` deve ser marcada como `[final](https://en.cppreference.com/w/cpp/language/final)`, pois não faz sentido matemático herdar de um círculo específico neste contexto.
4. Utilize estritamente a **Member Initializer List** nos construtores de `Circulo` e `Retangulo` para inicializar suas dimensões.
5. Na função `main`, crie um `[std::vector](https://en.cppreference.com/w/cpp/container/vector)` que armazene ponteiros inteligentes `[std::unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr)` para `FormaGeometrica`.
6. Popule o vetor com pelo menos 2 círculos e 2 retângulos, usando `std::make_unique`.
7. Utilize o `range-based for` para iterar sobre o vetor, chamar `calcularArea()` (demonstrando polimorfismo) e imprimir o resultado.
8. Calcule e imprima a área total da soma de todas as formas.

## EXEMPLO DE SAÍDA ESPERADA
```text
--- SISTEMA DE GEOMETRIA ANALÍTICA ---
Processando formas...
Forma 1: Circulo | Area: 78.54
Forma 2: Retangulo | Area: 50.00
Forma 3: Circulo | Area: 28.27
Forma 4: Retangulo | Area: 24.00
-----------------------------
Area Total do Sistema: 180.81
```

## DICAS PARA RESOLUÇÃO
- Lembre-se da fórmula da área do círculo: $A = \pi \times r^2$. Use `constexpr double PI = 3.14159265...` no topo do arquivo.
- Para o `Retangulo`, a área é $A = base \times altura$.
- O vetor deve ser declarado como `std::vector<std::unique_ptr<FormaGeometrica>> formas;`.
- Para adicionar elementos, use `formas.push_back(std::make_unique<Circulo>(raio));`.
- Ao iterar, use `for (const auto& forma : formas)` para evitar cópias dos ponteiros inteligentes (que são proibidas no `unique_ptr`).
- Para acessar o método, use `forma->calcularArea()`.
- Não se esqueça de incluir `<vector>`, `<memory>`, `<iostream>` e `<iomanip>` para formatar as casas decimais.
