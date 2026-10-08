<div align="center">
  <br><br>
  <h1>🧬 APOSTILA DE LINGUAGEM ORIENTADA A OBJETOS</h1>
  <h2>Paradigma, Pilares e Implementação em C++</h2>
  <br>
  <p><strong>Disciplina:</strong> Linguagem Orientada a Objetos</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução à Orientação a Objetos](#1-introdução-à-orientação-a-objetos)
2. [Classes e Objetos em C++](#2-classes-e-objetos-em-c)
3. [Encapsulamento](#3-encapsulamento)
4. [Herança](#4-herança)
5. [Polimorfismo](#5-polimorfismo)
6. [Construtores e Destrutores](#6-construtores-e-destrutores)
7. [Exercícios Práticos](#7-exercícios-práticos)
8. [Referências Bibliográficas](#8-referências-bibliográficas)

---

## 1. Introdução à Orientação a Objetos

### 1.1 O Paradigma Orientado a Objetos (POO)
Enquanto a programação estruturada (como em C) foca em **funções e lógica**, a POO foca na **modelagem do mundo real**. Em vez de escrever um script linear, nós criamos "entidades" que interagem entre si.

### 1.2 Os 4 Pilares da POO
1. **Encapsulamento:** Esconder os detalhes internos de um objeto e expor apenas o necessário.
2. **Herança:** Permitir que uma classe "filha" herde atributos e métodos de uma classe "pai".
3. **Polimorfismo:** A capacidade de um objeto assumir diferentes formas (ex: o método `latir()` se comporta diferente para um `Cachorro` e um `RoboCachorro`).
4. **Abstração:** Focar nas características essenciais de um objeto, ignorando detalhes irrelevantes.

---

## 2. Classes e Objetos em C++

### 2.1 O que é uma Classe?
Uma **classe** é um "molde" ou "planta" que define a estrutura (atributos) e o comportamento (métodos) de um conjunto de objetos.

### 2.2 O que é um Objeto?
Um **objeto** é uma **instância** concreta de uma classe. Se `Carro` é a classe, o "Fusca Azul da Maria" é o objeto.

### 2.3 Sintaxe em C++
```cpp
class Retangulo {
public:
    double base;
    double altura;

    double calcularArea() {
        return base * altura;
    }
};

int main() {
    Retangulo r1; // Criando o objeto
    r1.base = 5.0;
    r1.altura = 10.0;
    cout << "Area: " << r1.calcularArea() << endl;
}
```

> 💻 **Prática:** Compile e teste a criação de múltiplos objetos no arquivo [`classe_objeto.cpp`](../../codigo-fonte/c++/classe_objeto.cpp).

---

## 3. Encapsulamento

O encapsulamento protege os dados de uma classe contra acesso indevido ou alterações inconsistentes. Em C++, usamos os modificadores de acesso:

- **`public`**: Acessível de qualquer lugar.
- **`private`**: Acessível apenas dentro da própria classe.
- **`protected`**: Acessível pela própria classe e por suas classes filhas (usado em Herança).

### 3.1 Getters e Setters
Como os atributos são `private`, criamos métodos públicos para ler (`get`) e alterar (`set`) esses valores de forma controlada.

```cpp
class ContaBancaria {
private:
    double saldo;
public:
    void depositar(double valor) {
        if (valor > 0) saldo += valor; // Regra de negócio protegida!
    }
    double getSaldo() { return saldo; }
};
```

> 💻 **Prática:** Veja como proteger o saldo de uma conta bancária no arquivo [`encapsulamento.cpp`](../../codigo-fonte/c++/encapsulamento.cpp).

---

## 4. Herança

A herança permite criar novas classes baseadas em classes existentes, promovendo a **reutilização de código**.

- **Classe Base (Superclasse):** A classe original.
- **Classe Derivada (Subclasse):** A classe que herda.

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

> 💻 **Prática:** Crie uma hierarquia de classes no arquivo [`heranca.cpp`](../../codigo-fonte/c++/heranca.cpp).

---

## 5. Polimorfismo

O polimorfismo permite que métodos com o mesmo nome tenham comportamentos diferentes dependendo do objeto que os chama. Em C++, usamos **Funções Virtuais**.

### 5.1 Classes Abstratas e Funções Virtuais Puras
Se uma classe tem pelo menos uma função virtual pura (`= 0`), ela se torna **abstrata** (não pode ser instanciada, serve apenas como molde).

```cpp
class Forma {
public:
    virtual void calcularArea() = 0; // Função virtual pura
};
```

### 5.2 Override
A classe filha usa a palavra-chave `override` para fornecer sua própria implementação do método.

> 💻 **Prática:** Implemente formas geométricas com polimorfismo no arquivo [`polimorfismo.cpp`](../../codigo-fonte/c++/polimorfismo.cpp).

---

## 6. Construtores e Destrutores

### 6.1 Construtor
É um método especial chamado **automaticamente** quando um objeto é criado. Tem o mesmo nome da classe e não tem tipo de retorno. Serve para inicializar atributos.

```cpp
class Livro {
public:
    string titulo;
    Livro(string t) { titulo = t; } // Construtor
};
```

### 6.2 Destrutor
Chamado **automaticamente** quando o objeto é destruído (sai do escopo ou é deletado). Em C++, é crucial para liberar memória alocada dinamicamente. Usa o símbolo `~` antes do nome.

```cpp
~Livro() {
    cout << "Livro destruido." << endl;
}
```

> 💻 **Prática:** Observe o ciclo de vida dos objetos no arquivo [`construtor_destrutor.cpp`](../../codigo-fonte/c++/construtor_destrutor.cpp).

---

## 7. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Crie uma classe `Aluno` com atributos `nome` e `notas` (array). Crie métodos para adicionar notas e calcular a média. | ⭐ |
| 2 | Refatore a classe `Aluno` para encapsular os atributos, garantindo que a nota não possa ser menor que 0 ou maior que 10. | ⭐⭐ |
| 3 | Crie uma classe `Funcionario` e uma classe `Gerente` que herda de `Funcionario`, adicionando o atributo `bonus`. | ⭐⭐ |
| 4 | Crie uma classe abstrata `Veiculo` com o método virtual `mover()`. Crie as subclasses `Carro` e `Aviao` implementando o método de formas diferentes. | ⭐⭐⭐ |
| 5 | Adicione um construtor na classe `Veiculo` que receba a `placa` e um destrutor que exiba uma mensagem de "descarte" do veículo. | ⭐⭐⭐ |

> 💻 **Prática:** Os esqueletos dos códigos e resoluções estão disponíveis na [Pasta de Códigos C++](../../codigo-fonte/c++/README.md).

---

## 8. Referências Bibliográficas

- SCHILDT, Herbert. **C++: A Referência Completa**. Rio de Janeiro: Alta Books, 2013.
- ASCENCIO, Ana Fernanda Gomes; CAMPOS, Edilene Aparecida Veneruchi de. **Fundamentos da Programação de Computadores**. São Paulo: Pearson, 2012. (Capítulos sobre POO).
- BOOCH, Grady. **UML - Guia do Usuário: A Linguagem de Modelagem Unificada**. Rio de Janeiro: Campus, 2005.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
