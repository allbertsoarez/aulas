# 🦀 OPIDE

## 📌 O que é o OPIDE?
O **OPIDE** é a primeira IDE nativa em Rust construída do zero para a era da Inteligência Artificial. Sua filosofia central é a **IA nativa, não apenas acoplada**: ao contrário de editores que são apenas forks do VS Code com um painel de chat adicionado, o OPIDE é um sistema coeso e compilado (~150k linhas de Rust) que integra um motor de agentes, um sistema de memória biológica (Engram) e inteligência de código em nível de AST (Abstract Syntax Tree). Ele opera com "Zero Electron e Zero concessões", garantindo performance, privacidade absoluta e controle total sobre o fluxo de trabalho.

- **Categoria:** IDE Nativa em Rust com IA, Memória Persistente e Análise AST
- **Plataforma:** Windows / macOS / Linux (via Tauri)
- **Palavras-chave:** OPIDE, Rust, IA Nativa, Engram Memory, Tree-sitter, AST, Open VSX, Sandbox, Privacidade, Multi-agente

---

## ✨ Principais Destaques
- **Sistema de Memória "Engram" (3 Níveis):** Inspirado na biologia, possui um *Buffer Sensorial* (turno atual), *Memória de Trabalho* (sessão atual) e um *Grafo de Longo Prazo* persistente. O agente lembra do que você fez ontem, de suas decisões e do contexto do projeto, sem depender da janela de contexto limitada de um LLM.
- **Inteligência de Código via AST (Tree-sitter):** O OPIDE indexa a estrutura real do código (funções, chamadas, tipos) em 13+ linguagens. Antes de sugerir uma edição, o agente realiza uma "análise de impacto", verificando quais testes ou funções dependentes serão afetados.
- **Orquestração Multi-Agente e Modos de Confiança:** Permite alternar entre agentes especializados (Coder, Researcher, Security) e escolher o nível de autonomia: **Ask** (aprova cada ação), **Auto** (executa leituras, pede aprovação para escritas) ou **Yolo** (execução total sem interrupções).
- **Segurança de 10 Camadas e Open VSX:** Inclui sandbox de execução (QuickJS), criptografia AES-256-GCM para dados sensíveis (PII) e utiliza o registro de extensões **Open VSX**, evitando o *vendor lock-in* e a telemetria do marketplace proprietário da Microsoft.

---

## 🚀 Instalação e Primeiros Passos

Por ser um projeto em estágio inicial e de código aberto, a instalação pode ser feita via compilação local (recomendado para ter a versão mais atual) ou através dos binários pré-compilados (atualmente com foco principal em macOS, com builds Linux/Windows em evolução via Tauri).

**Opção 1: Compilação Local (Recomendada para Desenvolvedores)**
1. Instale os pré-requisitos: **Rust** (1.75+), **Node.js** (18+) e o **Tauri CLI** (`cargo install tauri-cli`).
2. Clone o repositório e instale as dependências:
   ```bash
   git clone https://github.com/openpawz/opide.git
   cd opide
   npm install
   ```
3. Execute o ambiente de desenvolvimento:
   ```bash
   npm run tauri:dev
   ```
   *(A primeira compilação do backend em Rust pode levar alguns minutos; as subsequentes são rápidas).*

**Primeiros Passos:**
1. Na primeira execução, o painel de configuração de provedores aparecerá. Você pode conectar um provedor local (como **Ollama**) ou remoto (OpenAI, Anthropic, etc.).
2. Abra uma pasta de projeto. Observe no painel lateral como o OPIDE inicia a indexação AST e o pipeline de memória.
3. *Dica de fluxo:* Teste o **Modo de Confiança "Ask"** inicialmente. Peça ao agente para explicar uma função complexa. Observe como ele consulta o grafo de chamadas (AST) e recupera memórias de sessões anteriores (Engram) antes de responder, em vez de alucinar.

---

## 📚 Links de Referência

- [Site Oficial e Documentação](https://opide.vercel.app/)
- [Repositório Oficial no GitHub](https://github.com/openpawz/opide)
- [Open VSX (Registro de Extensões Aberto)](https://open-vsx.org/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **OPIDE** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Memória Engram e a Consolidação do Aprendizado (Revisão Espaçada):** O sistema Engram usa curvas de esquecimento (Ebbinghaus) e consolidação ativa para mover informações do "buffer sensorial" para o "grafo de longo prazo". Isso é a definição exata de **revisão espaçada**. Ensine ao aluno que assistir à aula é apenas o "buffer sensorial". Para que o conhecimento (ex: uma fórmula de integração) se torne útil, ele precisa ser revisado e conectado a outros conceitos (o "grafo"), caso contrário, o "decaimento" natural da memória o apagará.
2. **Análise de Impacto (AST) e o Planejamento da Resolução:** Antes de editar um arquivo, o OPIDE verifica o grafo de chamadas para prever o que vai quebrar. Na matemática, o aluno deve fazer uma "análise de impacto mental" antes de manipular uma equação. Exemplo: *"Se eu elevar ambos os lados desta equação ao quadrado para eliminar a raiz, vou criar raízes estranhas que precisarei verificar no final?"*. Planejar as consequências de uma operação algébrica previne erros em cascata.
3. **Modos de Confiança (Ask/Auto/Yolo) e a Autonomia Progressiva:** O OPIDE permite ajustar o quanto o agente pode agir sozinho. O aprendizado do aluno deve seguir essa mesma progressão. No início de um tópico novo, ele deve operar no modo **"Ask"** (verificar cada passo da resolução com o professor ou gabarito). Conforme ganha proficiência, migra para o modo **"Auto"** (confia na sua lógica, mas revisa o resultado final). O modo **"Yolo"** deve ser reservado para o caderno de rascunho, onde a exploração livre, a tentativa de métodos não convencionais e o "errar rápido" são incentivados sem julgamento, liberando a criatividade matemática.
