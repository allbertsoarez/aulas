# DESAFIO PRÁTICO DO MÓDULO 05

## ENUNCIADO DO DESAFIO
Você está construindo o motor de cálculo de um software de simulação científica. O motor precisa processar operações matemáticas de forma segura, lidando com entradas inválidas (como raízes de números negativos ou divisões por zero) sem usar exceções. Você deve usar os recursos do C++17 e C++20 para garantir que o código seja genérico, seguro e performático.

## REQUISITOS OBRIGATÓRIOS
1. **Conceito (C++20):** Crie um `[Concept](https://en.cppreference.com/w/cpp/language/constraints)` chamado `Numero` que restrinja os templates a aceitarem apenas tipos aritméticos (`std::is_arithmetic_v`).
2. **Optional:** Crie uma função template `calcularRaiz` que use o `Concept` criado e retorne um `[std::optional](https://en.cppreference.com/w/cpp/utility/optional)` do tipo de entrada. Se o número for negativo, retorne `std::nullopt`.
3. **Variant:** Crie um tipo `ResultadoOperacao` que seja um `[std::variant](https://en.cppreference.com/w/cpp/utility/variant)` podendo conter um `double` (sucesso) ou um `std::string` (mensagem de erro).
4. **String View:** Crie uma função `registrarOperacao` que receba o nome da operação e o resultado usando `[std::string_view](https://en.cppreference.com/w/cpp/string/basic_string_view)` para o nome, garantindo zero cópias de strings.
5. **Lambda e Visit:** Use uma expressão `[lambda](https://en.cppreference.com/w/cpp/language/lambda)` em conjunto com `[std::visit](https://en.cppreference.com/w/cpp/utility/variant/visit)` para processar e imprimir o `ResultadoOperacao`, tratando o sucesso e o erro de forma elegante.
6. **Constexpr:** Defina uma variável `constexpr` para o valor de $\pi$ e use-a nos cálculos.

## EXEMPLO DE SAÍDA ESPERADA
```text
--- MOTOR DE SIMULAÇÃO CIENTÍFICA ---

Operacao: Raiz de 16.00
Status: Sucesso
Valor calculado: 4.00

Operacao: Raiz de -9.00
Status: Erro
Mensagem: Dominio invalido para raiz quadrada

Operacao: Divisao de 10.00 por 0.00
Status: Erro
Mensagem: Divisao por zero nao definida
```

## DICAS PARA RESOLUÇÃO
- Para o `Concept`, use `#include <concepts>` ou `#include <type_traits>` com `template <typename T> concept Numero = std::is_arithmetic_v<T>;`.
- Para o `std::visit`, a lambda pode usar `auto&& arg` e `std::holds_alternative` (ou sobrecarga de lambda) para verificar se o variante contém `double` ou `std::string`.
- Lembre-se de usar `std::string_view` no parâmetro da função `registrarOperacao(std::string_view nome, const ResultadoOperacao& res)`.
- A função `calcularRaiz` deve converter a entrada para `double` antes de usar `std::sqrt`, ou usar `static_cast<double>(valor)`.
- Não se esqueça de incluir `<iostream>`, `<optional>`, `<variant>`, `<string>`, `<string_view>`, `<cmath>`, `<concepts>` e `<type_traits>`.
