<div align="center">
  <br><br>
  <h1>🐍 APOSTILA DE LINGUAGEM PYTHON</h1>
  <h2>Sintaxe Limpa, Dados e Automação</h2>
  <br>
  <p><strong>Disciplina:</strong> Linguagem de Programação</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução ao Python](#1-introdução-ao-python)
2. [Variáveis e Tipos de Dados](#2-variáveis-e-tipos-de-dados)
3. [Entrada e Saída de Dados](#3-entrada-e-saída-de-dados)
4. [Estruturas de Controle (Condicionais)](#4-estruturas-de-controle-condicionais)
5. [Estruturas de Repetição](#5-estruturas-de-repetição)
6. [Funções](#6-funções)
7. [Estruturas de Dados (Listas e Dicionários)](#7-estruturas-de-dados-listas-e-dicionários)
8. [Tratamento de Erros (Try/Except)](#8-tratamento-de-erros-tryexcept)
9. [Exercícios Práticos](#9-exercícios-práticos)
10. [Referências Bibliográficas](#10-referências-bibliográficas)

---

## 1. Introdução ao Python

### 1.1 História e Filosofia
Criada por Guido van Rossum e lançada em 1991, Python foi projetada com uma filosofia focada na **legibilidade do código**. O Zen do Python diz: *"Legível conta. Simples é melhor que complexo."*

### 1.2 Por que aprender Python?
- **Sintaxe Simples:** Usa indentação (espaços) para definir blocos, eliminando a necessidade de chaves `{}`.
- **Tipagem Dinâmica:** Não é necessário declarar o tipo da variável.
- **Ecossistema Gigante:** É a linguagem nº 1 em Ciência de Dados, IA, Machine Learning e Automação.
- **Bibliotecas Poderosas:** NumPy, Pandas, TensorFlow, Django, Flask, etc.

---

## 2. Variáveis e Tipos de Dados

Em Python, as variáveis são criadas no momento da atribuição e o tipo é definido automaticamente (Tipagem Dinâmica).

### 2.1 Tipos Primitivos
| Tipo | Nome em Python | Exemplo | Descrição |
| :--- | :--- | :--- | :--- |
| Inteiro | `int` | `idade = 25` | Números sem casas decimais. |
| Ponto Flutuante | `float` | `altura = 1.75` | Números com casas decimais. |
| Texto | `str` | `nome = "Ana"` | Cadeia de caracteres (strings). |
| Booleano | `bool` | `aprovado = True` | Valores lógicos (`True` ou `False`). |

### 2.2 Formatação de Strings (f-strings)
A maneira mais moderna e legável de inserir variáveis dentro de textos (a partir do Python 3.6):
```python
nome = "Maria"
idade = 20
print(f"Olá, {nome}! Você tem {idade} anos.")
```

> 💻 **Prática:** Explore a tipagem dinâmica e formatação no arquivo [`variaveis_tipos.py`](../../../codigo-fonte/python/variaveis_tipos.py).

---

## 3. Entrada e Saída de Dados

### 3.1 Saída (`print`)
Usado para exibir informações no console.
```python
print("Bem-vindo!")
print("Resultado:", 10 + 5)
```

### 3.2 Entrada (`input`)
Usado para ler dados do teclado. **Atenção:** O `input()` sempre retorna uma **string**. Se precisar de números, é obrigatório converter.
```python
nome = input("Digite seu nome: ")
idade = int(input("Digite sua idade: ")) # Converte string para inteiro
```

> 💻 **Prática:** Pratique leitura, conversão e escrita no arquivo [`entrada_saida.py`](../../../codigo-fonte/python/entrada_saida.py).

---

## 4. Estruturas de Controle (Condicionais)

Permitem que o programa execute blocos de código diferentes baseados em condições. Em Python, a indentação (geralmente 4 espaços) é obrigatória.

### 4.1 Estrutura `if ... elif ... else`
```python
nota = 85

if nota >= 90:
    print("Conceito A")
elif nota >= 80:
    print("Conceito B")
else:
    print("Conceito C ou menor")
```

### 4.2 Operadores Lógicos
Python usa palavras em inglês para lógica: `and`, `or`, `not`.
```python
if idade >= 18 and tem_carteira:
    print("Pode dirigir.")
```

> 💻 **Prática:** Veja um exemplo de validação de notas no arquivo [`condicionais_if.py`](../../../codigo-fonte/python/condicionais_if.py).

---

## 5. Estruturas de Repetição

### 5.1 `for` com `range()`
O `for` em Python itera sobre sequências. A função `range(inicio, fim, passo)` é muito usada para gerar números.
```python
# Imprime de 0 a 4 (o 5 é exclusivo)
for i in range(5):
    print(i)

# Imprime de 1 a 10
for i in range(1, 11):
    print(i)
```

### 5.2 `while`
Repete enquanto a condição for verdadeira.
```python
contador = 0
while contador < 5:
    print(contador)
    contador += 1
```

> 💻 **Prática:** Gere uma tabuada dinâmica usando `range()` no arquivo [`repeticao_for.py`](../../../codigo-fonte/python/repeticao_for.py).

---

## 6. Funções

Funções são definidas com a palavra-chave `def`. Não é necessário declarar o tipo de retorno ou dos parâmetros.

```python
def calcular_area_retangulo(base, altura):
    area = base * altura
    return area

# Chamando a função
minha_area = calcular_area_retangulo(5, 10)
print(f"A área é: {minha_area}")
```

- **`return`**: Opcional. Se omitido, a função retorna `None` (nulo).
- **Parâmetros padrão**: `def saudacao(nome="Visitante"):`

> 💻 **Prática:** Crie e chame suas próprias funções no arquivo [`funcoes.py`](../../../codigo-fonte/python/funcoes.py).

---

## 7. Estruturas de Dados (Listas e Dicionários)

Diferente de C, Python possui estruturas de dados de alto nível embutidas na linguagem.

### 7.1 Listas (Arrays Dinâmicos)
Coleção ordenada e mutável de itens.
```python
frutas = ["Maçã", "Banana", "Laranja"]
frutas.append("Uva")      # Adiciona ao final
frutas.remove("Banana")   # Remove um item
print(frutas[0])          # Acessa o primeiro item (Maçã)
```

### 7.2 Dicionários (Chave-Valor)
Coleção de pares de dados, onde cada valor é acessado por uma chave única.
```python
aluno = {
    "nome": "Ana",
    "idade": 20,
    "notas": [8.5, 9.0, 7.5]
}
print(aluno["nome"])      # Acessa pela chave
aluno["curso"] = "TI"     # Adiciona nova chave
```

> 💻 **Prática:** Manipule listas e dicionários no arquivo [`listas_dicionarios.py`](../../../codigo-fonte/python/listas_dicionarios.py).

---

## 8. Tratamento de Erros (Try/Except)

Em vez de deixar o programa quebrar quando ocorre um erro, Python permite "capturar" e tratar a exceção.

```python
try:
    numero = int(input("Digite um número: "))
    resultado = 10 / numero
    print(f"O resultado é {resultado}")
except ValueError:
    print("Erro: Você não digitou um número inteiro válido!")
except ZeroDivisionError:
    print("Erro: Não é possível dividir por zero!")
```

---

## 9. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Crie um programa que leia o nome e a idade de 3 pessoas e exiba a média das idades. | ⭐ |
| 2 | Faça um programa que receba um número e verifique se ele é par ou ímpar usando `if/else`. | ⭐ |
| 3 | Crie uma lista com 5 notas. Use um laço `for` para calcular e exibir a média da turma. | ⭐⭐ |
| 4 | Crie um dicionário representando um produto (nome, preço, estoque). Faça uma função que receba o dicionário e a quantidade vendida, atualizando o estoque. | ⭐⭐⭐ |
| 5 | Refaça o exercício anterior, mas tratando o erro caso o usuário digite uma quantidade inválida (usando `try/except`). | ⭐⭐⭐ |

> 💻 **Prática:** Os esqueletos dos códigos e resoluções estão disponíveis na [Pasta de Códigos Python](../../../codigo-fonte/python/README.md).

---

## 10. Referências Bibliográficas

- MENEZES, Nilo Ney Cortes. **Introdução à Programação com Python**. São Paulo: Novatec, 2019.
- DOWNEY, Allen B. **Pense em Python: Pense como um Cientista da Computação**. São Paulo: Novatec, 2016.
- LUTZ, Mark. **Aprendendo Python**. São Paulo: Novatec, 2012.

---

<div align="center">
  <br>
  <a href="../../../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
