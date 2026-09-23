<div align="center">
  <br><br>
  <h1>🏆 PROJETO INTEGRADOR</h1>
  <h2>Desafio Final: Dados, Código e Negócios</h2>
  <br>
  <p><strong>Objetivo:</strong> Unir os conhecimentos de Banco de Dados, Programação, Estatística e Empreendedorismo em uma solução prática e completa.</p>
  <br><br>
</div>

---

## 📖 O Cenário

Você foi contratado como **Analista de Dados e Tecnologia** pela *"Editora Saber"*, uma empresa de médio porte que está enfrentando dificuldades para entender seu próprio mercado. 

O diretor financeiro te entregou um banco de dados com o histórico de livros, autores, categorias e vendas dos últimos 5 anos, mas a empresa não sabe como usar esses dados para tomar decisões. 

**Sua missão:** Analisar os dados, gerar insights estatísticos valiosos e apresentar um plano de ação viável para a diretoria.

---

## 🎯 Fases do Projeto

O projeto deve ser desenvolvido em **4 etapas**, refletindo o fluxo real de trabalho de um profissional de tecnologia.

### Fase 1: Modelagem e Banco de Dados (Peso: 25%)
- Crie o script SQL (`criacao_tabelas.sql`) para o banco de dados da editora, contendo pelo menos: `Autores`, `Categorias`, `Livros` e `Vendas`.
- Inclua relacionamentos 1:N e N:N (ex: um livro pode ter mais de um autor).
- Crie um script (`inserts_iniciais.sql`) com pelo menos **50 registros fictícios** realistas para popular o banco.

### Fase 2: Manipulação e Análise com Python (Peso: 35%)
- Crie um **Notebook Jupyter** (`analise_editora.ipynb`).
- Conecte-se ao banco de dados (ou carregue os dados via CSV exportado) usando a biblioteca `pandas`.
- Realize uma **Análise Exploratória de Dados (EDA)**:
  - Limpeza de dados (tratamento de nulos ou outliers).
2. Cálculo de estatísticas descritivas (média, mediana, desvio padrão de preços e vendas).
  - Identificação de padrões (ex: "Qual categoria tem o maior crescimento anual?").

### Fase 3: Visualização e Insights Estatísticos (Peso: 20%)
- Gere pelo menos **3 visualizações gráficas** (usando `matplotlib` ou `seaborn`) que respondam a perguntas de negócio. Exemplos:
  - Distribuição de preços por categoria (Boxplot).
  - Evolução das vendas ao longo dos anos (Linha de tendência).
  - Correlação entre ano de publicação e preço médio.
- Escreva conclusões claras em Markdown no próprio notebook, explicando o que os gráficos significam para o negócio.

### Fase 4: Empreendedorismo e Pitch (Peso: 20%)
- Com base nos dados, elabore um **Business Model Canvas** simplificado para uma nova iniciativa da editora (ex: "Clube de Assinatura de Clássicos" ou "Foco em E-books de Tecnologia").
- Crie uma apresentação curta (máximo 5 slides em PDF ou link do Canva) simulando um **Pitch** para a diretoria, apresentando:
  1. O problema identificado nos dados.
  2. A solução proposta.
  3. Os dados que sustentam sua decisão.
  4. O próximo passo (MVP).

---

## 📦 Entregáveis

1. **Repositório no GitHub** (pode ser um fork deste repositório ou um novo, mas deve ser público) contendo:
   - Pasta `sql/` com os scripts de criação e população.
   - O Notebook Jupyter (`analise_editora.ipynb`) com toda a análise, códigos e gráficos.
   - O arquivo do Pitch (PDF ou link).
   - Um `README.md` no seu projeto explicando como rodar o código e resumindo as conclusões.
2. **Link do Repositório** enviado na plataforma da disciplina até a data limite.

---

## ✅ Critérios de Avaliação

| Critério | Descrição | Pontuação |
| :--- | :--- | :---: |
| **Qualidade do Código SQL** | Normalização, chaves primárias/estrangeiras corretas, dados coerentes. | 2.5 |
| **Análise em Python** | Uso correto do Pandas, tratamento de erros, código limpo e comentado. | 3.5 |
| **Rigor Estatístico** | Cálculos corretos, escolha adequada dos gráficos, interpretação válida dos dados. | 2.0 |
| **Visão de Negócio (Pitch)** | Clareza na apresentação, viabilidade da proposta, conexão direta com os dados analisados. | 2.0 |
| **Total** | | **10.0** |

---

## 💡 Dicas para o Sucesso

- **Comece pelo Banco de Dados**: Sem dados bons, a análise fica comprometida. Use o cenário da Editora que já estudamos nas apostilas como base.
- **Use a IA com Sabedoria**: Utilize os prompts da pasta [`prompts/`](./prompts/) para ajudar a refatorar seu código Python ou a estruturar seu Pitch, mas **nunca** peça para a IA fazer o projeto inteiro por você. O aprendizado está no processo.
- **Documente Tudo**: Um código bem comentado e um notebook com explicações em Markdown valem tanto quanto o código que funciona.

---

<div align="center">
  <br>
  <p><strong>Boa sorte! Mostre do que você é capaz.</strong></p>
  <br>
  <a href="./README.md">🔙 Voltar para a Apostila Mestra</a> | 
  <a href="./GUIA_DO_ALUNO.md">👋 Ir para o Guia do Aluno</a>
  <br><br>
</div>
