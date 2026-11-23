# 🏛️ Odysseus AI

## 📌 O que é o Odysseus AI?
O **Odysseus AI** é um espaço de trabalho de inteligência artificial completo, de código aberto (AGPL-3.0) e projetado para ser auto-hospedado. Sua filosofia central é a **soberania dos dados e a experiência local sem concessões**: diferentemente de ferramentas que enviam seus dados para a nuvem, o Odysseus roda inteiramente na sua máquina (ou servidor local), conectando-se a modelos locais (via Ollama, llama.cpp) ou APIs de sua escolha. Ele evoluiu de um simples chat para um ecossistema robusto que inclui agentes autônomos, pesquisa profunda, gerenciamento de e-mail, calendário e um sistema de memória persistente, tudo sem telemetria ou "cavalos de Troia" corporativos.

- **Categoria:** Espaço de Trabalho de IA Auto-hospedado e Local-First
- **Plataforma:** Windows / macOS / Linux (via Docker ou Instaladores Nativos)
- **Palavras-chave:** Odysseus AI, Auto-hospedado, IA Local, Privacidade, Agentes, MCP, Deep Research, Docker, Open Source, AGPL-3.0

---

## ✨ Principais Destaques
- **Agentes Autônomos e Ferramentas (MCP):** Vai além do chat passivo. Os agentes podem planejar tarefas, executar comandos no terminal, ler/escrever arquivos, buscar na web e usar sua memória de longo prazo (baseada em ChromaDB) para resolver problemas complexos de forma autônoma, sempre sob seus portões de aprovação.
- **Deep Research (Pesquisa Profunda):** Capacidade de realizar pesquisas web em múltiplas etapas. O agente busca, lê as fontes, sintetiza as informações e gera um relatório completo com citações, tudo em uma única execução.
- **Cookbook Inteligente:** Um guia integrado que escaneia seu hardware (CPU/GPU/VRAM) e recomenda o modelo exato que sua máquina pode rodar com eficiência, facilitando o download e a configuração com um clique.
- **Funcionalidades de Produtividade Integradas:** Inclui editor de documentos com assistência de IA, caixa de entrada de e-mail (IMAP/SMTP) com triagem e resumos automáticos, sistema de notas/tarefas e sincronização de calendário (CalDAV), transformando-o em um verdadeiro "segundo cérebro" operacional.

---

## 🚀 Instalação e Primeiros Passos

A maneira mais robusta e recomendada de executar o Odysseus é através do Docker, que garante que todas as dependências (incluindo bancos de dados vetoriais e motores de busca como o SearXNG) sejam configuradas corretamente.

**Passo 1: Pré-requisitos**
- Tenha o **Docker** e o **Docker Compose** instalados no seu sistema.
- (Opcional, mas recomendado) Tenha o **Ollama** rodando localmente se desejar usar modelos sem depender de APIs externas.

**Passo 2: Instalação via Docker Compose**
1. Abra seu terminal e clone o repositório oficial:
   ```bash
   git clone https://github.com/odysseus-dev/odysseus.git
   cd odysseus
   ```
2. Copie o arquivo de exemplo de variáveis de ambiente:
   ```bash
   cp .env.example .env
   ```
3. Inicie os contêineres (a primeira execução pode levar alguns minutos para baixar as imagens):
   ```bash
   docker compose up -d --build
   ```

**Passo 3: Primeiros Passos**
1. Acesse `http://localhost:7011` no seu navegador.
2. Para encontrar a senha de administrador inicial, verifique os logs do contêiner:
   ```bash
   docker compose logs odysseus
   ```
3. *Dica de fluxo:* Vá até a aba "Cookbook" para conectar seu backend local (ex: `http://host.docker.internal:11434` para Ollama) e baixe um modelo leve (como `qwen2.5:7b` ou `gemma2:9b`) para testar o chat e os agentes com total privacidade.

---

## 📚 Links de Referência

- [Site Oficial e Guia de Instalação](https://odysseusai.dev/)
- [Repositório Oficial no GitHub](https://github.com/odysseus-dev/odysseus)
- [Documentação Oficial e Guia de Configuração](https://odysseus-dev.github.io/odysseus/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Odysseus AI** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Deep Research e a Decomposição de Problemas Complexos:** O recurso de "Pesquisa Profunda" do Odysseus não tenta adivinhar a resposta; ele divide a tarefa em etapas: buscar, ler fontes, sintetizar e citar. Na matemática, problemas de alto nível (como os de olimpíadas ou vestibulares) exigem a mesma abordagem. Ensine o aluno a não buscar a "fórmula mágica" instantânea, mas a decompor o problema: *"Quais são os dados? Qual teorema se aplica aqui? Vou resolver esta parte primeiro e depois substituir na equação principal"*. A decomposição sistemática é a chave para a resolução confiável.
2. **O Modo "Compare" e a Validação por Múltiplas Abordagens:** O Odysseus permite enviar o mesmo prompt para vários modelos e comparar as respostas lado a lado. No estudo, incentive o aluno a adotar o "modo comparar". Ao resolver um problema, ele deve tentar validá-lo usando uma segunda abordagem (ex: se resolveu algebricamente, verifique graficamente ou por substituição numérica). Se duas "fontes" independentes chegarem ao mesmo resultado, a confiança na resposta (e a compreensão do conceito) aumenta exponencialmente.
3. **Memória Persistente e a Construção Cumulativa do Conhecimento:** O Odysseus usa um banco de dados vetorial para lembrar do contexto entre as sessões, tornando-se mais útil com o tempo. O aprendizado humano funciona exatamente assim (revisão espaçada e construção de esquemas). O aluno não deve tratar cada aula como um evento isolado. Ele deve conectar ativamente o novo conceito (ex: "Derivadas") às memórias persistentes de conceitos anteriores (ex: "Taxa de Variação" e "Retas Tangentes"), fortalecendo a rede neural do conhecimento a cada sessão de estudo.
