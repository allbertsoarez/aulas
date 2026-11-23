# 💻 OpenCode

## 📌 O que é o OpenCode?
O **OpenCode** é um agente de codificação de código aberto, projetado para ser altamente extensível e soberano. Sua filosofia central é a **modularidade e a liberdade de escolha**: diferentemente de assistentes de IA fechados que impõem um único modelo e fluxo de trabalho, o OpenCode permite que você conecte qualquer provedor de modelo (de APIs locais via Ollama a provedores de nuvem como NVIDIA Build ou OpenRouter) e, crucialmente, instale "Skills" (habilidades) personalizadas. Essas Skills ensinam o agente a executar fluxos de trabalho específicos, transformando-o de um simples chatbot em um verdadeiro parceiro de desenvolvimento adaptado às suas necessidades.

- **Categoria:** Agente de Codificação de Código Aberto e Extensível
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** OpenCode, Agente de IA, Código Aberto, Skills, NVIDIA, OpenRouter, Ollama, Automação, DeepSeek

---

## ✨ Principais Destaques
- **Sistema de "Skills" (Habilidades):** O maior diferencial do OpenCode. Você pode instalar pacotes de habilidades (como AG Kit ou ECC) que fornecem ao agente instruções, scripts e contextos pré-definidos para tarefas complexas, como criar sistemas de gestão, refatorar código ou realizar auditorias de segurança.
- **Agnóstico a Modelos:** Funciona perfeitamente com modelos locais (via Ollama, para privacidade total) ou com APIs de alto desempenho (NVIDIA Build, OpenRouter, DeepSeek), permitindo que você equilibre custo, velocidade e capacidade de raciocínio.
- **Fluxo de Agente Autônomo:** Capaz de planejar uma tarefa, escrever o código, executar comandos no terminal, ler os erros e iterar até encontrar a solução, tudo com supervisão humana opcional.
- **Ecossistema Aberto:** Total transparência no código, permitindo que a comunidade crie, audite e compartilhe novas Skills, evitando o *vendor lock-in* de plataformas proprietárias.

---

## 🚀 Instalação e Primeiros Passos

O OpenCode é projetado para ser configurado rapidamente, seja para uso local ou integrado a provedores de nuvem.

**Passo 1: Instalação do OpenCode**
- Siga as instruções oficiais em [opencode.ai](https://opencode.ai/) (geralmente via gerenciador de pacotes como `npm` ou instalador nativo).

**Passo 2: Configuração do Modelo (Escolha um)**
- **Opção Local (Privacidade):** Instale o [Ollama](https://ollama.com/) e configure o OpenCode para usar um modelo local (ex: `qwen2.5-coder`).
- **Opção NVIDIA:** Acesse [build.nvidia.com](https://build.nvidia.com/), crie uma conta e gere uma chave de API. Insira essa chave nas configurações do OpenCode.
- **Opção OpenRouter:** Acesse [openrouter.ai](https://openrouter.ai/), crie uma conta, adicione créditos e gere uma chave de API para acessar modelos como DeepSeek ou Claude.

**Passo 3: Instalando "Skills" (O Pulo do Gato)**
Para expandir as capacidades do agente, clone repositórios de Skills para a pasta de configurações do OpenCode:
1. **AG Kit:** `git clone https://github.com/vudovn/ag-kit` (Excelente para fluxos de trabalho ágeis e geração de estruturas de projeto).
2. **ECC (Expert Coding Companion):** `git clone https://github.com/affaan-m/ecc` (Focado em boas práticas, refatoração e revisão de código).
3. Consulte a documentação de cada repositório para vincular a Skill ao arquivo de configuração do OpenCode.

**Primeiros Passos:**
1. Abra o terminal e inicie o OpenCode no seu projeto.
2. Teste uma Skill instalada. Por exemplo: *"Use a Skill do AG Kit para criar a estrutura inicial de um sistema de gestão de frotas em Python"*.
3. *Dica de fluxo:* Comece com tarefas pequenas e observe como o agente planeja e executa. Ajuste o "nível de autonomia" nas configurações conforme ganha confiança.

---

## 📚 Links de Referência

**Oficiais e Provedores de Modelo:**
- [Site Oficial do OpenCode](https://opencode.ai/)
- [Documentação: Agentes e Configuração](https://opencode.ai/docs/agents/)
- [NVIDIA Build (APIs de Modelos)](https://build.nvidia.com/)
- [OpenRouter (Agregador de Modelos)](https://openrouter.ai/)

**Repositórios de Skills (Habilidades):**
- [AG Kit (GitHub)](https://github.com/vudovn/ag-kit) | [Site](https://ag-kit.unikorn.vn/)
- [ECC - Expert Coding Companion (GitHub)](https://github.com/affaan-m/ecc) | [Site](https://ecc.tools/)
- [OpenCode by Anomalyco (GitHub)](https://github.com/anomalyco/opencode)

**Tutoriais e Casos de Uso (YouTube):**
- 📺 [Como Instalar o OpenCode no Linux e Integrar ele ao Ollama](https://youtu.be/v3YZ--biSAU)
- 📺 [OpenCode Grátis ILIMITADO com os Melhores Modelos (NVIDIA + DEEPSEEK)](https://youtu.be/De9bHDWM2zQ)
- 📺 [Criei um Sistema de Gestão de Frotas do ZERO (OpenCode + Skills)](https://youtu.be/WiGFFo_L62E)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **OpenCode** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Sistema de "Skills" e o Repertório de Heurísticas:** No OpenCode, uma "Skill" é um pacote de instruções que ensina o agente a resolver um tipo específico de problema. Na matemática, o aluno precisa construir seu próprio repertório de **heurísticas** (atalhos mentais validados). Ensine-o a identificar gatilhos: *"Se o problema menciona 'taxa de variação', ative a Skill da Derivada"*. Ter um conjunto de habilidades mentais bem definidas é mais eficaz do que tentar improvisar uma solução do zero a cada novo exercício.
2. **Modelo Local (Ollama) vs. Nuvem (NVIDIA/OpenRouter) e a Internalização:** O OpenCode permite usar modelos locais (rápidos, privados, mas com recursos limitados) ou na nuvem (potentes, mas dependentes de conexão). O aprendizado funciona da mesma forma. Os fundamentos (tabuada, regras de sinais, identidades básicas) devem estar "instalados localmente" na memória de longo prazo do aluno, para acesso imediato. Já as técnicas avançadas ou fórmulas complexas podem ser "consultadas na nuvem" (livro, resumo), mas o aluno deve saber *como* e *quando* fazer essa consulta de forma eficiente.
3. **O Loop do Agente (Planejar → Executar → Revisar) e o Método de Polya:** O OpenCode não apenas "cospe" um código; ele planeja a ação, executa, lê o erro do terminal e se corrige. Isso é a personificação digital do **Método de Resolução de Problemas de George Polya**. Incentive o aluno a não pular direto para o cálculo. Ele deve: (1) Entender o problema, (2) Planejar a estratégia (qual fórmula/teorema?), (3) Executar o plano e (4) Revisar (a resposta faz sentido? Há outra maneira de verificar?). Adotar esse loop transforma o erro de uma falha em um degrau do aprendizado.
