# 🧠 AnythingLLM (IA Local e Privada)

## 📌 O que é o AnythingLLM?
O **AnythingLLM** é uma aplicação de inteligência artificial completa, de código aberto e focada na privacidade, que permite criar um assistente pessoal semelhante ao ChatGPT, mas que roda inteiramente no seu computador ou servidor. Ele transforma qualquer documento (PDF, TXT, sites) em uma base de conhecimento contextual, permitindo que você "converse" com seus próprios dados. O lema do projeto é claro: *"Pare de alugar sua inteligência. Seja dono dela."*

---

## ✨ Principais Destaques
- **Privacidade Total (Local-First)**: Seus dados e documentos nunca saem do seu dispositivo. Possui motor local nativo (via Lemonade/llama.cpp) e suporte direto a Ollama, LM Studio e dezenas de provedores em nuvem.
- **Ingestão de Documentos Simplificada**: Arraste e solte PDFs, DOCX, TXT ou faça *scraping* de páginas da web para criar bases de conhecimento instantâneas e pesquisáveis.
- **Roteamento Dinâmico de Modelos**: Configure regras para que o sistema escolha automaticamente o melhor modelo (local ou em nuvem) para cada tipo de tarefa, otimizando custo e desempenho.
- **Agentes de IA e Automação**: Construa agentes sem código, agende tarefas recorrentes (cron jobs) e utilize ferramentas integradas (como busca na web) com suporte ao *Model Context Protocol* (MCP).
- **Multiusuário e Escalável**: A versão Docker permite gerenciar múltiplos usuários com permissões granulares, temas personalizados (white-label) e até um widget de chat incorporável para sites.

---

## 🚀 Instalação e Uso

O AnythingLLM oferece flexibilidade total, desde o uso individual simples até implantações corporativas robustas.

### 1. Aplicativo Desktop (Recomendado para Iniciantes)
A maneira mais rápida de começar. É um único arquivo executável, sem dependências complexas de configuração.
- **Compatibilidade**: Windows, macOS e Linux.
- **Como usar**: Baixe o instalador no site oficial, execute-o, escolha seu modelo local (ou deixe o sistema recomendar com base no seu hardware) e comece a fazer upload de documentos imediatamente.

### 2. Auto-hospedagem via Docker (Recomendado para Equipes e Avançados)
Ideal para quem deseja controle total, suporte a múltiplos usuários e integração via API.
- **Pré-requisitos**: Docker e Docker Compose instalados.
- **Comando rápido de implantação**:
  ```bash
  # Baixe e execute o script oficial de instalação Docker
  docker pull mintplexlabs/anythingllm
  # (Consulte a documentação oficial para o docker-compose.yml completo e variáveis de ambiente)
  ```
- **Vantagem**: Permite o uso de bancos de dados vetoriais robustos (como PGVector, Qdrant ou Chroma) e escalabilidade horizontal.

---

## 📚 Links de Referência

- [Site Oficial](https://anythingllm.com/)
- [Repositório no GitHub](https://github.com/Mintplex-Labs/anything-llm)
- [Documentação Oficial e Guia de Auto-hospedagem](https://docs.anythingllm.com/)

---

### 💡 Nota sobre a Metodologia de Estudo
O conceito central do AnythingLLM — **transformar documentos brutos em uma base de conhecimento dialogável e privada** — é uma analogia poderosa para a metodologia de estudo que você está desenvolvendo para temas complexos ou longos (como a matemática).

Você pode aplicar essa lógica ao seu próprio aprendizado ou ao de seus alunos:
1. **Construção da Base (Ingestão)**: Em vez de apenas ler, o aluno "alimenta" seu sistema de estudo com resumos próprios, listas de exercícios resolvidos e anotações de aula.
2. **Diálogo Ativo (Chat com Documentos)**: O estudo deixa de ser passivo. O aluno pode perguntar ao sistema: *"Com base nas minhas anotações da Aula 3, explique este teorema com outras palavras"* ou *"Gere 3 exercícios similares a este que eu acabei de colar"*.
3. **Soberania do Conhecimento**: Assim como o AnythingLLM defende que você não deve "alugar" sua inteligência na nuvem, uma boa metodologia de estudo defende que o aluno não deve apenas "alugar" a explicação do professor ou do livro, mas sim processá-la, reescrevê-la e torná-la sua (o famoso "segundo cérebro").

Utilizar ferramentas como essa para estruturar o próprio material de estudo é um excelente exercício de metacognição e organização do conhecimento.
