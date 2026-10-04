# 🛠️ Prompt Mestre - Organização de Repositórios

Aja como um especialista em Organização de Conhecimento, Curadoria de Conteúdo e Formatação Markdown. 

Sua tarefa é processar a lista bruta de URLs fornecida no final desta mensagem e transformá-la em um documento Markdown estruturado, pronto para ser usado tanto no GitHub quanto no Obsidian.

Siga rigorosamente as seguintes regras de processamento e formatação:

1. DEDUPLICAÇÃO E LIMPEZA:
- Identifique URLs que apontam para o mesmo repositório base (ignorando `/blob/`, `/tree/`, ou arquivos específicos dentro do mesmo repo).
- Mantenha apenas a URL canônica do repositório (ex: `https://github.com/autor/repo`).
- Remova qualquer entrada malformada ou duplicada.

2. CATEGORIZAÇÃO E ORDENAÇÃO:
- Classifique cada repositório em uma das categorias pré-definidas (ou crie uma nova se estritamente necessário, mantendo o padrão em CAIXA ALTA).
- Categorias padrão: CIÊNCIA DE DADOS, FINANÇAS E MATEMÁTICA | DESENVOLVIMENTO WEB E FRONTEND | FERRAMENTAS DE DESENVOLVIMENTO, IDES E GIT | IA, APRENDIZADO DE MÁQUINA E LLMS | OBSIDIAN, ZETTELKASTEN E PKM | OSINT, SEGURANÇA E PRIVACIDADE | PRODUTIVIDADE, UTILITÁRIOS E SISTEMAS OPERACIONAIS | PROJETOS E TUTORIAIS DE PYTHON | RECURSOS, LIVROS E TEMPLATES.
- Dentro de cada categoria, agrupe os itens por **Autor/Organização**.
- Ordene alfabeticamente as Categorias, os Autores e os Repositórios dentro de cada autor.

3. SISTEMA DE PRIORIDADE (CURADORIA):
- Para cada categoria, selecione no máximo 3 repositórios que sejam os mais importantes, fundamentais ou melhores pontos de partida para estudo.
- Marque-os com:
  🏆 **[PRIORIDADE MÁXIMA]**: Ponto de partida essencial.
  🥈 **[PRIORIDADE ALTA]**: Complemento fundamental ou próxima etapa lógica.
  🥉 **[PRIORIDADE MÉDIA]**: Excelente material de referência ou aprofundamento.
- Adicione uma breve justificativa entre parênteses e itálico ao lado da prioridade *(ex: *(A biblioteca padrão-ouro para X)*)*.

4. FORMATAÇÃO MARKDOWN (ESTRITA):
- Inicie com o YAML Frontmatter exato:
  ---
  tags:
    - github
    - repositorio
    - organizacao
    - roteiro-de-estudos
  date: [DATA_ATUAL_NO_FORMATO_DDDD-MM-YYYY]
  ---
- Título principal: `# 📚 CLASSIFICAÇÃO E ORGANIZAÇÃO DE REPOSITÓRIOS (Roteiro de Estudos)`
- Inclua a legenda de prioridade em uma citação (`>`) logo após o título.
- Use `---` (linha horizontal) para separar o cabeçalho da primeira categoria e para separar CADA categoria uma da outra.
- Títulos das categorias em `## 📂 NOME DA CATEGORIA EM CAIXA ALTA`.
- Estrutura de lista hierárquica:
  - **[Nome do Autor/Organização]** (em negrito)
    - [Link formatado com prioridade se aplicável](url) *(justificativa se aplicável)*
- Deixe UMA linha em branco entre cada bloco de Autor/Organização para garantir respiro visual.

5. SAÍDA:
- Forneça APENAS o bloco de código Markdown formatado, sem textos introdutórios ou conclusivos fora do bloco de código.

---
LISTA BRUTA DE URLS PARA PROCESSAR:
[Cole sua lista de URLs aqui, misturando as antigas com as novas. O script irá deduplicar e reorganizar tudo do zero]
