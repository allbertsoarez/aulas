# DESAFIO PRÁTICO DO MÓDULO 06

## ENUNCIADO DO DESAFIO
Você foi designado para criar o núcleo de processamento de um simulador de Monte Carlo para cálculo de áreas sob curvas (integrais). O sistema deve dividir o intervalo de integração em $N$ partes, processar cada parte em uma thread separada usando concorrência, proteger um log de operações com Mutex, e tratar exceções caso o intervalo seja inválido. Você deve usar Move Semantics para retornar os resultados das threads de forma eficiente.

## REQUISITOS OBRIGATÓRIOS
1. **Tratamento de Exceções:** Crie uma função `validarIntervalo(double a, double b)` que lance uma `[std::invalid_argument](https://en.cppreference.com/w/cpp/error/invalid_argument)` se $a \ge b$.
2. **Concorrência com std::async:** Crie uma função `calcularAreaParcial(double a, double b)` que simule o cálculo da área (ex: retornar $(b - a) \times \text{fator}$). Inicie 4 tarefas usando `[std::async](https://en.cppreference.com/w/cpp/thread/async)` e armazene os retornos em um `std::vector` de `[std::future](https://en.cppreference.com/w/cpp/thread/future)`.
3. **Proteção com Mutex:** Crie um `[std::mutex](https://en.cppreference.com/w/cpp/thread/mutex)` global. Dentro de uma função de log, use `[std::scoped_lock](https://en.cppreference.com/w/cpp/thread/scoped_lock)` (ou `std::lock_guard`) para garantir que as mensagens de "Thread X calculou Y" não se sobreponham no console.
4. **Move Semantics:** A função `calcularAreaParcial` deve retornar um `std::vector<double>` com os resultados parciais. Na função `main`, ao receber o resultado do `future.get()`, utilize `[std::move](https://en.cppreference.com/w/cpp/utility/move)` para inserir os dados no vetor final de resultados, evitando cópias desnecessárias.
5. **Tratamento no Main:** Envolva a execução das threads em um bloco `try-catch` para capturar a exceção lançada por `validarIntervalo`.

## EXEMPLO DE SAÍDA ESPERADA
```text
--- SIMULADOR DE MONTE CARLO PARALELO ---
Iniciando validacao de intervalos...
Intervalos validos. Iniciando threads...

[Log] Thread 1 calculou area parcial: 12.50
[Log] Thread 0 calculou area parcial: 10.00
[Log] Thread 3 calculou area parcial: 17.50
[Log] Thread 2 calculou area parcial: 15.00

Processamento concluido.
Area total calculada: 55.00
```
*(Nota: A ordem dos logs das threads pode variar, mas o Mutex garante que cada linha seja impressa completamente antes da próxima).*

## DICAS PARA RESOLUÇÃO
- Para o `std::async`, use `std::async(std::launch::async, funcao, args...)`.
- Para o `std::scoped_lock`, a sintaxe é `std::scoped_lock lock(mtx);` dentro do escopo da função de log.
- Lembre-se de incluir `<iostream>`, `<vector>`, `<thread>`, `<future>`, `<mutex>`, `<stdexcept>` e `<utility>`.
- Ao mover o vetor retornado pelo `future.get()`, faça algo como: `auto resultado = futuro.get(); vetor_final.insert(vetor_final.end(), std::make_move_iterator(resultado.begin()), std::make_move_iterator(resultado.end()));` ou simplesmente mova o vetor inteiro se a estrutura permitir.
- Teste o bloco `try-catch` passando um intervalo inválido (ex: `a = 10, b = 5`) para garantir que a exceção é capturada e o programa não aborta.
