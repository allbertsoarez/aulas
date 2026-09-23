<div align="center">
  <br><br>
  <h1>📊 APOSTILA DE ESTATÍSTICA APLICADA</h1>
  <h2>Do Básico Essencial à Ciência de Dados</h2>
  <br>
  <p><strong>Disciplina:</strong> Estatística Aplicada</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução: Por que Estatística Importa?](#1-introdução-por-que-estatística-importa)
2. [Estatística Descritiva: O Básico Essencial](#2-estatística-descritiva-o-básico-essencial)
3. [Probabilidade e a Distribuição Normal](#3-probabilidade-e-a-distribuição-normal)
4. [Inferência Estatística: Tomando Decisões com Dados](#4-inferência-estatística-tomando-decisões-com-dados)
5. [Correlação e Regressão Linear](#5-correlação-e-regressão-linear)
6. [Estatística na Era do Big Data e Ciência de Dados](#6-estatística-na-era-do-big-data-e-ciência-de-dados)
7. [Exercícios Práticos e Interpretação](#7-exercícios-práticos-e-interpretação)
8. [Referências Bibliográficas](#8-referências-bibliográficas)

---

## 1. Introdução: Por que Estatística Importa?

### 1.1 O Que é Estatística?
Estatística é a ciência de coletar, organizar, analisar, interpretar e apresentar dados. Ela é a "gramática da ciência": sem ela, não conseguimos distinguir um padrão real de uma simples coincidência.

### 1.2 O Mito da "Planilha Mágica"
> ⚠️ **Atenção:** Muitas pessoas acreditam que saber usar o Excel (ou planilhas em geral) significa saber Estatística. **Isso é um mito.**
> 
> Uma planilha é apenas uma calculadora sofisticada. Ela pode calcular uma média ou gerar um gráfico em segundos, mas **ela não sabe se a pergunta que você está fazendo faz sentido**, se os dados estão enviesados ou se a conclusão é válida. A Estatística fornece o *raciocínio*; a planilha (ou o código) fornece apenas o *cálculo*.

### 1.2 População vs. Amostra
- **População:** O conjunto completo de todos os elementos que queremos estudar (Ex: Todos os alunos de uma universidade).
- **Amostra:** Um subconjunto representativo da população, usado para fazer inferências sobre o todo (Ex: 200 alunos selecionados aleatoriamente).

---

## 2. Estatística Descritiva: O Básico Essencial

O objetivo aqui é **resumir** e **descrever** os dados que temos em mãos.

### 2.1 Medidas de Tendência Central (O "Centro" dos Dados)
| Medida | Definição | Quando usar? |
| :--- | :--- | :--- |
| **Média** ($\bar{x}$) | Soma de todos os valores dividida pela quantidade. | Quando os dados são simétricos e não há valores extremos (outliers). |
| **Mediana** | O valor que divide os dados ordenados exatamente ao meio. | Quando há valores extremos (ex: salários, onde um bilionário distorce a média). |
| **Moda** | O valor que aparece com mais frequência. | Para dados categóricos (ex: cor dos olhos, tipo de navegador mais usado). |

### 2.2 Medidas de Dispersão (O "Risco" ou "Ruído")
Saber a média não é suficiente. Precisamos saber o quanto os dados variam em torno dela.
- **Variância ($\sigma^2$ ou $s^2$):** Média dos quadrados das diferenças em relação à média.
- **Desvio Padrão ($\sigma$ ou $s$):** A raiz quadrada da variância. É a medida mais usada, pois está na mesma unidade dos dados originais.
  - *Desvio padrão baixo:* Os dados estão concentrados perto da média (consistente).
  - *Desvio padrão alto:* Os dados estão muito espalhados (volátil/imprevisível).

---

## 3. Probabilidade e a Distribuição Normal

### 3.1 A Distribuição Normal (Gaussiana)
É a distribuição mais importante da estatística. Muitos fenômenos naturais e sociais (altura, QI, erros de medição) seguem esse formato de "sino".

### 3.2 A Regra Empírica (68-95-99.7)
Em uma distribuição normal:
- **~68%** dos dados estão a **1 desvio padrão** da média.
- **~95%** dos dados estão a **2 desvios padrão** da média.
- **~99.7%** dos dados estão a **3 desvios padrão** da média.

> 💡 **Aplicação:** Se um sistema de banco de dados tem um tempo de resposta médio de 100ms com desvio padrão de 10ms, sabemos que 95% das vezes a resposta estará entre 80ms e 120ms.

---

## 4. Inferência Estatística: Tomando Decisões com Dados

Aqui saímos da descrição e passamos a fazer **generalizações** sobre a população com base na amostra.

### 4.1 Teste de Hipóteses
É um método formal para decidir entre duas explicações concorrentes.
- **Hipótese Nula ($H_0$):** A afirmação padrão, de que "nada mudou" ou "não há efeito". (Ex: O novo algoritmo não é mais rápido que o antigo).
- **Hipótese Alternativa ($H_1$):** O que queremos provar. (Ex: O novo algoritmo é mais rápido).

### 4.2 O Valor-P (P-value)
É a probabilidade de obter os resultados observados (ou mais extremos) assumindo que a Hipótese Nula é verdadeira.
- **Regra de ouro:** Se o **p-valor for baixo (geralmente < 0.05)**, a Hipótese Nula deve cair (*"If the p is low, the null must go"*). Rejeitamos $H_0$ e aceitamos $H_1$.

### 4.3 Intervalo de Confiança
Em vez de dar um único número (estimativa pontual), damos um intervalo. Ex: "Temos 95% de confiança de que a média de tempo de carregamento do site está entre 2.1s e 2.5s".

---

## 5. Correlação e Regressão Linear

Fundamental para prever comportamentos e encontrar relações em bancos de dados.

### 5.1 Correlação
Mede a força e a direção da relação linear entre duas variáveis (Coeficiente de Pearson, $r$, varia de -1 a 1).
- $r \approx 1$: Correlação positiva forte.
- $r \approx -1$: Correlação negativa forte.
- $r \approx 0$: Sem correlação linear.

> ⚠️ **ALERTA MÁXIMO:** **Correlação NÃO implica Causalidade.** Só porque duas coisas aumentam juntas (ex: vendas de sorvete e afogamentos no verão), não significa que uma cause a outra. Pode haver uma variável oculta (o calor).

### 5.2 Regressão Linear Simples
Usa a correlação para criar uma equação ($Y = aX + b$) que permite **prever** o valor de uma variável ($Y$) com base em outra ($X$). É a base de muitos algoritmos de Machine Learning.

---

## 6. Estatística na Era do Big Data e Ciência de Dados

Como o que aprendemos aqui se conecta com o mercado de trabalho atual?

### 6.1 A Conexão com Banco de Dados (SQL)
Muitas operações estatísticas são feitas diretamente no banco de dados antes da análise:
- `COUNT()`, `AVG()`, `MIN()`, `MAX()` são **Estatística Descritiva**.
- `GROUP BY` é a base para comparar **médias entre diferentes categorias**.

### 6.2 Por que o Excel não é suficiente para Big Data?
1. **Limite de Linhas:** O Excel trava com ~1 milhão de linhas. Big Data lida com bilhões.
2. **Reprodutibilidade:** Clicar em botões do Excel não deixa um "rastro" do que foi feito. Em programação, o código é o registro exato da análise.
3. **Automação:** Análises estatísticas em código podem ser agendadas para rodar sozinhas todos os dias.

### 6.3 O Ecossistema Moderno de Ferramentas (Para se aprofundar)
O aluno não precisa dominar isso agora, mas deve saber que estes caminhos existem:
- **Python (Pandas, NumPy, SciPy, Scikit-learn):** A linguagem dominante para manipulação de dados e estatística aplicada. O `pandas` é essencialmente um "Excel superpoderoso" via código.
- **R:** Uma linguagem criada *especificamente* por estatísticos para estatística. Excelente para visualização (ggplot2) e testes complexos.
- **SQL Avançado:** Para agregação e preparação de dados em larga escala.
- **Ferramentas de BI (Power BI, Tableau):** Para a *visualização* final dos insights estatísticos para tomadores de decisão.

> 🎯 **Mensagem Final:** Aprenda a lógica estatística (esta apostila). A sintaxe do Python ou do R você aprende em algumas semanas. Mas sem a lógica, você será apenas um "apertador de botões" que gera gráficos bonitos, porém enganosos.

---

## 7. Exercícios Práticos e Interpretação

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Dado o conjunto de dados: `[10, 12, 12, 15, 18, 20, 50]`. Calcule a média e a mediana. Qual medida representa melhor o "centro" desses dados e por quê? | ⭐ |
| 2 | Um teste A/B em um site mostrou que a nova versão teve uma taxa de conversão maior, com **p-valor = 0.03**. O que você conclui sobre a Hipótese Nula? | ⭐⭐ |
| 3 | Explique com suas palavras, dando um exemplo do mundo da tecnologia, por que "Correlação não é Causalidade". | ⭐⭐ |
| 4 | Se o tempo médio de resposta de um servidor é 200ms com desvio padrão de 20ms (distribuição normal), qual a faixa de tempo que abrange aproximadamente 95% das requisições? | ⭐⭐ |
| 5 | Pesquise e descreva brevemente o que é a biblioteca `Pandas` em Python e qual problema ela resolve em relação ao uso de planilhas tradicionais. | ⭐⭐⭐ |

*(Dica para o Ex. 4: Use a Regra Empírica. Média $\pm$ 2 Desvios Padrão = $200 \pm 40$. Resposta: entre 160ms e 240ms).*

---

## 8. Referências Bibliográficas

- TRIOLA, Mario F. **Introdução à Estatística**. Rio de Janeiro: LTC, 2017.
- DOWNING, Douglas; CLARK, Jeffrey. **Estatística Aplicada**. São Paulo: Saraiva, 2010.
- MCKINNEY, Wes. **Python para Análise de Dados**. São Paulo: Novatec, 2018. *(Leitura complementar sobre Pandas)*.
- PROVOST, Foster; FAWCETT, Tom. **Data Science para Negócios**. São Paulo: Novatec, 2014.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
