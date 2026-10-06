# MÓDULO 03 - PROGRAMAÇÃO ORIENTADA A OBJETOS COM RIGOR

Neste módulo, elevamos o nível de abstração. Se os módulos anteriores lidaram com elementos e operações básicas, a Programação Orientada a Objetos (OOP) em C++ nos permite definir estruturas matemáticas complexas. Vamos modelar o código usando a teoria dos conjuntos, mapeamentos e invariantes, garantindo que nossos objetos sejam tão robustos quanto teoremas bem provados.

## 3.1 - CLASS E STRUCT: ENCAPSULAMENTO E MODIFICADORES DE ACESSO
Na matemática, um conjunto não é apenas uma coleção de elementos; ele é definido junto com suas operações válidas (um grupo, um anel, um espaço vetorial). Em C++, uma `[class](https://en.cppreference.com/w/cpp/language/class)` ou `[struct](https://en.cppreference.com/w/cpp/language/struct)` faz exatamente isso: agrupa dados (estado) e funções (comportamento).

A diferença fundamental entre as duas no C++ é puramente a visibilidade padrão: em `class`, tudo é privado por padrão; em `struct`, tudo é público. 
- **Encapsulamento:** É o ato de proteger os axiomas internos do seu objeto. Ao tornar os dados `private` e expor apenas métodos `public`, você garante que o objeto nunca entre em um estado inválido (análogo a manter um invariante de classe).

```cpp
#include <iostream>

// Usamos struct para DTOs (Data Transfer Objects) ou structs de dados simples
struct Ponto2D {
    double x;
    double y;
};

// Usamos class para entidades com invariantes a proteger
class Circulo {
private: // Axiomas internos protegidos
    Ponto2D centro;
    double raio;

public: // Interface pública (Morfismos válidos)
    Circulo(Ponto2D c, double r) : centro(c), raio(r) {
        if (raio < 0) throw std::invalid_argument("Raio não pode ser negativo");
    }
    
    double getArea() const { return 3.14159 * raio * raio; }
};
```

## 3.2 - CONSTRUTORES, DESTRUTORES E MEMBER INITIALIZER LIST
O construtor é o momento em que os axiomas do objeto são estabelecidos. Uma vez construído, o objeto deve estar em um estado matematicamente válido.

A **Member Initializer List** é a forma correta e matematicamente elegante de inicializar membros. Em vez de construir o objeto com um valor padrão e depois sobrescrevê-lo no corpo do construtor (o que é ineficiente e logicamente inconsistente), a Initializer List constrói o membro diretamente com o valor final. É análogo a definir as condições iniciais de uma equação diferencial antes de começar a resolvê-la.

```cpp
class Vetor3D {
private:
    double x, y, z;

public:
    // ERRADO (Ineficiente): Constrói com 0, depois atribui.
    // Vetor3D(double a, double b, double c) { x = a; y = b; z = c; }

    // CERTO (Member Initializer List): Construção direta.
    Vetor3D(double a, double b, double c) : x(a), y(b), z(c) {}
};
```

## 3.3 - HERANÇA E POLIMORFISMO: VIRTUAL, OVERRIDE E FINAL
A herança em C++ modela a relação de subconjuntos. Se `Cachorro` herda de `Animal`, então o conjunto `Cachorro` $\subset$ `Animal`.

O polimorfismo permite que uma função trate qualquer elemento de um conjunto universal, executando a implementação específica do subconjunto ao qual o elemento pertence. Para que isso funcione em tempo de execução (polimorfismo dinâmico), a função base deve ser marcada como `[virtual](https://en.cppreference.com/w/cpp/language/virtual)`.

No C++ Moderno, usamos `[override](https://en.cppreference.com/w/cpp/language/override)` para garantir que a função derivada realmente sobrescreve uma função virtual da base (evitando erros de digitação) e `[final](https://en.cppreference.com/w/cpp/language/final)` para proibir novas heranças, fechando o conjunto.

```cpp
#include <iostream>
#include <string>

class Forma {
public:
    virtual void desenhar() const {
        std::cout << "Desenhando forma genérica.\n";
    }
    virtual ~Forma() = default; // Destruidor virtual é OBRIGATÓRIO em classes base
};

class Quadrado final : public Forma { // 'final' impede herdar de Quadrado
public:
    void desenhar() const override { // 'override' garante que sobrescreve Forma::desenhar
        std::cout << "Desenhando Quadrado.\n";
    }
};
```

## 3.4 - CLASSES ABSTRATAS E INTERFACES
Uma classe abstrata é aquela que não pode ser instanciada. Em termos de teoria dos conjuntos, é uma definição universal incompleta; ela só "existe" materializada quando um subconjunto concreto a implementa.

Em C++, tornamos uma classe abstrata declarando pelo menos uma função virtual pura (uma função sem implementação, terminada em `= 0`). Isso atua como um contrato matemático: qualquer subconjunto que queira pertencer a este universo *deve* prover a implementação daquela operação.

```cpp
class OperacaoMatematica {
public:
    // Função virtual pura (= 0) torna a classe abstrata
    virtual double executar(double a, double b) const = 0;
    virtual ~OperacaoMatematica() = default;
};

class Soma : public OperacaoMatematica {
public:
    double executar(double a, double b) const override {
        return a + b;
    }
};
```

## 3.5 - [O PULO DO GATO] - O CUSTO OCULTO DO POLIMORFISMO
Quando você usa a palavra-chave `virtual`, o compilador cria uma tabela virtual (**vtable**) para a classe. Cada objeto ganha um ponteiro oculto (**vptr**) que aponta para essa tabela. 

**A Matemática do Custo:** O polimorfismo dinâmico introduz uma indireção. Chamar `obj.metodo()` não é mais um salto direto de memória; é uma leitura do `vptr`, uma busca na `vtable`, e só então o salto. Além disso, o objeto fica maior (pelo tamanho de um ponteiro) e perde a localidade de referência, o que pode causar *cache misses* na CPU.

**[O PULO DO GATO]:** Use polimorfismo dinâmico (`virtual`) apenas quando precisar de heterogeneidade em tempo de execução (ex: um `std::vector<Forma*>` com círculos e quadrados misturados). Se você sabe os tipos em tempo de compilação, use **Polimorfismo Estático** via Templates (Conceitos do C++20) ou CRTP. Isso elimina o custo da vtable, mantendo a abstração matemática com custo zero de *runtime*!
