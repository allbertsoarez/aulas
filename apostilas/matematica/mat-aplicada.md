<div align="center">
  <br><br>
  <h1>📐 APOSTILA DE MATEMÁTICA APLICADA</h1>
  <h2>Fundamentos Matemáticos para a Computação</h2>
  <br>
  <p><strong>Disciplina:</strong> Matemática Aplicada</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Conjuntos e Lógica Matemática](#1-conjuntos-e-lógica-matemática)
2. [Funções e Crescimento](#2-funções-e-crescimento)
3. [Trigonometria Aplicada](#3-trigonometria-aplicada)
4. [Matrizes e Sistemas Lineares](#4-matrizes-e-sistemas-lineares)
5. [Exercícios Práticos](#5-exercícios-práticos)
6. [Referências Bibliográficas](#6-referências-bibliográficas)

---

## 1. Conjuntos e Lógica Matemática

### 1.1 Por que estudar Conjuntos na Computação?
A Teoria dos Conjuntos é a base formal dos **Bancos de Dados Relacionais**. Operações como `UNION` (União), `INTERSECT` (Interseção) e `EXCEPT` (Diferença) no SQL são traduções diretas das operações da teoria dos conjuntos.

### 1.2 Operações Fundamentais
Dados os conjuntos $A = \{1, 2, 3\}$ e $B = \{3, 4, 5\}$:
- **União ($A \cup B$)**: $\{1, 2, 3, 4, 5\}$ (Todos os elementos de A ou B).
- **Interseção ($A \cap B$)**: $\{3\}$ (Apenas os elementos comuns).
- **Diferença ($A - B$)**: $\{1, 2\}$ (Elementos de A que não estão em B).

### 1.3 Lógica de Predicados
Na programação e em consultas SQL, usamos a lógica de predicados para filtrar dados:
- $\forall x$ (Para todo $x$): Equivale a validar uma condição em um laço `for` ou `ALL` no SQL.
- $\exists x$ (Existe algum $x$): Equivale a um `if` que verifica existência ou `EXISTS` no SQL.

---

## 2. Funções e Crescimento

### 2.1 O Conceito de Função
Uma função $f: A \rightarrow B$ associa cada elemento de um conjunto de entrada (domínio) a exatamente um elemento de um conjunto de saída (contradomínio). Na programação, isso é exatamente o que uma **função** ou **método** faz: recebe parâmetros (entrada) e retorna um valor (saída).

### 2.2 Função Afim (1º Grau)
$$f(x) = ax + b$$
- **Aplicação**: Cálculo de custos lineares, conversão de unidades, interpolação simples.
- **Gráfico**: Uma reta. O coeficiente $a$ é a taxa de variação (inclinação).

> 💻 **Prática Interativa:** Explore como os coeficientes $a$ e $b$ alteram o gráfico no arquivo [`funcao_1grau.ggb`](../geogebra/funcao_1grau.ggb).

### 2.3 Função Quadrática (2º Grau)
$$f(x) = ax^2 + bx + c$$
- **Aplicação**: Trajetórias em jogos (física básica), otimização (encontrar o ponto de máximo ou mínimo, como lucro máximo ou custo mínimo).
- **Gráfico**: Uma parábola. O vértice $(x_v, y_v)$ representa o ponto ótimo.

> 💻 **Prática Interativa:** Visualize as raízes e o vértice dinamicamente no arquivo [`funcao_2grau.ggb`](../geogebra/funcao_2grau.ggb).

### 2.4 Crescimento de Algoritmos (Noção de Big O)
Na ciência da computação, usamos funções para medir a eficiência de um algoritmo:
- $O(1)$: Constante (acesso a um array por índice).
- $O(n)$: Linear (varrer uma lista).
- $O(n^2)$: Quadrático (laços aninhados, como Bubble Sort).

---

## 3. Trigonometria Aplicada

### 3.1 O Círculo Trigonométrico
A base para entender movimentos cíclicos, ondas e rotações.
- **Seno ($\sin$)**: Projeção no eixo Y.
- **Cosseno ($\cos$)**: Projeção no eixo X.
- **Tangente ($\tan$)**: Razão entre Seno e Cosseno.

> 💻 **Prática Interativa:** Veja as projeções do seno e cosseno em tempo real no arquivo [`circulo_trigonometrico.ggb`](../geogebra/circulo_trigonometrico.ggb).

### 3.2 Aplicações na Computação
1. **Computação Gráfica e Jogos**: Rotação de objetos em 2D e 3D usa matrizes de rotação baseadas em seno e cosseno.
2. **Processamento de Sinais**: A Transformada de Fourier (base de compressão de áudio MP3 e imagens JPEG) decompõe sinais em somas de funções seno e cosseno.
3. **Inteligência Artificial**: Funções de ativação em redes neurais (como a função *Sigmoid*) têm formato derivado de curvas exponenciais e logísticas, intimamente ligadas ao comportamento assintótico estudado em funções.

---

## 4. Matrizes e Sistemas Lineares

### 4.1 O que é uma Matriz?
Uma matriz é uma tabela retangular de números organizada em linhas e colunas. É a estrutura de dados mais poderosa para representar transformações e grandes volumes de dados.

### 4.2 Operações Básicas
- **Adição**: Soma elemento a elemento (mesmas dimensões).
- **Multiplicação por Escalar**: Multiplica todos os elementos por um número.
- **Multiplicação de Matrizes**: O número de colunas da primeira deve ser igual ao número de linhas da segunda. *Não é comutativa* ($A \times B \neq B \times A$).

> 💻 **Prática Interativa:** Visualize o passo a passo da multiplicação de matrizes no arquivo [`matrizes_operacoes.ggb`](../geogebra/matrizes_operacoes.ggb).

### 4.3 Sistemas Lineares
Um sistema linear pode ser representado na forma matricial $A \cdot X = B$.
- **Aplicação em Computação Gráfica**: Resolver sistemas lineares é essencial para renderização 3D, cálculo de iluminação e interseção de raios (Ray Tracing).
- **Aplicação em Machine Learning**: A Regressão Linear Múltipla e as Redes Neurais resolvem sistemas lineares massivos para encontrar os "pesos" ideais do modelo.

> 💻 **Prática Interativa:** Veja a interpretação geométrica de sistemas lineares (retas concorrentes, paralelas ou coincidentes) no arquivo [`sistemas_lineares.ggb`](../geogebra/sistemas_lineares.ggb).

---

## 5. Exercícios Práticos

| # | Exercício | Conexão com a Computação | Dificuldade |
| :---: | :--- | :--- | :---: |
| 1 | Dados $A = \{2, 4, 6\}$ e $B = \{4, 6, 8\}$, determine $A \cup B$, $A \cap B$ e $A - B$. | Equivale a operações `UNION`, `INTERSECT` e `EXCEPT` no SQL. | ⭐ |
| 2 | Uma função de custo de um servidor é $C(x) = 50 + 0.10x$, onde $x$ é o GB de dados. Qual o custo para 500 GB? | Modelagem de custos em computação em nuvem (Cloud). | ⭐ |
| 3 | Calcule o vértice da parábola $f(x) = -x^2 + 10x$. O que esse ponto representa em um problema de lucro? | Otimização: encontrar o ponto de máximo de uma função. | ⭐⭐ |
| 4 | Dadas as matrizes $A = \begin{pmatrix} 1 & 2 \\ 3 & 4 \end{pmatrix}$ e $B = \begin{pmatrix} 2 & 0 \\ 1 & 2 \end{pmatrix}$, calcule $A \times B$. | Base para transformações geométricas em jogos e visão computacional. | ⭐⭐ |
| 5 | Resolva o sistema linear: $\begin{cases} 2x + y = 5 \\ x - y = 1 \end{cases}$ e interprete geometricamente. | Resolução de restrições em algoritmos de otimização. | ⭐⭐⭐ |

---

## 6. Referências Bibliográficas

- IEZZI, Gelson; MURAKAMI, Carlos. **Fundamentos de Matemática Elementar** (Vols. 1, 3 e 4). São Paulo: Atual, 2013.
- LIPSCHUTZ, Seymour; LIPSON, Marc. **Álgebra Linear**. Porto Alegre: Bookman, 2011. *(Série Schaum - Excelente para matrizes e sistemas)*.
- BURDEN, Richard L.; FAIRES, J. Douglas. **Análise Numérica**. São Paulo: Cengage Learning, 2016. *(Para a ponte entre matemática pura e algoritmos computacionais)*.
- GEOGEBRA. **GeoGebra Classic**. Disponível em: <https://www.geogebra.org/classic>. Acesso em: 2024.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
