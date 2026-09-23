<div align="center">
  <br><br>
  <h1>🧱 APOSTILA DE ESTRUTURAS DE DADOS</h1>
  <h2>Organização, Eficiência e Algoritmos Fundamentais</h2>
  <br>
  <p><strong>Disciplina:</strong> Estruturas de Dados</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução e Análise de Complexidade](#1-introdução-e-análise-de-complexidade)
2. [Arrays e Listas (Revisão Aprofundada)](#2-arrays-e-listas-revisão-aprofundada)
3. [Pilhas (Stack)](#3-pilhas-stack)
4. [Filas (Queue)](#4-filas-queue)
5. [Listas Encadeadas (Linked Lists)](#5-listas-encadeadas-linked-lists)
6. [Árvores Binárias e BST](#6-árvores-binárias-e-bst)
7. [Tabelas Hash (Hash Tables)](#7-tabelas-hash-hash-tables)
8. [Introdução a Grafos](#8-introdução-a-grafos)
9. [Comparativo: Quando Usar Cada Estrutura?](#9-comparativo-quando-usar-cada-estrutura)
10. [Exercícios Práticos](#10-exercícios-práticos)
11. [Referências Bibliográficas](#11-referências-bibliográficas)

---

## 1. Introdução e Análise de Complexidade

### 1.1 Por que Estruturas de Dados?
Dados são a matéria-prima da computação. A forma como você **organiza** esses dados determina a **eficiência** dos seus algoritmos. 

> 💡 **Analogia:** Pense em uma biblioteca. Se os livros estiverem jogados aleatoriamente no chão, encontrar um livro específico vai levar horas. Se estiverem organizados por autor e assunto em prateleiras, você encontra em segundos. A estrutura de dados é o "sistema de prateleiras" dos programas.

### 1.2 Notação Big O (Complexidade de Tempo)
Medimos a eficiência de um algoritmo pelo **pior caso** de crescimento conforme o tamanho da entrada ($n$) aumenta.

| Notação | Nome | Exemplo | Crescimento |
| :---: | :--- | :--- | :---: |
| $O(1)$ | Constante | Acessar um índice de array | 🟢 Excelente |
| $O(\log n)$ | Logarítmico | Busca binária | 🟢 Muito bom |
| $O(n)$ | Linear | Percorrer uma lista | 🟡 Razoável |
| $O(n \log n)$ | Log-linear | Algoritmos de ordenação eficientes | 🟠 Aceitável |
| $O(n^2)$ | Quadrático | Laços aninhados | 🔴 Ruim |
| $O(2^n)$ | Exponencial | Força bruta em problemas complexos | ⚫ Inviável |

### 1.3 Complexidade de Espaço
Além do tempo, medimos quanta **memória** o algoritmo consome. Muitas vezes há um *trade-off*: usar mais memória para ganhar velocidade.

---

## 2. Arrays e Listas (Revisão Aprofundada)

### 2.1 Array (Vetor)
Uma coleção de elementos do **mesmo tipo**, armazenados em **posições contíguas** na memória.

```
Índice:    0    1    2    3    4
Valor:   [ 10 | 25 | 33 | 47 | 52 ]
```

**Características:**
- ✅ Acesso por índice: $O(1)$ (instantâneo)
- ❌ Inserção/remoção no meio: $O(n)$ (precisa deslocar elementos)
- 📏 Tamanho fixo (em linguagens como C) ou dinâmico (Python/Java)

### 2.2 Lista Dinâmica (Python `list`, Java `ArrayList`, C++ `vector`)
Um array que **redimensiona automaticamente** quando fica cheio.

```python
# Python
numeros = [10, 25, 33, 47, 52]
numeros.append(99)  # Adiciona ao final: O(1) amortizado
numeros.insert(2, 15)  # Insere no índice 2: O(n)
```

### 2.3 Quando usar Arrays?
- Quando você precisa de **acesso rápido por índice**.
- Quando o tamanho é conhecido ou cresce pouco.
- Quando a ordem dos elementos importa.

---

## 3. Pilhas (Stack)

### 3.1 O que é uma Pilha?
Uma estrutura **LIFO** (Last In, First Out — Último a Entrar, Primeiro a Sair). Pense em uma pilha de pratos: você sempre coloca e remove pelo topo.

```
    ┌───┐
    │ 5 │ ← TOPO (top)
    ├───┤
    │ 3 │
    ├───┤
    │ 1 │ ← BASE (bottom)
    └───┘
```

### 3.2 Operações Fundamentais
| Operação | Descrição | Complexidade |
| :--- | :--- | :---: |
| `push(x)` | Insere elemento no topo | $O(1)$ |
| `pop()` | Remove e retorna o elemento do topo | $O(1)$ |
| `peek()` / `top()` | Retorna o elemento do topo sem remover | $O(1)$ |
| `is_empty()` | Verifica se a pilha está vazia | $O(1)$ |

### 3.3 Aplicações no Mundo Real
1. **Botão "Desfazer" (Ctrl+Z):** Cada ação é empilhada. Desfazer = pop.
2. **Histórico do Navegador:** Botão "Voltar" usa uma pilha de URLs.
3. **Chamadas de Função:** A pilha de execução (call stack) armazena variáveis locais e endereços de retorno.
4. **Validação de Parênteses:** Verificar se `(())()` está balanceado.
5. **Avaliação de Expressões:** Converter `A + B * C` para notação pós-fixa.

### 3.4 Implementação em Python
```python
class Pilha:
    def __init__(self):
        self.itens = []
    
    def push(self, item):
        self.itens.append(item)
    
    def pop(self):
        if not self.is_empty():
            return self.itens.pop()
        raise IndexError("Pilha vazia")
    
    def peek(self):
        if not self.is_empty():
            return self.itens[-1]
        raise IndexError("Pilha vazia")
    
    def is_empty(self):
        return len(self.itens) == 0
```

---

## 4. Filas (Queue)

### 4.1 O que é uma Fila?
Uma estrutura **FIFO** (First In, First Out — Primeiro a Entrar, Primeiro a Sair). Pense em uma fila de banco: o primeiro a chegar é o primeiro a ser atendido.

```
ENTRADA → ┌───┬───┬───┐ → SAÍDA
          │ 1 │ 3 │ 5 │
          └───┴───┴───┘
         frente      trás
```

### 4.2 Operações Fundamentais
| Operação | Descrição | Complexidade |
| :--- | :--- | :---: |
| `enqueue(x)` | Insere elemento no final da fila | $O(1)$ |
| `dequeue()` | Remove e retorna o elemento da frente | $O(1)$ |
| `front()` / `peek()` | Retorna o elemento da frente sem remover | $O(1)$ |
| `is_empty()` | Verifica se a fila está vazia | $O(1)$ |

### 4.3 Aplicações no Mundo Real
1. **Impressão de Documentos:** Trabalhos são processados na ordem de chegada.
2. **Sistemas de Mensagens:** WhatsApp, filas de atendimento.
3. **BFS (Busca em Largura):** Algoritmo de grafos que explora nível por nível.
4. **Buffer de Vídeo/Áudio:** Streaming usa filas para armazenar dados antes de reproduzir.
5. **Escalonamento de Processos:** Sistemas operacionais usam filas para gerenciar processos.

### 4.4 Implementação em Python
```python
from collections import deque

class Fila:
    def __init__(self):
        self.itens = deque()
    
    def enqueue(self, item):
        self.itens.append(item)
    
    def dequeue(self):
        if not self.is_empty():
            return self.itens.popleft()
        raise IndexError("Fila vazia")
    
    def front(self):
        if not self.is_empty():
            return self.itens[0]
        raise IndexError("Fila vazia")
    
    def is_empty(self):
        return len(self.itens) == 0
```

> ⚠️ **Atenção:** Usar `deque` do Python é crucial. Usar `list.pop(0)` seria $O(n)$, enquanto `deque.popleft()` é $O(1)$.

---

## 5. Listas Encadeadas (Linked Lists)

### 5.1 O Problema dos Arrays
Arrays têm tamanho fixo (em C) ou precisam redimensionar (Python/Java). Inserir no meio é caro ($O(n)$). **Listas encadeadas** resolvem isso.

### 5.2 O que é uma Lista Encadeada?
Uma sequência de **nós**, onde cada nó contém:
1. **Dado:** O valor armazenado.
2. **Próximo:** Um ponteiro para o próximo nó.

```
┌──────┬────┐    ┌──────┬────┐    ┌──────┬────┐
│  10  │ ──────>│  25  │ ──────>│  33  │ NULL │
└──────┴────┘    └──────┴────┘    └──────┴────┘
   head                                tail
```

### 5.3 Tipos de Listas Encadeadas
| Tipo | Descrição | Vantagem |
| :--- | :--- | :--- |
| **Simplesmente Encadeada** | Cada nó aponta para o próximo | Simples de implementar |
| **Duplamente Encadeada** | Cada nó aponta para o próximo e o anterior | Permite navegar para trás |
| **Circular** | O último nó aponta para o primeiro | Útil para round-robin |

### 5.4 Complexidade
| Operação | Simples | Dupla |
| :--- | :---: | :---: |
| Acesso por índice | $O(n)$ | $O(n)$ |
| Inserção no início | $O(1)$ | $O(1)$ |
| Inserção no final | $O(n)$ | $O(1)$ |
| Inserção no meio (com ponteiro) | $O(1)$ | $O(1)$ |
| Remoção | $O(n)$ | $O(1)$ |

### 5.5 Aplicações
1. **Implementação de Pilhas e Filas** eficientes.
2. **Gerenciamento de Memória:** Listas de blocos livres.
3. **Navegadores:** Botões "Voltar" e "Avançar" (lista duplamente encadeada).
4. **Playlist de Músicas:** Próxima/anterior.

### 5.6 Implementação em Python
```python
class No:
    def __init__(self, dado):
        self.dado = dado
        self.proximo = None

class ListaEncadeada:
    def __init__(self):
        self.head = None
    
    def inserir_inicio(self, dado):
        novo_no = No(dado)
        novo_no.proximo = self.head
        self.head = novo_no
    
    def inserir_final(self, dado):
        novo_no = No(dado)
        if self.head is None:
            self.head = novo_no
            return
        
        atual = self.head
        while atual.proximo:
            atual = atual.proximo
        atual.proximo = novo_no
    
    def imprimir(self):
        atual = self.head
        while atual:
            print(atual.dado, end=" -> ")
            atual = atual.proximo
        print("NULL")
```

---

## 6. Árvores Binárias e BST

### 6.1 O que é uma Árvore?
Uma estrutura **hierárquica** com um nó raiz e filhos. Uma **árvore binária** tem no máximo **2 filhos** por nó.

```
        50
       /  \
     30    70
    /  \   /  \
   20  40 60  80
```

### 6.2 Árvore Binária de Busca (BST)
Uma BST tem uma propriedade especial:
- Todos os valores na **subárvore esquerda** são **menores** que o nó.
- Todos os valores na **subávore direita** são **maiores** que o nó.

Essa propriedade permite **busca eficiente** ($O(\log n)$ em média).

### 6.3 Operações em BST
| Operação | Complexidade (Média) | Complexidade (Pior Caso) |
| :--- | :---: | :---: |
| Busca | $O(\log n)$ | $O(n)$ |
| Inserção | $O(\log n)$ | $O(n)$ |
| Remoção | $O(\log n)$ | $O(n)$ |

> ⚠️ **Pior caso:** A árvore degenera em uma lista encadeada (se os dados já estiverem ordenados). Para resolver, usamos **árvores balanceadas** (AVL, Rubro-Negra).

### 6.4 Percursos em Árvores
| Tipo | Ordem | Aplicação |
| :--- | :--- | :--- |
| **Pré-ordem** | Raiz → Esquerda → Direita | Copiar a árvore |
| **Em-ordem (In-order)** | Esquerda → Raiz → Direita | Obter elementos ordenados (em BST) |
| **Pós-ordem** | Esquerda → Direita → Raiz | Deletar a árvore |
| **Em nível (BFS)** | Nível por nível | Busca em largura |

### 6.5 Aplicações
1. **Bancos de Dados:** Índices usam B-Trees (variação de árvores).
2. **Sistemas de Arquivos:** Diretórios são árvores.
3. **Árvores de Decisão:** Machine Learning.
4. **Roteamento:** Algoritmos em redes.

---

## 7. Tabelas Hash (Hash Tables)

### 7.1 O que é uma Tabela Hash?
Uma estrutura que mapeia **chaves** a **valores** usando uma **função hash**. É a implementação por trás dos **dicionários** em Python e **objetos** em JavaScript.

```
Chave: "Ana"  →  Hash: 5  →  Índice: 5  →  Valor: 20 anos
Chave: "Bob"  →  Hash: 3  →  Índice: 3  →  Valor: 25 anos
```

### 7.2 Função Hash
Uma função que converte uma chave (string, número) em um **índice numérico** dentro de um array.

```python
def hash_function(chave, tamanho):
    return sum(ord(c) for c in chave) % tamanho
```

### 7.3 Colisões
Quando duas chaves diferentes geram o **mesmo índice**. Técnicas para resolver:
1. **Encadeamento (Chaining):** Cada posição do array é uma lista encadeada.
2. **Endereçamento Aberto:** Procurar a próxima posição livre (linear probing).

### 7.4 Complexidade
| Operação | Complexidade (Média) | Complexidade (Pior Caso) |
| :--- | :---: | :---: |
| Busca | $O(1)$ | $O(n)$ |
| Inserção | $O(1)$ | $O(n)$ |
| Remoção | $O(1)$ | $O(n)$ |

### 7.5 Aplicações
1. **Dicionários em Python** (`dict`).
2. **Cache:** Memória cache de navegadores, CDN.
3. **Bancos de Dados:** Índices hash.
4. **Sets:** Conjuntos sem elementos repetidos.
5. **Contagem de Frequência:** Contar palavras em um texto.

---

## 8. Introdução a Grafos

### 8.1 O que é um Grafo?
Uma coleção de **vértices (nós)** conectados por **arestas (edges)**. Modelam relacionamentos.

```
    A --- B
    |   / |
    |  /  |
    | /   |
    C --- D --- E
```

### 8.2 Tipos de Grafos
| Tipo | Descrição | Exemplo |
| :--- | :--- | :--- |
| **Direcionado** | Arestas têm direção (A → B) | Seguidores no Twitter |
| **Não-direcionado** | Arestas sem direção (A — B) | Amizade no Facebook |
| **Ponderado** | Arestas têm peso (custo) | Distância entre cidades |
| **Não-ponderado** | Arestas sem peso | Conexões de rede |

### 8.3 Representação
1. **Matriz de Adjacência:** Matriz $n \times n$ onde `matriz[i][j] = 1` se há aresta.
2. **Lista de Adjacência:** Cada vértice tem uma lista de vizinhos.

### 8.4 Algoritmos Clássicos
| Algoritmo | Objetivo | Complexidade |
| :--- | :--- | :---: |
| **BFS** (Busca em Largura) | Menor caminho em grafos não-ponderados | $O(V + E)$ |
| **DFS** (Busca em Profundidade) | Explorar todos os caminhos | $O(V + E)$ |
| **Dijkstra** | Menor caminho em grafos ponderados | $O(E \log V)$ |

### 8.5 Aplicações
1. **Redes Sociais:** Sugestão de amigos.
2. **GPS:** Menor caminho (Dijkstra).
3. **Redes de Computadores:** Roteamento de pacotes.
4. **Web:** PageRank do Google.

---

## 9. Comparativo: Quando Usar Cada Estrutura?

| Estrutura | Melhor Para | Evitar Quando |
| :--- | :--- | :--- |
| **Array** | Acesso rápido por índice, dados homogêneos | Inserções/remoções frequentes no meio |
| **Lista Encadeada** | Inserções/remoções frequentes | Acesso aleatório por índice |
| **Pilha** | LIFO (desfazer, validação de parênteses) | Quando precisa de acesso aleatório |
| **Fila** | FIFO (filas de impressão, BFS) | Quando precisa de acesso aleatório |
| **Árvore Binária (BST)** | Busca, inserção e remoção eficientes | Dados já ordenados (degenera) |
| **Tabela Hash** | Busca/inserção/remoção $O(1)$ | Quando precisa de dados ordenados |
| **Grafo** | Relacionamentos complexos (redes, mapas) | Estruturas simples hierárquicas |

---

## 10. Exercícios Práticos

| # | Exercício | Estrutura | Dificuldade |
| :---: | :--- | :---: | :---: |
| 1 | Implemente uma função que verifica se uma string com parênteses está balanceada: `(()())` ✅, `(()` ❌. | Pilha | ⭐⭐ |
| 2 | Simule uma fila de impressão com 5 documentos. Adicione mais 2 documentos enquanto 3 estão sendo impressos. | Fila | ⭐⭐ |
| 3 | Implemente uma lista encadeada que insere elementos em ordem crescente. | Lista Encadeada | ⭐⭐⭐ |
| 4 | Construa uma BST inserindo os valores: `[50, 30, 70, 20, 40, 60, 80]`. Faça o percurso em-ordem. | Árvore | ⭐⭐⭐ |
| 5 | Implemente uma tabela hash simples que armazena nomes e idades. Trate colisões com encadeamento. | Tabela Hash | ⭐⭐⭐ |
| 6 | Modele a rede social da sua turma como um grafo. Implemente BFS para encontrar o menor caminho entre dois alunos. | Grafo | ⭐⭐⭐⭐ |
| 7 | **Desafio:** Usando o cenário da Editora (Banco de Dados), implemente uma BST que armazena livros ordenados por ano de publicação. | Árvore + BD | ⭐⭐⭐⭐ |

---

## 11. Referências Bibliográficas

- CORMEN, Thomas H. et al. **Algoritmos: Teoria e Prática**. Rio de Janeiro: Elsevier, 2012. *(A "bíblia" dos algoritmos)*.
- GOODRICH, Michael T.; TAMASSIA, Roberto. **Estruturas de Dados e Algoritmos em Java**. Porto Alegre: Bookman, 2013.
- SZWARCFITER, Jayme Luiz; MARKENZON, Lilian. **Estruturas de Dados e Seus Algoritmos**. Rio de Janeiro: LTC, 2010.
- VIZZIONI, Flávio. **Estruturas de Dados: Conceitos e Técnicas**. São Paulo: Érica, 2015.
- VISUALGO. **Visualização de Estruturas de Dados**. Disponível em: <https://visualgo.net>. Acesso em: 2024. *(Recurso interativo excelente!)*

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
