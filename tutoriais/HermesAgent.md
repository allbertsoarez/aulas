# ☤ Hermes Agent

## 📌 O que é o Hermes Agent?
O **Hermes Agent**, desenvolvido pela Nous Research, é um agente de inteligência artificial de código aberto projetado com um "loop de aprendizado" integrado. Sua filosofia central é ser **"o agente que cresce com você"**: diferentemente de assistentes de IA stateless que esquecem tudo a cada nova sessão, o Hermes possui memória persistente entre sessões, cria e aprimora automaticamente "habilidades" (skills) com base no uso, e pode ser executado de forma isolada e segura em qualquer ambiente, do seu laptop a um servidor na nuvem, usando o modelo de linguagem de sua escolha.

- **Categoria:** Agente de IA Autônomo e Autoaprimorável
- **Plataforma:** Windows / macOS / Linux / Android (Termux)
- **Palavras-chave:** IA Autônoma, Nous Research, Memória Persistente, Ollama, Automação, Código Aberto, Sandbox, CLI

---

## ✨ Principais Destaques
- **Memória Persistente e Criação de Skills:** O agente lembra de projetos anteriores, resume conversas passadas e gera automaticamente scripts ou "skills" reutilizáveis para tarefas complexas que já resolveu, criando um ciclo de melhoria contínua.
- **Agnosticismo de Modelo (BYOM):** Funciona com qualquer provedor de LLM. Você pode usar modelos locais via Ollama, ou conectar-se a OpenAI, Anthropic, OpenRouter ou ao Nous Portal, sem ficar preso a um único ecossistema.
- **Vive Onde Você Está:** Pode ser interagido via interface de terminal (TUI) rica ou conectado a plataformas de mensageria como Telegram, Discord, Slack e WhatsApp através de um gateway unificado.
- **Sandboxing e Delegação Isolada:** Suporta a execução de tarefas em ambientes isolados (Docker, SSH, Modal, Daytona), permitindo que "subagentes" resolvam partes de um problema em paralelo sem poluir o contexto principal ou comprometer a segurança do sistema.

---

## 🚀 Instalação e Primeiros Passos

O Hermes foi projetado para uma instalação de "um clique" (ou um comando), gerenciando automaticamente suas dependências de Python e Node.js.

**Opção 1: Integração Nativa com Ollama (Recomendado para privacidade)**
Se você já usa o Ollama, a integração é instantânea:
```bash
ollama launch hermes
```
*O Ollama configurará automaticamente o endpoint local, baixará o agente e permitirá que você escolha um modelo local (ex: `hermes3` ou `qwen2.5`) como motor principal.*

**Opção 2: Instalação Direta via Terminal (Linux / macOS / WSL2)**
```bash
curl -fsSL https://hermes-agent.nousresearch.com/install.sh | bash
source ~/.bashrc  # ou ~/.zshrc
hermes setup      # Inicia o assistente de configuração
```

**Opção 3: Windows (PowerShell)**
```powershell
iex (irm https://hermes-agent.nousresearch.com/install.ps1)
hermes setup
```

**Primeiros Passos:**
1. Após a instalação, digite `hermes` no terminal para iniciar a interface de chat (TUI).
2. Use o comando `/model` para selecionar seu provedor e modelo preferido.
3. Teste a memória persistente: peça ao agente para "lembrar que estou estudando cálculo diferencial" e, em uma nova sessão (comando `/new`), pergunte "o que eu estou estudando?".
4. *Dica de fluxo:* Use `/skills` para ver as habilidades que o agente já aprendeu ou para criar novas regras personalizadas para o seu fluxo de trabalho.

---

## 📚 Links de Referência

- [Site Oficial e Documentação](https://hermes-agent.nousresearch.com/)
- [Repositório Principal no GitHub](https://github.com/nousresearch/hermes-agent)
- [Guia de Integração com Ollama](https://docs.ollama.com/integrations/hermes)
- [Hermes Desktop (Aplicativo com Interface Gráfica)](https://hermes-agent.nousresearch.com/desktop)
- [Versão Portátil via USB (Comunidade)](https://github.com/techjarves/Hermes-USB-Portable)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Hermes Agent** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Memória Persistente e Criação de "Skills" (Construção de Atalhos Cognitivos):** O Hermes não reinventa a roda a cada sessão; ele salva soluções como "skills" reutilizáveis. O aluno deve fazer o mesmo: ao dominar um tipo de problema (ex: "resolver sistemas lineares por escalonamento"), ele deve criar um "skill" no seu caderno ou Obsidian (um passo a passo padronizado). Nas próximas vezes, ele executa esse "script mental" automaticamente, liberando a memória de trabalho para focar nas peculiaridades do novo problema, não na mecânica básica.
2. **Sandboxing e Subagentes (Decomposição de Contexto):** O Hermes isola tarefas complexas em "subagentes" para evitar que o contexto principal fique sobrecarregado. Em problemas matemáticos longos (ex: uma questão de física que envolve cinemática e depois conservação de energia), o aluno deve usar "subespaços de rascunho". Resolver a parte da cinemática em um canto da folha, isolar o resultado, e só então "chamar o próximo subagente" (a parte da energia). Isso previne a confusão de variáveis e a sobrecarga cognitiva.
3. **Agnosticismo de Modelo (Flexibilidade de Representação):** O Hermes funciona com qualquer LLM, local ou na nuvem. Da mesma forma, o aluno não deve ser dogmático com uma única fonte de explicação. Se a demonstração algébrica do livro (Modelo A) não fez sentido, ele deve ter a flexibilidade de buscar a mesma lógica em um vídeo (Modelo B) ou em uma representação geométrica no GeoGebra (Modelo C). A verdade matemática é a mesma; a "interface" para alcançá-la pode e deve ser trocada até que o clique aconteça.
