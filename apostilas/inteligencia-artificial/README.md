<div align="center">
  <br><br>
  <h1>🤖 APOSTILA DE INTELIGÊNCIA ARTIFICIAL</h1>
  <h2>Fundamentos, LLMs e Engenharia de Prompt</h2>
  <br>
  <p><strong>Disciplina:</strong> Tópicos Especiais em IA (Complementar)</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Status:</strong> 🟢 Material de Vanguarda / Complementar</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

1. [O que é IA Hoje? (ML, Deep Learning e LLMs)](#1-o-que-é-ia-hoje-ml-deep-learning-e-llms)
2. [Como os LLMs Funcionam: O Conceito de Tokens](#2-como-os-llms-funcionam-o-conceito-de-tokens)
3. [Engenharia de Prompt: A Nova Linguagem de Programação](#3-engenharia-de-prompt-a-nova-linguagem-de-programação)
4. [O que são Agentes de IA e Como Criá-los](#4-o-que-são-agentes-de-ia-e-como-criá-los)
5. [IA e MVP: Acelerando o Desenvolvimento](#5-ia-e-mvp-acelerando-o-desenvolvimento)
6. [Limitações, Alucinações e Ética](#6-limitações-alucinações-e-ética)
7. [Exercícios Práticos](#7-exercícios-práticos)
8. [Referências e Recursos](#8-referências-e-recursos)

---

## 1. O que é IA Hoje? (ML, Deep Learning e LLMs)

A Inteligência Artificial evoluiu rapidamente. Para entender o cenário atual, precisamos diferenciar três conceitos:

- **Machine Learning (ML):** Algoritmos que aprendem padrões a partir de dados (ex: prever o preço de um livro com base em dados históricos).
- **Deep Learning:** Um subcampo do ML que usa Redes Neurais Artificiais com muitas camadas, excelente para imagens, áudio e texto.
- **LLMs (Large Language Models):** Modelos de linguagem de grande escala (como GPT-4, Claude, Gemini). São redes neurais treinadas em trilhões de palavras para prever a próxima palavra em uma sequência, o que resulta em um comportamento que parece "compreensão" e "raciocínio".

> 💡 **Analogia:** Se o ML tradicional é uma calculadora estatística, o LLM é um "motor de inferência" que aprendeu a estrutura da linguagem humana.

---

## 2. Como os LLMs Funcionam: O Conceito de Tokens

Os LLMs **não leem palavras** como nós. Eles leem **Tokens**.

### 2.1 O que é um Token?
Um token é um pedaço de texto. Pode ser uma palavra inteira (`"Python"`), parte de uma palavra (`"Py"`, `"thon"`), ou até um caractere de pontuação.
- **Regra prática:** 1.000 tokens ≈ 750 palavras em inglês (ou ~600-700 em português).

### 2.2 Por que isso importa?
1. **Custo:** As APIs de IA cobram por token (entrada e saída).
2. **Limite de Contexto:** Todo modelo tem um limite máximo de tokens que pode processar de uma vez (ex: 8k, 32k, 128k tokens). Se você colar um livro inteiro, ele será "cortado".
3. **Comportamento Estranho:** Palavras raras ou códigos mal formatados podem ser tokenizados de formas estranhas, afetando a resposta da IA.

---

## 3. Engenharia de Prompt: A Nova Linguagem de Programação

Programar em IA não é escrever sintaxe rígida (como em C ou Python), é **comunicar intenções** de forma clara. Isso se chama Engenharia de Prompt.

### 3.1 A Fórmula de um Bom Prompt (Framework C.R.E.F.)
- **C**ontexto: Quem é a IA e qual é o cenário? *(ex: "Aja como um professor de Banco de Dados...")*
- **R**equisito (Tarefa): O que exatamente ela deve fazer? *(ex: "Explique a diferença entre INNER JOIN e LEFT JOIN...")*
- **E**xemplo (Few-Shot): Dê 1 ou 2 exemplos do formato desejado. *(ex: "Exemplo de saída: Tabela comparativa...")*
- **F**ormato: Como você quer a resposta? *(ex: "Responda em uma tabela Markdown, com no máximo 150 palavras.")*

### 3.2 Dica de Ouro: "Pense Passo a Passo"
Adicionar a frase *"Vamos pensar passo a passo"* ou *"Explique seu raciocínio antes de dar a resposta final"* aumenta drasticamente a precisão da IA em problemas lógicos e matemáticos (técnica conhecida como *Chain of Thought*).

---

## 4. O que são Agentes de IA e Como Criá-los

Um **Chatbot** responde a perguntas. Um **Agente de IA** executa tarefas de forma autônoma usando ferramentas.

### 4.1 A Anatomia de um Agente
1. **Cérebro (LLM):** O modelo que toma as decisões.
2. **Memória:** O histórico da conversa ou um banco de dados externo (RAG - Retrieval-Augmented Generation) para consultar informações.
3. **Ferramentas (Tools):** Capacidade de executar ações reais (ex: buscar na web, executar código Python, consultar um banco de dados SQL).
4. **Planejamento:** A capacidade de dividir uma tarefa complexa em subtarefas.

### 4.2 Como Criar um Agente (Conceitualmente)
Você não precisa programar um do zero. Pode usar um **Prompt de Sistema** robusto (veja o arquivo [`04_template_agente.md`](../../prompts/04_template_agente.md) na pasta de Prompts) que define rigidamente a persona, as ferramentas disponíveis e as regras de não ultrapassar limites.

---

## 5. IA e MVP: Acelerando o Desenvolvimento

Na apostila de Empreendedorismo, aprendemos sobre **MVP (Produto Mínimo Viável)**. A IA é o maior acelerador de MVPs da história.

- **Geração de Código:** Usar o GitHub Copilot ou ChatGPT para criar o esqueleto de um CRUD em Python/SQL em minutos.
- **Design de Banco de Dados:** Pedir à IA: *"Gere o script SQL para um sistema de editora com tabelas de Autores, Livros e Categorias, incluindo chaves estrangeiras"*.
- **Criação de Dados Fictícios:** *"Gere um arquivo CSV com 20 registros de livros, contendo título, autor, ano e preço, para eu usar como teste"*.

> ⚠️ **Atenção:** A IA acelera a criação, mas **você** é o responsável por revisar, testar e garantir que o código é seguro e eficiente.

---

## 6. Limitações, Alucinações e Ética

### 6.1 Alucinação
É quando o modelo gera uma informação que parece plausível e bem escrita, mas é **completamente falsa**. 
- **Causa:** O modelo está prevendo a próxima palavra mais provável, não consultando uma base de fatos.
- **Solução:** Sempre peça para a IA citar fontes, ou use a técnica de RAG (fornecer o texto base para ela resumir, em vez de deixar ela inventar).

### 6.2 Ética e Vieses
- **Privacidade:** Nunca insira dados sensíveis de clientes, senhas ou códigos proprietários da empresa em IAs públicas.
- **Viés:** Os modelos refletem os vieses dos dados em que foram treinados. Sempre mantenha o humano no loop de decisão crítica.

---

## 7. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Use um LLM para explicar o conceito de "Ponteiro em C" como se você tivesse 10 anos de idade. Analise se a analogia faz sentido. | ⭐ |
| 2 | Pegue um código seu que está funcionando, mas bagunçado. Use o prompt [`01_refatoracao_codigo.md`](../../prompts/01_refatoracao_codigo.md) para melhorá-lo. | ⭐⭐ |
| 3 | Crie um Prompt Mestre (usando o framework C.R.E.F.) para transformar uma lista de notas brutas em um relatório estatístico formatado em Markdown. | ⭐⭐ |
| 4 | Peça à IA para gerar um script SQL para o cenário da Editora, mas inclua intencionalmente um erro lógico no seu prompt. Veja se a IA aponta o erro ou o reproduz. | ⭐⭐⭐ |
| 5 | **Desafio:** Configure um "Agente de Revisão" usando o template da pasta de prompts. Peça para ele analisar um texto seu e dar notas de 0 a 10 em: Clareza, Coesão e Objetividade. | ⭐⭐⭐ |

---

## 8. Referências e Recursos

- OPENAI. **Prompt Engineering Guide**. Disponível em: [platform.openai.com/docs/guides/prompt-engineering](https://platform.openai.com/docs/guides/prompt-engineering).
- ANDREJ KARPATY. **Building a Large Language Model (from scratch)**. YouTube, 2024. (Para entender tokens e pesos).
- RUSSEL, Stuart; NORVIG, Peter. **Inteligência Artificial**. Rio de Janeiro: Elsevier, 2013. (A bíblia teórica da IA).
- **Biblioteca de Prompts:** Consulte a pasta [`/prompts`](../../prompts/README.md) deste repositório para templates prontos.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
