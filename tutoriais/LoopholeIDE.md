# 💻 Loophole Editor (Loophole IDE)

## 📌 O que é o Loophole Editor?
O **Loophole Editor** (ou Loophole IDE) é um editor de código de inteligência artificial, totalmente de código aberto e construído sobre a base do VS Code/Void Editor. Sua filosofia central é a **privacidade por arquitetura e o controle absoluto do desenvolvedor**: diferentemente de editores que enviam seu código para servidores intermediários, o Loophole envia as requisições de IA *diretamente* do seu computador para o provedor escolhido (ou para um modelo local via Ollama/LM Studio). Ele integra a IA no núcleo da experiência de edição, oferecendo modos de agente, autocompletar inteligente e rastreamento de custos, sem telemetria, sem assinaturas obrigatórias e sem "caixas pretas".

- **Categoria:** Editor de Código de IA de Código Aberto e Focado em Privacidade
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** Loophole IDE, Editor de Código, IA Local, Privacidade, VS Code Fork, Agente de IA, MCP, Autocomplete, Ollama

---

## ✨ Principais Destaques
- **Privacidade por Design:** Não há servidor backend do Loophole. Suas requisições e código vão diretamente do seu dispositivo para a API do provedor (ou ficam 100% locais), garantindo que seus dados nunca sejam logados ou intermediados por terceiros.
- **Quatro Modos de Chat Especializados:** 
  1. *Normal:* Conversa geral.
  2. *Gather (Coleta):* A IA lê e pesquisa sua base de código sem modificar nada.
  3. *Plan (Planejamento):* A IA gera um plano em `.md` para você revisar antes de qualquer execução.
  4. *Agent (Agente):* Acesso total a ferramentas para ler, escrever, executar comandos e gerenciar tarefas autonomamente.
- **Autocomplete Otimizado (Fill-In-the-Middle):** O motor de autocompletar usa o contexto antes e depois do cursor para prever exatamente o que falta, com suporte a modelos locais de alta velocidade.
- **Atribuição de Modelos por Recurso:** Você pode configurar um modelo poderoso (ex: Claude 3.5 Sonnet) para o chat de raciocínio e um modelo leve e rápido (ex: um modelo local no Ollama) para o autocompletar, otimizando custo e velocidade.

---

## 🚀 Instalação e Primeiros Passos

O Loophole Editor é distribuído como um aplicativo de desktop, com a familiaridade do VS Code, mas com a IA profundamente integrada.

**Opção 1: Instalação via Binário (Recomendado)**
- Acesse [loopholeeditor.in](https://www.loopholeeditor.in/) e baixe o instalador nativo para Windows, macOS ou Linux.

**Opção 2: Compilação a partir do Código Fonte**
- Para desenvolvedores que desejam auditar ou contribuir:
  ```bash
  git clone https://github.com/loophole-ai/loophole-ide.git
  cd loophole-ide
  npm install
  npm run buildreact
  npm run watch # Em um terminal
  npm run electron # Em outro terminal
  ```

**Primeiros Passos:**
1. Abra o Loophole Editor. Vá nas configurações de IA e adicione sua chave de API (OpenAI, Anthropic, etc.) ou conecte-se ao seu servidor local (Ollama/LM Studio, que são detectados automaticamente).
2. Abra um projeto de código. Use o atalho `Ctrl+K` (ou `Cmd+K` no Mac) para abrir o "Quick Edit" e peça para a IA refatorar um bloco de código.
3. Observe o **Diff Inline**: o Loophole mostrará exatamente o que será alterado (em verde/vermelho). Você deve aceitar ou rejeitar cada mudança explicitamente.
4. *Dica de fluxo:* Explore o modo "Plan" antes de pedir ao agente para refatorar um arquivo grande. Isso força a IA a "pensar antes de agir", gerando um roteiro que você pode validar antes de qualquer alteração no código.

---

## 📚 Links de Referência

- [Site Oficial](https://www.loopholeeditor.in/)
- [Repositório Oficial no GitHub](https://github.com/loophole-ai/loophole-ide)
- [Guia de Contribuição e Código](https://github.com/loophole-ai/loophole-ide/blob/main/CONTRIBUTING.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Loophole Editor** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Os Quatro Modos e as Etapas de Resolução de Problemas (Método de Polya):** O Loophole separa explicitamente as fases de *Gather* (entender o problema/coletar dados), *Plan* (traçar uma estratégia) e *Agent* (executar a solução). Na matemática, incentive o aluno a não misturar essas fases. Antes de calcular (Agente), ele deve dedicar um momento para listar os dados e restrições (Gather) e esboçar o caminho lógico (Plan). Separar o "pensar" do "fazer" reduz drasticamente os erros por impulsividade.
2. **Diff Inline e a Validação Consciente de Cada Passo:** O Loophole nunca aplica uma mudança no código sem mostrar um "diff" (destaque do que muda) e exigir sua aprovação. Na resolução de uma demonstração ou equação, o aluno deve adotar essa mesma postura de "revisor de diff". Cada linha nova escrita no papel deve ser conscientemente validada: *"Esta transformação é válida? A condição de existência foi respeitada?"*. Aceitar cegamente um passo sem revisar é o equivalente a clicar em "Accept All" sem ler o código.
3. **Modelos Locais e a Autonomia Cognitiva:** O Loophole brilha ao permitir o uso de modelos locais (Ollama), sem depender da nuvem. No aprendizado, isso é uma analogia direta para a **internalização**. O aluno não deve depender eternamente de "ferramentas externas" (calculadora para contas básicas, consulta frenética ao livro). Ele precisa "rodar localmente" os fundamentos (tabuada, regras de sinais, identidades básicas) em sua própria mente, garantindo agilidade e autonomia, especialmente em ambientes de avaliação onde a "conexão com a nuvem" não está disponível.
