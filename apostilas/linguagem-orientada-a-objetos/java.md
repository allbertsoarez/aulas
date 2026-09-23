<div align="center">
  <br><br>
  <h1>☕ APÊNDICE: LINGUAGEM JAVA</h1>
  <h2>Material Complementar: POO, JVM e Portabilidade</h2>
  <br>
  <p><strong>Status:</strong> 🟡 Material de Apoio / Plano B</p>
  <p><em>Este material é um apêndice da Apostila de Linguagem Orientada a Objetos.</em></p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

1. [Introdução ao Java e a JVM](#1-introdução-ao-java-e-a-jvm)
2. [Classes e Objetos em Java](#2-classes-e-objetos-em-java)
3. [Encapsulamento e a palavra `this`](#3-encapsulamento-e-a-palavra-this)
4. [Herança (`extends`)](#4-herança-extends)
5. [Polimorfismo e Classes Abstratas](#5-polimorfismo-e-classes-abstratas)
6. [Interfaces (`implements`)](#6-interfaces-implements)
7. [Comparação: Java vs C++ vs Python](#7-comparação-java-vs-c-vs-python)
8. [Exercícios Práticos](#8-exercícios-práticos)

---

## 1. Introdução ao Java e a JVM

### 1.1 O Lema do Java: "Write Once, Run Anywhere"
Diferente de C e C++, que compilam para um código de máquina específico de cada sistema operacional, o Java compila para um **bytecode**. Esse bytecode é executado pela **JVM (Java Virtual Machine)**.

### 1.2 Principais Diferenças para C++
- **Sem Ponteiros:** Java não permite manipulação direta de memória.
- **Garbage Collector:** A memória é gerenciada automaticamente (não existe `delete` ou `free`).
- **Tudo é Classe:** Não existem funções soltas; tudo deve estar dentro de uma classe.

---

## 2. Classes e Objetos em Java

A sintaxe é muito semelhante ao C++, mas a criação de objetos exige a palavra-chave `new`.

```java
class Pessoa {
    String nome;
    void apresentar() {
        System.out.println("Olá, sou " + nome);
    }
}

public class Main {
    public static void main(String[] args) {
        Pessoa p1 = new Pessoa(); // Obrigatório usar 'new'
        p1.nome = "Ana";
        p1.apresentar();
    }
}
```

> 💻 **Prática:** Compile e teste a criação de objetos no arquivo [`ClasseObjeto.java`](../../codigo-fonte/java/ClasseObjeto.java).

---

## 3. Encapsulamento e a palavra `this`

Java utiliza os mesmos modificadores de acesso (`private`, `public`, `protected`). A grande diferença é o uso da palavra `this` para resolver ambiguidades entre atributos e parâmetros.

```java
class ContaBancaria {
    private double saldo;

    public void depositar(double saldo) { 
        this.saldo += saldo; // 'this.saldo' refere-se ao atributo da classe
    }
}
```

> 💻 **Prática:** Veja o encapsulamento em ação no arquivo [`Encapsulamento.java`](../../codigo-fonte/java/Encapsulamento.java).

---

## 4. Herança (`extends`)

Em Java, usamos a palavra-chave `extends`. Diferente de C++, Java **não suporta herança múltipla** de classes.

```java
class Animal {
    void comer() { System.out.println("Comendo..."); }
}

class Cachorro extends Animal {
    void latir() { System.out.println("Au au!"); }
}
```

> 💻 **Prática:** Veja herança simples no arquivo [`Heranca.java`](../../codigo-fonte/java/Heranca.java).

---

## 5. Polimorfismo e Classes Abstratas

```java
abstract class Forma {
    abstract void calcularArea(); 
}

class Retangulo extends Forma {
    @Override
    void calcularArea() {
        System.out.println("Area = b * h");
    }
}
```

> 💻 **Prática:** Veja polimorfismo e a anotação `@Override` no arquivo [`Polimorfismo.java`](../../codigo-fonte/java/Polimorfismo.java).

---

## 6. Interfaces (`implements`)

Como Java não permite herança múltipla de classes, ela resolve esse problema com **Interfaces**. Uma classe pode `implements` quantas interfaces quiser.

```java
interface Calculavel {
    double calcularArea();
}

class Retangulo implements Calculavel {
    @Override
    public double calcularArea() { return 5 * 10; }
}
```

> 💻 **Prática:** Entenda a força das interfaces no arquivo [`Interfaces.java`](../../codigo-fonte/java/Interfaces.java).

---

## 7. Comparação: Java vs C++ vs Python

| Conceito | C++ | Java | Python |
| :--- | :--- | :--- | :--- |
| Paradigma | Multi-paradigma | 100% Orientado a Objetos | Multi-paradigma |
| Compilação | Código Nativo | Bytecode (JVM) | Interpretado |
| Herança Múltipla | Sim (Classes) | Não (Apenas Interfaces) | Sim (Classes) |
| Memória | Manual (`new`/`delete`) | Automática (Garbage Collector) | Automática |

---

## 8. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Crie uma classe `Aluno` com `nome` e um array de `notas`. Crie um método para calcular a média. | ⭐ |
| 2 | Crie uma interface `Autenticavel` com o método `login()`. Faça as classes `Usuario` e `Admin` implementarem essa interface. | ⭐⭐ |
| 3 | Crie uma classe abstrata `Funcionario` com o método abstrato `calcularSalario()`. Crie as subclasses `Gerente` e `Desenvolvedor`. | ⭐⭐ |

> 💻 **Prática:** Os esqueletos dos códigos estão disponíveis na [Pasta de Códigos Java](../../codigo-fonte/java/README.md).

---

<div align="center">
  <br>
  <a href="./README.md">🔙 Voltar para a Apostila de Orientação a Objetos</a>
  <br><br>
</div>
