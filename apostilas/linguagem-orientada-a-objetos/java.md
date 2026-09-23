<div align="center">
  <br><br>
  <h1>☕ APOSTILA DE LINGUAGEM JAVA</h1>
  <h2>Material Complementar: POO, JVM e Portabilidade</h2>
  <br>
  <p><strong>Disciplina:</strong> Linguagem de Programação (Complementar)</p>
  <p><strong>Professor/Autor:</strong> Albert Soares</p>
  <p><strong>Status:</strong> 🟡 Material de Apoio / Plano B</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução ao Java e a JVM](#1-introdução-ao-java-e-a-jvm)
2. [Classes e Objetos em Java](#2-classes-e-objetos-em-java)
3. [Encapsulamento e a palavra `this`](#3-encapsulamento-e-a-palavra-this)
4. [Herança (`extends`)](#4-herança-extends)
5. [Polimorfismo e Classes Abstratas](#5-polimorfismo-e-classes-abstratas)
6. [Interfaces (`implements`)](#6-interfaces-implements)
7. [Comparação: Java vs C++ vs Python](#7-comparação-java-vs-c-vs-python)
8. [Exercícios Práticos](#8-exercícios-práticos)
9. [Referências Bibliográficas](#9-referências-bibliográficas)

---

## 1. Introdução ao Java e a JVM

### 1.1 O Lema do Java: "Write Once, Run Anywhere"
Diferente de C e C++, que compilam para um código de máquina específico de cada sistema operacional (Windows, Linux, Mac), o Java compila para um ** bytecode**. Esse bytecode é executado pela **JVM (Java Virtual Machine)**.

### 1.2 O Ecossistema Java
- **JDK (Java Development Kit):** O kit de desenvolvimento (contém o compilador `javac`).
- **JRE (Java Runtime Environment):** O ambiente de execução (contém a JVM).
- **JVM:** A máquina virtual que traduz o bytecode para o sistema operacional em tempo de execução.

### 1.3 Principais Diferenças para C++
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

    public void depositar(double saldo) { // Parâmetro tem o mesmo nome do atributo
        this.saldo += saldo; // 'this.saldo' refere-se ao atributo da classe
    }
}
```

> 💻 **Prática:** Veja o encapsulamento em ação no arquivo [`Encapsulamento.java`](../../codigo-fonte/java/Encapsulamento.java).

---

## 4. Herança (`extends`)

Em Java, usamos a palavra-chave `extends`. Diferente de C++, Java **não suporta herança múltipla** de classes (uma classe só pode ter uma "mãe").

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

Para criar métodos que devem ser obrigatoriamente implementados pelas classes filhas, usamos classes abstratas e o modificador `abstract`.

```java
abstract class Forma {
    abstract void calcularArea(); // Sem corpo
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

Como Java não permite herança múltipla de classes, ela resolve esse problema com **Interfaces**. Uma classe pode `implements` (implementar) quantas interfaces quiser.

```java
interface Calculavel {
    double calcularArea();
}

interface Desenhavel {
    void desenhar();
}

// Implementando múltiplas interfaces
class Retangulo implements Calculavel, Desenhavel {
    @Override
    public double calcularArea() { return 5 * 10; }
    
    @Override
    public void desenhar() { System.out.println("Desenhando..."); }
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
| Ponteiros | Sim | Não | Não |
| Sobrecarga de Operadores | Sim | Não | Sim |

---

## 8. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Crie uma classe `Aluno` com `nome` e um array de `notas`. Crie um método para calcular a média. | ⭐ |
| 2 | Crie uma interface `Autenticavel` com o método `login()`. Faça as classes `Usuario` e `Admin` implementarem essa interface. | ⭐⭐ |
| 3 | Crie uma classe abstrata `Funcionario` com o método abstrato `calcularSalario()`. Crie as subclasses `Gerente` e `Desenvolvedor`. | ⭐⭐ |
| 4 | Refatore o exercício anterior para que `Funcionario` implemente a interface `Tributavel` (com o método `calcularImposto()`). | ⭐⭐⭐ |

> 💻 **Prática:** Os esqueletos dos códigos estão disponíveis na [Pasta de Códigos Java](../../codigo-fonte/java/README.md).

---

## 9. Referências Bibliográficas

- DEITEL, Harvey; DEITEL, Paul. **Java: Como Programar**. São Paulo: Pearson, 2017.
| SCHILDT, Herbert. **Java: A Referência Completa**. Rio de Janeiro: Alta Books, 2014.
- HORSTMANN, Cay S. **Core Java**. São Paulo: Bookman, 2012.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
