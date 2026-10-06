# MÓDULO 06 - TÓPICOS AVANÇADOS, EXCEÇÕES E CONCURRENCY

Neste módulo, exploramos os limites da performance e da robustez do C++ Moderno. Lidaremos com o tratamento de anomalias matemáticas (exceções), a transferência eficiente de recursos sem cópias (Move Semantics) e a execução paralela de operações independentes (Concurrency). Vamos modelar esses conceitos para garantir que seu código seja tão resiliente quanto um teorema bem demonstrado e tão rápido quanto a computação moderna exige.

## 6.1 - TRATAMENTO DE EXCEÇÕES (TRY, CATCH, THROW)
Na matemática, certas operações possuem singularidades ou domínios restritos (ex: divisão por zero, raiz de negativo). Em C++, as `[exceções](https://en.cppreference.com/w/cpp/language/try_catch)` são o mecanismo formal para sinalizar que uma operação entrou em um estado inválido ou impossível, permitindo que o fluxo de execução seja desviado para um bloco de tratamento.

Lançar uma exceção (`throw`) é análogo a declarar que uma função não está definida para aquele ponto. Capturá-la (`catch`) é o ato de tratar essa singularidade de forma elegante, evitando que o programa colapse (comportamento indefinido).

```cpp
#include <iostream>
#include <stdexcept>
#include <cmath>

// Função que modela uma singularidade em x = 0
double calcularInverso(double x) {
    if (x == 0.0) {
        // Lança uma exceção padrão do C++
        throw std::invalid_argument("Singularidade: Divisao por zero nao definida.");
    }
    return 1.0 / x;
}

int main() {
    try {
        std::cout << "Inverso de 5: " << calcularInverso(5.0) << "\n";
        std::cout << "Inverso de 0: " << calcularInverso(0.0) << "\n"; // Vai lançar exceção
    } 
    catch (const std::invalid_argument& e) {
        // Captura e trata a exceção matematicamente
        std::cerr << "Erro capturado: " << e.what() << "\n";
    }
    catch (const std::exception& e) {
        // Captura qualquer outra exceção padrão
        std::cerr << "Erro inesperado: " << e.what() << "\n";
    }
    
    return 0;
}
```

## 6.2 - MOVE SEMANTICS E STD::MOVE
No C++98, passar um objeto grande para uma função ou retorná-lo exigia uma cópia profunda ($O(N)$). O C++11 introduziu as `[Referências Rvalue](https://en.cppreference.com/w/cpp/language/reference)` (`&&`) e o `[std::move](https://en.cppreference.com/w/cpp/utility/move)`.

**Analogia Matemática:** Imagine que você tem um conjunto finito $A$ com milhões de elementos. Copiar $A$ para $B$ exige criar cada elemento novamente. A Move Semantics permite que você simplesmente transfira a "propriedade" da estrutura de $A$ para $B$ em $O(1)$. Após a transferência, $A$ não é destruído, mas é deixado em um "estado válido, porém não especificado" (matematicamente análogo ao conjunto vazio $\emptyset$).

```cpp
#include <iostream>
#include <vector>
#include <utility>

void processarDados(std::vector<double> dados) {
    std::cout << "Processando " << dados.size() << " elementos.\n";
}

int main() {
    std::vector<double> meuVector(1000000, 3.14); // Vetor gigante
    
    // Sem std::move: O vetor seria COPIADO (lento, O(N))
    // processarDados(meuVector); 
    
    // Com std::move: O vetor é MOVIDO (rápido, O(1))
    processarDados(std::move(meuVector));
    
    // meuVector agora está em um estado válido, mas vazio (ou indefinido)
    std::cout << "Tamanho apos move: " << meuVector.size() << "\n"; // Saída: 0
    
    return 0;
}
```

## 6.3 - INTRODUÇÃO À CONCURRENCY: STD::THREAD, STD::MUTEX E STD::ASYNC
A concorrência permite avaliar funções independentes simultaneamente. Matematicamente, se temos $f(x, y) = g(x) + h(y)$, e $g$ e $h$ não compartilham estado, podemos calculá-las em paralelo.

- **[std::thread](https://en.cppreference.com/w/cpp/thread/thread):** Cria uma thread nativa do sistema operacional.
- **[std::async](https://en.cppreference.com/w/cpp/thread/async) e [std::future](https://en.cppreference.com/w/cpp/thread/future):** Abstrações de alto nível. `std::async` inicia uma tarefa assíncrona e retorna um `future`, que é uma "promessa" de que o valor estará disponível no futuro (análogo a uma variável cujo valor é o limite de uma sequência em $t \to \infty$).

```cpp
#include <iostream>
#include <future>
#include <chrono>

// Função pesada simulada
double calcularIntegralAprox(double inicio, double fim) {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simula processamento
    return (fim - inicio) * 10.0; 
}

int main() {
    // Inicia duas tarefas assíncronas em paralelo
    auto futuro1 = std::async(std::launch::async, calcularIntegralAprox, 0.0, 5.0);
    auto futuro2 = std::async(std::launch::async, calcularIntegralAprox, 5.0, 10.0);
    
    std::cout << "Calculando em paralelo...\n";
    
    // Bloqueia até que os resultados estejam prontos
    double resultado1 = futuro1.get();
    double resultado2 = futuro2.get();
    
    std::cout << "Resultado Total: " << resultado1 + resultado2 << "\n";
    return 0;
}
```

## 6.4 - [O PULO DO GATO] - DATA RACES E COMO EVITÁ-LAS COM RAII E STD::LOCK_GUARD
Quando múltiplas threads acessam o mesmo recurso e pelo menos uma o modifica, ocorre um **Data Race** (Corrida de Dados). O resultado torna-se não-determinístico, quebrando as invariantes do seu programa.

Para proteger seções críticas, usamos um `[std::mutex](https://en.cppreference.com/w/cpp/thread/mutex)`. No C++ Moderno, **nunca** chamamos `mutex.lock()` e `mutex.unlock()` manualmente. Usamos o `[std::lock_guard](https://en.cppreference.com/w/cpp/thread/lock_guard)` (ou o `[std::scoped_lock](https://en.cppreference.com/w/cpp/thread/scoped_lock)` do C++17 para múltiplos mutexes).

**[O PULO DO GATO]:** O `lock_guard` aplica RAII. Ele tranca o mutex no construtor e o destranca no destruidor. Se uma exceção for lançada no meio da seção crítica, o destruidor é chamado na pilha de desempilhamento (stack unwinding), garantindo que o mutex seja liberado e evitando *deadlocks*. É a prova matemática de que sua seção crítica é segura contra exceções!

```cpp
#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::mutex mtx;
int contador_compartilhado = 0;

void incrementar(int id) {
    for (int i = 0; i < 1000; ++i) {
        // std::scoped_lock (C++17) tranca no construtor, destranca no destruidor
        std::scoped_lock lock(mtx); 
        ++contador_compartilhado;
        // Mutex liberado automaticamente aqui, mesmo se houver exceção!
    }
}

int main() {
    std::vector<std::thread> threads;
    
    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(incrementar, i);
    }
    
    for (auto& t : threads) {
        t.join(); // Aguarda todas as threads terminarem
    }
    
    std::cout << "Contador final (deve ser 10000): " << contador_compartilhado << "\n";
    return 0;
}
```
