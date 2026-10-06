# DESAFIO PRÁTICO DO MÓDULO 04

## ENUNCIADO DO DESAFIO
Você foi designado para criar o módulo de análise de dados de um sistema universitário. Seu objetivo é processar as notas de uma turma, identificar alunos aprovados, calcular estatísticas e mapear disciplinas. Você deve utilizar estritamente os contêineres e algoritmos da STL para garantir um código genérico, limpo e performático.

## REQUISITOS OBRIGATÓRIOS
1. **Mapeamento de Disciplinas:** Crie um `[std::map](https://en.cppreference.com/w/cpp/container/map)` onde a chave é o código da disciplina (ex: `std::string` "MAT101") e o valor é o nome da disciplina (ex: "Cálculo I").
2. **Conjunto de Alunos Destaque:** Crie um `[std::set](https://en.cppreference.com/w/cpp/container/set)` para armazenar as matrículas (int) dos alunos que tiraram nota máxima. O set garantirá que não haja duplicatas caso um aluno tenha nota máxima em mais de uma disciplina.
3. **Processamento de Notas:** Crie um `[std::vector](https://en.cppreference.com/w/cpp/container/vector)` com as notas de uma prova (ex: `double`).
4. **Algoritmos da STL:**
   - Use `[std::sort](https://en.cppreference.com/w/cpp/algorithm/sort)` para ordenar as notas.
   - Use `[std::transform](https://en.cppreference.com/w/cpp/algorithm/transform)` com uma *Lambda* para converter todas as notas de 0-10 para uma escala de 0-100.
   - Use `[std::find_if](https://en.cppreference.com/w/cpp/algorithm/find_if)` para encontrar a primeira nota na escala 0-100 que seja maior ou igual a 60 (nota de corte).
5. **Template:** Crie uma função template `calcularMedia` que aceite qualquer contêiner sequencial (via iteradores `begin()` e `end()`) e retorne a média dos elementos usando `std::accumulate`.
6. Utilize `range-based for` para imprimir os resultados formatados.

## EXEMPLO DE SAÍDA ESPERADA
```text
--- SISTEMA DE ANÁLISE ACADÊMICA ---

Disciplinas Mapeadas:
FIS101 -> Fisica I
MAT101 -> Calculo I
QUI101 -> Quimica I

Processando notas da turma...
Notas originais (ordenadas): 4.5 5.0 6.2 7.8 9.0
Notas na escala 0-100: 45 50 62 78 90

Primeira nota acima da media de corte (60): 62
Alunos com nota maxima (100): Nao houve nesta turma.

Media da turma (escala 0-100): 65.00
```

## DICAS PARA RESOLUÇÃO
- Para o `std::transform`, a lambda pode ser: `[](double nota) { return nota * 10.0; }`. Lembre-se de mudar o tipo do vector para `int` ou `double` conforme a escala.
- Para o `std::find_if`, a lambda de busca seria: `[](int nota) { return nota >= 60; }`.
- A função template `calcularMedia` pode ter a assinatura: `template <typename Container> double calcularMedia(const Container& c)`.
- Não se esqueça de incluir as bibliotecas: `<iostream>`, `<vector>`, `<map>`, `<set>`, `<algorithm>`, `<numeric>` e `<string>`.
- Use `std::fixed` e `std::setprecision` do `<iomanip>` para formatar a média final.
