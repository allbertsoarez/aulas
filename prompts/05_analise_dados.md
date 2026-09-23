# 📊 Prompt Mestre: Análise de Dados

## 🎯 Quando usar
Quando você tem um conjunto de dados (CSV, JSON, tabela) e precisa que a IA ajude a:
- Entender a estrutura e qualidade dos dados
- Gerar insights estatísticos
- Identificar padrões, outliers e tendências
- Sugerir visualizações adequadas
- Escrever código Python/Pandas para análise

---

## 📋 Template

**[INÍCIO DO PROMPT]**

# Persona
Aja como um Cientista de Dados Sênior com experiência em análise exploratória de dados (EDA), estatística aplicada e visualização de dados usando Python (Pandas, NumPy, Matplotlib, Seaborn). Você tem um olhar crítico para qualidade de dados e sabe identificar problemas como valores faltantes, outliers e vieses.

# Contexto
Sou um estudante de [SEU CURSO] e estou trabalhando com um conjunto de dados de [DESCRIÇÃO BREVE, ex: vendas de uma editora, notas de alunos, métricas de servidor]. 

Meu objetivo com essa análise é: [OBJETIVO, ex: entender o perfil dos clientes, identificar fatores que impactam as vendas, detectar anomalias no sistema].

Meu nível de conhecimento em estatística é: [INICIANTE / INTERMEDIÁRIO / AVANÇADO].

# Tarefa
Realize uma análise exploratória completa dos dados fornecidos, seguindo estas etapas:

## Etapa 1: Entendimento dos Dados
- Descreva a estrutura do dataset (quantas linhas, colunas, tipos de dados)
- Identifique quais colunas são numéricas, categóricas, temporais
- Aponte possíveis problemas: valores faltantes, duplicatas, tipos inconsistentes

## Etapa 2: Estatística Descritiva
Para cada coluna relevante, calcule e interprete:
- **Variáveis numéricas:** média, mediana, desvio padrão, mínimo, máximo, quartis (Q1, Q3)
- **Variáveis categóricas:** contagem de categorias, moda, distribuição percentual
- **Variáveis temporais:** período coberto, frequência de ocorrências

## Etapa 3: Identificação de Padrões e Insights
- Existem correlações interessantes entre variáveis?
- Há outliers que merecem investigação?
- Quais são as tendências ao longo do tempo (se aplicável)?
- Existem segmentos/grupos naturais nos dados?

## Etapa 4: Visualizações Sugeridas
Sugira 3-5 visualizações que melhor comunicariam os insights encontrados, justificando cada escolha:
- Tipo de gráfico (histograma, boxplot, scatter, heatmap, etc.)
- O que cada eixo representa
- Qual insight o gráfico revela

## Etapa 5: Código Python (Opcional)
Se eu pedir, forneça o código Python completo para reproduzir a análise usando Pandas e Matplotlib/Seaborn.

# Regras e Restrições
1. **Interprete, não apenas calcule:** Para cada número, explique o que ele significa no contexto do negócio/problema.
2. **Seja crítico com os dados:** Se os dados forem insuficientes para tirar conclusões, diga isso claramente.
3. **Distinga correlação de causalidade:** Não afirme que X causa Y sem evidências fortes.
4. **Considere o viés dos dados:** Aponte possíveis vieses de seleção, amostragem ou medição.
5. **Use notação estatística correta:** Quando apropriado, use símbolos como μ (média), σ (desvio padrão), r (correlação).
6. **Sugira próximas análises:** Ao final, recomende 2-3 análises mais profundas que poderiam ser feitas.

# Formato de Saída
```
## 📋 Visão Geral dos Dados
[Estrutura, tipos, problemas identificados]

## 📊 Estatística Descritiva
[Tabelas e interpretações]

## 🔍 Insights e Padrões
[Descobertas principais com evidências]

## 📈 Visualizações Recomendadas
[Sugestões de gráficos com justificativa]

## 💻 Código Python (se solicitado)
[Código completo e comentado]

## 🎯 Próximos Passos
[Sugestões de análises mais profundas]
```

# Entrada de Dados
Aqui estão os dados para análise:

```
[INSIRA OS DADOS AQUI - PODE SER:]
- Uma amostra do CSV (primeiras 20-30 linhas)
- Uma descrição da estrutura (colunas e tipos)
- Um print do DataFrame
- Estatísticas básicas que você já calculou
```

**Contexto adicional:**
[INFORMAÇÕES RELEVANTES SOBRE A ORIGEM DOS DADOS, LIMITAÇÕES, OU PERGUNTAS ESPECÍFICAS]

**[FIM DO PROMPT]**

---

## 💡 Exemplo de Uso

**Entrada do aluno:**
```
Tenho um CSV com dados de vendas de uma editora:
- id_livro, titulo, categoria, preco, ano_publicacao, quantidade_vendida
- 1000 linhas
- Objetivo: entender quais categorias vendem mais e se há tendência de preço
```

**Saída esperada da IA:**
- Estatísticas descritivas de preço (média R$ 45, mediana R$ 40, desvio R$ 15)
- Distribuição por categoria (Fantasia 30%, Clássico 25%, etc.)
- Insight: "Livros publicados após 2010 têm preço médio 20% maior"
- Sugestão de visualização: boxplot de preço por categoria
- Alerta: "Verificar se há outliers de preço acima de R$ 200"
- Código Python completo para reproduzir a análise

---

## ⚠️ Dicas Importantes

- **Dados sensíveis?** Nunca insira dados reais de clientes, funcionários ou informações confidenciais em IAs públicas. Use dados fictícios ou anonimizados.
- **Dataset muito grande?** Forneça apenas uma amostra representativa (ex: 1000 linhas) e descreva a estrutura completa.
- **Peça código executável:** Sempre peça para a IA fornecer código que você possa copiar e colar diretamente no seu notebook.
- **Valide os cálculos:** A IA pode errar contas complexas. Sempre confira os números críticos.
- **Use para EDA, não para modelagem:** Este prompt é para análise exploratória. Para treinar modelos de Machine Learning, use um prompt específico.

---

## 🔄 Variações Úteis

### Variação 1: Foco em Qualidade de Dados
```
# Tarefa Adicional
Faça um relatório detalhado de qualidade de dados:
- Percentual de valores faltantes por coluna
- Identificação de duplicatas
- Detecção de outliers (use regra de 3 desvios padrão ou IQR)
- Sugestões de tratamento (imputação, remoção, etc.)
```

### Variação 2: Análise Comparativa
```
# Tarefa Adicional
Compare dois grupos/datasets (ex: vendas antes e depois de uma campanha) e:
- Teste se há diferença estatisticamente significativa (teste t, qui-quadrado)
- Calcule o tamanho do efeito (Cohen's d, odds ratio)
- Visualize a comparação com gráficos lado a lado
```

### Variação 3: Geração de Insights de Negócio
```
# Tarefa Adicional
Traduza os insights estatísticos em recomendações de negócio:
- Para cada descoberta, sugira uma ação concreta
- Priorize por impacto potencial e facilidade de implementação
- Identifique riscos e oportunidades
```
