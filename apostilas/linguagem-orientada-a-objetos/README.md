<div align="center">
  <br><br>
  <h1>🧬 APOSTILA DE LINGUAGEM ORIENTADA A OBJETOS</h1>
  <h2>Paradigma, Pilares e Implementação em C++ e Python</h2>
  <br>
  <p><strong>Disciplina:</strong> Linguagem Orientada a Objetos</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2024</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

### Módulo A: Conceitos e C++
1. [Introdução à Orientação a Objetos](#1-introdução-à-orientação-a-objetos)
2. [Classes e Objetos em C++](#2-classes-e-objetos-em-c)
3. [Encapsulamento em C++](#3-encapsulamento-em-c)
4. [Herança em C++](#4-herança-em-c)
5. [Polimorfismo em C++](#5-polimorfismo-em-c)
6. [Construtores e Destrutores em C++](#6-construtores-e-destrutores-em-c)

### Módulo B: POO em Python
7. [Classes e Objetos em Python](#7-classes-e-objetos-em-python)
8. [Encapsulamento em Python](#8-encapsulamento-em-python)
9. [Herança em Python](#9-herança-em-python)
10. [Polimorfismo em Python](#10-polimorfismo-em-python)
11. [Comparação C++ vs Python (POO)](#11-comparação-c-vs-python-poo)

### Exercícios
12. [Exercícios Práticos](#12-exercícios-práticos)
13. [Referências Bibliográficas](#13-referências-bibliográficas)

---

## 1. Introdução à Orientação a Objetos

### 1.1 O Paradigma Orientado a Objetos (POO)
Enquanto a programação estruturada (C) foca em **funções e lógica sequencial**, a POO foca na **modelagem do mundo real** através de objetos que interagem entre si.

### 1.2 Os 4 Pilares da POO
1. **Encapsulamento:** Esconder os detalhes internos e expor apenas o necessário.
2. **Herança:** Reutilizar código criando classes "filhas" a partir de classes "pais".
3. **Polimorfismo:** Um mesmo método com comportamentos diferentes dependendo do objeto.
4. **Abstração:** Focar nas características essenciais, ignorando detalhes irrelevantes.

---

## 2. Classes e Objetos em C++

### 2.1 Sintaxe
```cpp
class Pessoa {
public:
    string nome;
    int idade;

    void apresentar() {
        cout << "Olá, sou " << nome << endl;
    }
};

int main() {
    Pessoa p1;
    p1.nome = "Ana";
    p1.idade = 20;
    p1.apresentar();
}
```

> 💻 **Prática:** Veja classes e objetos em [`classe_objeto.cpp`](../../codigo-fonte/c++/classe_objeto.cpp).

---

## 3. Encapsulamento em C++

Em C++, usamos `private`, `public` e `protected` para controlar o acesso.

```cpp
class ContaBancaria {
private:
    double saldo;
public:
    void depositar(double valor) {
        if (valor > 0) saldo += valor;
    }
    double getSaldo() { return saldo; }
};
```

> 💻 **Prática:** Veja encapsulamento em [`encapsulamento.cpp`](../../codigo-fonte/c++/encapsulamento.cpp).

---

## 4. Herança em C++

```cpp
class Animal {
public:
    void comer() { cout << "Comendo..." << endl; }
};

class Cachorro : public Animal {
public:
    void latir() { cout << "Au au!" << endl; }
};
```

> 💻 **Prática:** Veja herança em [`heranca.cpp`](../../codigo-fonte/c++/heranca.cpp).

---

## 5. Polimorfismo em C++

Usa **funções virtuais** e a palavra-chave `override`.

```cpp
class Forma {
public:
    virtual void calcularArea() = 0; // Função virtual pura (classe abstrata)
};

class Retangulo : public Forma {
public:
    void calcularArea() override { cout << "Area = b * h" << endl; }
};
```

> 💻 **Prática:** Veja polimorfismo em [`polimorfismo.cpp`](../../codigo-fonte/c++/polimorfismo.cpp).

---

## 6. Construtores e Destrutores em C++

```cpp
class Livro {
public:
    Livro(string t) { cout << "Criado: " << t << endl; }  // Construtor
    ~Livro() { cout << "Destruído." << endl; }             // Destrutor
};
```

> 💻 **Prática:** Veja o ciclo de vida em [`construtor_destrutor.cpp`](../../codigo-fonte/c++/construtor_destrutor.cpp).

---

## 7. Classes e Objetos em Python

Python torna a POO **muito mais simples**. Não há `public/private` explícito, nem necessidade de declarar tipos.

```python
class Pessoa:
    def __init__(self, nome, idade):  # Construtor (equivalente ao construtor do C++)
        self.nome = nome
        self.idade = idade

    def apresentar(self):
        print(f"Olá, sou {self.nome}")

p1 = Pessoa("Ana", 20)  # Criando o objeto (sem "new"!)
p1.apresentar()
```

> 💻 **Prática:** Veja classes em Python no arquivo [`funcoes.py`](../../codigo-fonte/python/funcoes.py) e [`listas_dicionarios.py`](../../codigo-fonte/python/listas_dicionarios.py).

---

## 8. Encapsulamento em Python

Python usa uma **convenção** (não imposição): prefixo `_` para "protegido" e `__` para "privado".

```python
class ContaBancaria:
    def __init__(self):
        self.__saldo = 0  # "__" indica privado (name mangling)

    def depositar(self, valor):
        if valor > 0:
            self.__saldo += valor

    @property
    def saldo(self):       # Getter usando decorator
        return self.__saldo
```

---

## 9. Herança em Python

A sintaxe é muito mais limpa que em C++:

```python
class Animal:
    def comer(self):
        print("Comendo...")

class Cachorro(Animal):    # Herança entre parênteses (simples!)
    def latir(self):
        print("Au au!")

meu_cao = Cachorro()
meu_cao.comer()  # Herdado de Animal
meu_cao.latir()  # Próprio de Cachorro
```

---

## 10. Polimorfismo em Python

Python é **dinamicamente tipado**, então o polimorfismo é natural (Duck Typing):

```python
class Retangulo:
    def calcular_area(self):
        return 5 * 10

class Circulo:
    def calcular_area(self):
        return 3.14 * 3 ** 2

# Polimorfismo: não importa o tipo, só importa que tem o método!
formas = [Retangulo(), Circulo()]
for forma in formas:
    print(forma.calcular_area())  # Chama o método correto automaticamente
```

---

## 11. Comparação C++ vs Python (POO)

| Conceito | C++ | Python |
| :--- | :--- | :--- |
| Declaração de classe | `class Nome { };` | `class Nome:` |
| Construtor | `Nome() { }` | `def __init__(self):` |
| Destrutor | `~Nome() { }` | `def __del__(self):` (raro) |
| Atributos privados | `private: int x;` | `self.__x` (convenção) |
| Herança | `class Filha : public Pai` | `class Filha(Pai):` |
| Método virtual | `virtual void f() = 0;` | Não precisa (Duck Typing) |
| Criação de objeto | `Pessoa p;` ou `new Pessoa()` | `p = Pessoa()` |
| `this` / `self` | `this->nome` (implícito) | `self.nome` (explícito) |

---

## 12. Exercícios Práticos

| # | Exercício | Linguagem | Dificuldade |
| :---: | :--- | :---: | :---: |
| 1 | Crie uma classe `Aluno` com `nome` e `notas`. Crie métodos para adicionar notas e calcular a média. | C++ | ⭐ |
| 2 | Refatore a classe `Aluno` para encapsular os atributos (notas entre 0 e 10). | C++ | ⭐⭐ |
| 3 | Crie a mesma classe `Aluno` em Python. Compare o número de linhas com C++. | Python | ⭐ |
| 4 | Crie uma classe `Funcionario` e uma classe `Gerente` que herda de `Funcionario`. | C++ | ⭐⭐ |
| 5 | Crie uma classe abstrata `Veiculo` com método virtual `mover()`. Implemente `Carro` e `Aviao`. | C++ | ⭐⭐⭐ |
| 6 | Recrie a hierarquia `Veiculo → Carro → Aviao` em Python usando Duck Typing. | Python | ⭐⭐ |

> 💻 **Prática:** Os códigos C++ estão na [Pasta de C++](../../codigo-fonte/c++/README.md) e os de Python na [Pasta de Python](../../codigo-fonte/python/README.md).

---

## 13. Referências Bibliográficas

- SCHILDT, Herbert. **C++: A Referência Completa**. Rio de Janeiro: Alta Books, 2013.
- MENEZES, Nilo Ney Cortes. **Introdução à Programação com Python**. São Paulo: Novatec, 2019.
- DOWNEY, Allen B. **Pense em Python**. São Paulo: Novatec, 2016.
- BOOCH, Grady. **UML - Guia do Usuário**. Rio de Janeiro: Campus, 2005.

---

## 🟡 Apêndice: Material Complementar (Java)

> *Caso haja atualização da ementa do curso, o material de Java está disponível como um apêndice interno.*

- ☕ [Apostila de Java (Plano B)](./java.md)
- 💻 [Códigos Fonte em Java](../../codigo-fonte/java/README.md)

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
