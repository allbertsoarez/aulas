# DESAFIO PRÁTICO DO MÓDULO 02

## ENUNCIADO DO DESAFIO
Neste desafio, você atuará como um Engenheiro de Software desenvolvendo o núcleo de uma biblioteca matemática. Você deverá implementar uma estrutura que representa um **Polinômio Dinâmico**, onde os coeficientes são alocados na Heap. O objetivo é gerenciar essa memória dinâmica utilizando estritamente os conceitos de Smart Pointers e RAII, sem utilizar a palavra-chave `delete` em nenhum momento.

## REQUISITOS OBRIGATÓRIOS
1. Crie uma classe chamada `Polinomio`.
2. A classe deve possuir um membro privado que seja um `[std::unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr)` para um array dinâmico de `double` (use `std::make_unique<double[]>(tamanho)`).
3. Implemente um construtor que receba o grau do polinômio e aloque o array de coeficientes.
4. Implemente um método `setCoeficiente(int indice, double valor)` e um método `avaliar(double x)` que calcula o resultado do polinômio para um dado $x$ (use o método de Horner para otimização, se possível).
5. **Teste de Transferência de Propriedade:** Na sua função `main`, crie um polinômio, preencha seus coeficientes e, em seguida, transfira a propriedade deste objeto para uma segunda variável usando `[std::move](https://en.cppreference.com/w/cpp/utility/move)`.
6. **Teste de Compartilhamento:** Crie uma função separada que receba um `[std::shared_ptr](https://en.cppreference.com/w/cpp/memory/shared_ptr)` para uma constante matemática (ex: o número de Euler $e \approx 2.71828$) e imprima seu valor e a contagem de referências (`use_count()`) antes e depois da chamada.
7. **Regra do Zero:** A sua classe `Polinomio` NÃO deve ter um destruidor explícito (`~Polinomio()`). Confie no RAII do `unique_ptr`.

## EXEMPLO DE SAÍDA ESPERADA
```text
--- SIMULADOR DE POLINÔMIOS E MEMÓRIA ---
Criando Polinômio de grau 2...
Definindo coeficientes: 2x^2 + 3x + 1
Avaliando P(5.0): 66.00

Transferindo propriedade do polinômio...
Polinômio original ainda existe? 0 (Falso/Nulo)
Polinômio destino avalia P(5.0): 66.00

--- TESTE DE SHARED_PTR ---
Contagem de referências dentro da função: 2
Valor da constante: 2.718
Contagem de referências na main: 1
```

## DICAS PARA RESOLUÇÃO
- Para alocar um array com `unique_ptr`, a sintaxe é `auto coefs = std::make_unique<double[]>(tamanho);`.
- Lembre-se que arrays alocados com `make_unique<T[]>` usam colchetes `[]` para acessar os elementos (ex: `coefs[i]`).
- O método de Horner para avaliar $P(x) = a_n x^n + a_{n-1} x^{n-1} + ... + a_0$ é computacionalmente superior e pode ser escrito como: $P(x) = (...(a_n x + a_{n-1})x + ...)x + a_0$.
- Use `<memory>` para os Smart Pointers e `<cmath>` se precisar de funções matemáticas auxiliares.
- Reflita sobre a **Regra do Zero**: note como o compilador limpa a memória do array perfeitamente sem você escrever uma única linha de código de limpeza!
