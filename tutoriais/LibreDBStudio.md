# 🗄️ LibreDB Studio

## 📌 O que é o LibreDB Studio?
O **LibreDB Studio** é um ambiente de desenvolvimento integrado (IDE) para bancos de dados, de código aberto e licenciado sob MIT, que roda diretamente no navegador. Sua filosofia central é revolucionária: **"A ferramenta vai até os dados, e não o contrário"**. Em vez de instalar clientes de desktop pesados e configurados individualmente em cada laptop (com túneis SSH e portas expostas), o LibreDB Studio é implantado como um contêiner ou serviço *ao lado* do banco de dados, na mesma rede. Ele oferece uma interface unificada para mais de 40 motores (de PostgreSQL e MySQL a MongoDB, Redis, DuckDB e ClickHouse), com recursos profissionais como diagramas ER, auditoria, SSO e assistência de IA, sem restrições de uso corporativo ou "paywalls".

- **Categoria:** IDE de Banco de Dados Unificada e Baseada na Web (Código Aberto)
- **Plataforma:** Web (Docker, Node.js, Helm) / Multiplataforma via Navegador
- **Palavras-chave:** SQL, NoSQL, PostgreSQL, MySQL, MongoDB, Redis, DuckDB, Código Aberto, MIT, ER Diagrams, AI Assistant, Auditoria

---

## ✨ Principais Destaques
- **Suporte a 40+ Motores em Uma Só Interface:** Gerencie bancos relacionais (PostgreSQL, MySQL, Oracle, SQL Server, SQLite, DuckDB), NoSQL (MongoDB, Redis, Couchbase), analíticos (ClickHouse, Druid) e até sistemas de mensagens (Kafka, RabbitMQ) no mesmo local.
- **Editor SQL Profissional (Monaco):** Baseado no mesmo motor do VS Code, com autocompletar ciente do esquema (tabelas e colunas), formatação e execução rápida (`Cmd/Ctrl + Enter`).
- **Visual EXPLAIN e Diagramas ER:** Gera planos de execução gráfica de consultas para identificar gargalos de desempenho e cria diagramas de entidade-relacionamento interativos a partir das chaves estrangeiras do banco, exportáveis em SVG/PNG.
- **Agente de IA com Auditoria e "Read-Only":** Permite fazer perguntas em linguagem natural (ex: "qual departamento tem mais funcionários?"). O agente gera a SQL, executa em modo *somente leitura* (com limites de segurança) e gera um relatório onde cada afirmação cita a fonte dos dados. Suporta OpenAI, Gemini ou modelos locais via Ollama.
- **Segurança e Transparência Total:** Licenciado sob MIT, sem telemetria, com suporte a SSO (OIDC), trilhas de auditoria e a garantia de que os dados nunca saem da sua infraestrutura.

---

## 🚀 Instalação e Primeiros Passos

O LibreDB Studio é projetado para ser implantado como infraestrutura, com opções que vão desde um comando único até integrações empresariais.

**Opção 1: Docker (Recomendado para teste rápido e produção)**
- Execute o seguinte comando no seu terminal (requer Docker instalado):
  ```bash
  docker run -p 3000:3000 ghcr.io/libredb/libredb-studio:latest
  ```
- Acesse `http://localhost:3000`. Na primeira execução, a senha de administrador será exibida no log do terminal (configuração zero).

**Opção 2: Node.js (Sem Docker)**
- Se tiver o Node.js 24+ instalado, basta rodar:
  ```bash
  npx @libredb/studio
  ```

**Primeiros Passos:**
1. Acesse a interface no navegador e faça login com a senha gerada.
2. Clique em **"New Connection"** e selecione o motor do seu banco de dados (ex: PostgreSQL).
3. Insira as credenciais (o Studio se conectará diretamente ao banco na rede local, sem expor nada à internet).
4. *Dica de fluxo:* Abra uma nova aba de consulta, digite `SELECT` e observe o autocompletar inteligente sugerindo suas tabelas. Clique no botão "ER Diagram" para visualizar instantaneamente as relações entre suas tabelas.

---

## 📚 Links de Referência

- [Site Oficial](https://libredb.org/)
- [Repositório Oficial no GitHub](https://github.com/libredb/libredb-studio)
- [Documentação e Opções de Instalação (Helm, Kubernetes, etc.)](https://libredb.org/docs)
- [Demo Pública (Para testes sem instalação)](https://trial.libredb.org/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **LibreDB Studio** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **"A Ferramenta Vai Até os Dados" e a Internalização do Conhecimento:** O LibreDB Studio rompe com a ideia de trazer os dados para a máquina do usuário; ele vai até onde os dados estão. Na aprendizagem, isso é uma analogia poderosa para a **internalização**. O aluno não deve depender de trazer o "mundo externo" para a prova (celular, consulta frenética ao livro). Ele deve "implantar" o conhecimento localmente em sua própria mente, de modo que a resposta esteja acessível na rede neural local, sem dependência de conexão externa.
2. **Visual EXPLAIN e o "Plano de Execução" da Resolução:** Antes de rodar uma query complexa, o EXPLAIN mostra exatamente como o banco de dados vai processá-la (quais índices usar, a ordem dos joins). Na matemática, incentive o aluno a criar um "Visual EXPLAIN" mental antes de calcular: *"Primeiro, vou isolar o X. Segundo, vou aplicar a fórmula de Bhaskara. Terceiro, vou verificar as condições de existência"*. Planejar a execução antes de agir previne erros de percurso e desperdício de tempo.
3. **Agente de IA com Auditoria e a Justificativa de Cada Passo:** O agente do LibreDB não apenas "chuta" uma resposta; ele executa, verifica e *cita a fonte* de cada afirmação em um relatório auditável. Na resolução de problemas, o aluno deve adotar essa mesma postura de "auditoria rigorosa". Não basta escrever o resultado final. Cada linha da demonstração deve ter uma "citação de fonte" clara (ex: "pela Propriedade Distributiva", "conforme o Teorema de Tales"). Se um passo não pode ser justificado ou auditado, ele não deve ser escrito. Isso elimina os "pulos lógicos" e o "é óbvio que" que tanto prejudicam o aprendizado.
