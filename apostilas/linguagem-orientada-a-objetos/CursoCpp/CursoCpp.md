# SUMÁRIO DO CURSO DE C++ MODERNO

Bem-vindo ao curso completo de C++ Moderno. Este sumário serve como mapa mental do seu aprendizado, estruturado de forma axiomática e progressiva.

## LINKS PARA OS MÓDULOS
- [FUNDAMENTOS E MODERNIDADE INICIAL](modulo01.md)
- [GERENCIAMENTO DE MEMÓRIA E PONTEIROS INTELIGENTES](modulo02.md)
- [PROGRAMAÇÃO ORIENTADA A OBJETOS COM RIGOR](modulo03.md)
- [A BIBLIOTECA PADRÃO (STL) E PROGRAMAÇÃO GENÉRICA](modulo04.md)
- [C++ MODERNO AVANÇADO (C++11/14/17/20)](modulo05.md)
- [TÓPICOS AVANÇADOS, EXCEÇÕES E CONCURRENCY](modulo06.md)
- [DESAFIOS PRÁTICOS, MINI CURSO E ESTRATÉGIA DE BACKUP](modulo07.md)

## LINKS PARA DOCUMENTAÇÃO OFICIAL
- [CppReference (Documentação Oficial em Inglês)](https://en.cppreference.com/w/)
- [Guia de Estilo do C++ (Google)](https://google.github.io/styleguide/cppguide.html)


---

# DESAFIO PRÁTICO DO MÓDULO 01

## ENUNCIADO DO DESAFIO
Desenvolva um programa que calcule a média ponderada de um aluno com base em três notas e seus respectivos pesos. O programa deve utilizar recursos do C++ Moderno aprendidos neste módulo.

## REQUISITOS OBRIGATÓRIOS
1. Utilize `constexpr` para definir os pesos das avaliações (ex: Peso 1 = 2, Peso 2 = 3, Peso 3 = 5).
2. Utilize `auto` para declarar as variáveis de notas e resultados, deixando o compilador inferir os tipos.
3. Crie uma função separada para o cálculo da média, utilizando passagem por referência constante (`const auto&` ou `const double&`) para os parâmetros, evitando cópias.
4. Utilize `[std::cout](https://en.cppreference.com/w/cpp/io/cout)` formatado (inclua `<iomanip>` e use `std::fixed` e `std::setprecision`) para exibir a média com exatamente 2 casas decimais.
5. O código deve ser compilado com um padrão mínimo de C++11 (preferencialmente C++17 ou C++20).

## EXEMPLO DE SAÍDA
```text
--- CALCULADORA DE MÉDIA PONDERADA ---
Digite a nota 1: 8.5
Digite a nota 2: 7.0
Digite a nota 3: 9.0
A média final do aluno é: 8.40
```

## DICAS PARA RESOLUÇÃO
- A fórmula da média ponderada é: $M = \frac{(N_1 \times P_1) + (N_2 \times P_2) + (N_3 \times P_3)}{P_1 + P_2 + P_3}$
- Lembre-se de incluir `<iostream>` para entrada/saída e `<iomanip>` para a formatação de precisão.
- Use `[O PULO DO GATO]` do tópico 1.6 para definir os pesos como `constexpr`.
- Na função de cálculo, a assinatura pode ser algo como: `auto calcularMediaPonderada(const auto& n1, const auto& n2, const auto& n3) -> auto` (usando sintaxe de trailing return type do C++11/14, ou simplesmente `double`).
