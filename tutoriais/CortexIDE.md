# 🧠 Cortex IDE

## 📌 O que é o Cortex IDE?
O **Cortex IDE** é um ambiente de desenvolvimento integrado (IDE) de código aberto, impulsionado por Inteligência Artificial, projetado como uma alternativa ética e focada em privacidade ao Cursor. Sua filosofia central é a soberania dos dados: ele permite o uso de agentes de IA diretamente no seu código, suportando tanto modelos locais (como Ollama ou vLLM) quanto na nuvem, garantindo que suas interações e base de código sejam enviadas diretamente aos provedores escolhidos, sem retenção, monitoramento ou uso para treinamento por parte da própria IDE.

- **Categoria:** IDE com Inteligência Artificial
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** Inteligência Artificial, Programação, LLMs Locais, Privacidade, Código Aberto, Alternativa ao Cursor

---

## ✨ Principais Destaques
- **Privacidade em Primeiro Lugar (Privacy-First):** Diferente de IDEs proprietárias que coletam telemetria agressiva, o Cortex IDE não retém, armazena ou utiliza seu código para treinar modelos. Você tem controle total sobre para onde seus dados vão.
- **Suporte Híbrido a Modelos (Local e Nuvem):** Conecte-se facilmente a provedores de nuvem (OpenAI, Anthropic, DeepSeek, Groq) ou execute modelos de linguagem grandes (LLMs) 100% offline e localmente, garantindo privacidade absoluta e funcionamento sem internet.
- **Agentes de IA e Checkpoints Visuais:** Utilize agentes de IA para refatorar, explicar ou gerar código em toda a base de dados, com a capacidade de criar "checkpoints" e visualizar as alterações propostas (diffs) antes de aplicá-las, mantendo o controle granular do fluxo de trabalho.
- **Ecossistema Familiar do VS Code:** Sendo um fork do projeto Void (que por sua vez é baseado no repositório do VS Code), oferece compatibilidade total com o vasto ecossistema de extensões, atalhos e a interface que milhões de desenvolvedores já conhecem e dominam.

---

## 🚀 Instalação e Primeiros Passos

O Cortex IDE busca ser uma transição suave para quem já utiliza editores modernos, sem sacrificar o controle sobre a IA.

**Opção 1: Aplicativo Desktop (Recomendado)**
- Baixe o instalador nativo para **Windows**, **macOS** ou **Linux** diretamente na página de Releases do GitHub ou no site oficial.

**Primeiros Passos:**
1. Instale e abra o Cortex IDE. Ele já virá com a interface familiar do VS Code.
2. Vá até as **Configurações de Provedor de IA**. Para máxima privacidade, instale o [Ollama](https://ollama.com/) no seu sistema e configure o Cortex IDE para se conectar a ele localmente (ex: modelo `llama3` ou `qwen`). Alternativamente, insira sua chave de API de um provedor de nuvem de sua confiança.
3. Abra um projeto de código existente. Use o atalho de chat (geralmente `Ctrl+L` ou `Cmd+L`) para começar a conversar com a IA sobre seu código.
4. *Dica de fluxo:* Ao pedir uma refatoração, utilize o recurso de visualização de alterações. Revise o "diff" (o que será adicionado ou removido) antes de aceitar, mantendo a autoria e o controle final sobre o código.

---

## 📚 Links de Referência

- [Site Oficial](https://opencortexide.com/)
- [Repositório no GitHub](https://github.com/OpenCortexIDE/cortexide)
- [Guia da Base de Código (Codebase Guide)](https://github.com/OpenCortexIDE/cortexide/blob/main/CORTEXIDE_CODEBASE_GUIDE.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Cortex IDE** oferecem analogias poderosas para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Checkpoints e Visualização de Mudanças (Metacognição e Revisão):** Assim como o Cortex IDE permite visualizar e aprovar alterações de código antes de aplicá-las definitivamente, o aluno de matemática deve ser incentivado a revisar seus "rascunhos mentais" antes de afirmar uma resposta final. Criar o hábito de "visualizar o checkpoint" (reler a lógica, verificar as unidades, estimar se a resposta faz sentido no contexto do problema) previne erros por descuido e fortalece a metacognição (pensar sobre o próprio pensamento).
2. **Modelos Locais vs. Nuvem (Internalização do Conhecimento):** O suporte a LLMs locais (que rodam sem internet) é uma analogia perfeita para o conhecimento internalizado. Quando o aluno domina os fundamentos (tabuada, produtos notáveis, teoremas básicos), ele possui um "modelo local" rápido e confiável no cérebro. Isso o libera da necessidade de "consultar a nuvem" (o livro, a fórmula colada ou o professor) para cada passo trivial, liberando capacidade cognitiva (memória de trabalho) para focar na lógica de alto nível e na resolução de problemas complexos.
3. **Código Aberto e Transparência (Fim da "Caixa Preta"):** O Cortex IDE é aberto, permitindo auditar como a IA funciona. Na matemática, isso se traduz em combater a mentalidade de "fórmula mágica". Incentive seus alunos a sempre perguntar "por quê?" e a buscar a demonstração ou a origem de um conceito. Entender *por que* uma fórmula funciona (o "código-fonte" da matemática) transforma o aluno de um mero operador de regras em um pensador crítico, capaz de adaptar o conhecimento a situações totalmente novas.
