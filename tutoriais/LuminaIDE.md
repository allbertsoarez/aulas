# 💡 Lumina IDE

## 📌 O que é o Lumina?
O **Lumina** é um editor de código moderno, de código aberto e alimentado por inteligência artificial, construído sobre a base do VS Code (via fork do Void Editor). Sua filosofia central é a **soberania total dos dados e a inferência 100% local**: diferentemente de editores que dependem de nuvem, o Lumina permite executar agentes de IA e autocompletar diretamente no hardware do usuário, utilizando `llama.cpp` com aceleração CUDA, Vulkan ou CPU. Ele foi projetado para desenvolvedores que exigem privacidade absoluta, autonomia offline e controle granular sobre como os modelos de IA interagem com seu código, sem telemetria ou retenção de dados.

- **Categoria:** Editor de Código com IA 100% Local e Focado em Privacidade
- **Plataforma:** Windows (Linux e macOS em breve)
- **Palavras-chave:** Lumina IDE, IA Local, Privacidade, llama.cpp, Agente Autônomo, VS Code Fork, Raciocínio Local, Código Aberto

---

## ✨ Principais Destaques
- **Inferência 100% Local Integrada:** Vem com binários do `llama.cpp` e bibliotecas CUDA 13.4 (com fallback para Vulkan/CPU) pré-empacotados, eliminando a necessidade de configurar ambientes Python ou compilar dependências manualmente.
- **Agente de IA Autônomo e Fundamentado:** Capacidade de inspecionar o workspace (`read_file`, `ls_dir`), realizar raciocínio multi-etapas e modificar arquivos diretamente, sem precisar copiar e colar diffs no chat.
- **Suporte a Modelos de Raciocínio (Reasoning):** Detecta automaticamente modelos de "pensamento" (como DeepSeek-R1 ou QwQ) e oferece um *slider* dedicado para controlar o "orçamento de raciocínio" (budget), com suporte a janelas de contexto de até 1 milhão de tokens.
- **Ferramentas Nativas Gratuitas:** Inclui busca na web via DuckDuckGo sem necessidade de chaves de API, além de listagem dinâmica de modelos de provedores remotos (Ollama, OpenRouter, etc.) caso o usuário deseje hibridizar o fluxo.
- **Ecossistema VS Code:** Mantém compatibilidade total com temas, extensões e atalhos de teclado do VS Code, garantindo uma transição suave para quem já está familiarizado com o editor.

---

## 🚀 Instalação e Primeiros Passos

O Lumina é distribuído principalmente como um instalador nativo para Windows, com o objetivo de ser "baixar e usar".

**Opção 1: Instalador Oficial (Windows x64)**
- Acesse a página de [Releases no GitHub](https://github.com/lumina-ide/lumina-source/releases) e baixe o instalador `.exe` mais recente. O instalador já inclui os binários necessários para CPU, Vulkan e CUDA.

**Opção 2: Compilação a partir do Código Fonte**
- Para desenvolvedores que desejam auditar ou modificar o projeto (requer Node.js, Python e ferramentas de build C++):
  ```bash
  git clone https://github.com/lumina-ide/lumina-source.git
  cd lumina-source
  npm install
  npm run buildreact
  # Execute em terminais separados:
  npm run watch
  npm run electron
  ```

**Primeiros Passos:**
1. Abra o Lumina. Na primeira execução, o assistente de configuração permitirá pular a etapa de API remota e focar na configuração local.
2. Vá em **Configurações > IA Local** e selecione um modelo compatível com seu hardware. *Recomendação:* Para máquinas com 16GB de RAM e GPU intermediária (ex: GTX 1660), utilize modelos quantizados em `Q4_K_M` de até 4 bilhões de parâmetros (ex: Gemma 4B ou Qwen 3.5 4B Agentic).
3. Abra um arquivo de código e use o atalho para invocar o agente. Observe como ele lê o contexto do arquivo e propõe alterações com diffs visuais antes de aplicar.
4. *Dica de fluxo:* Ative o botão de "Busca Web" na barra do chat quando precisar que o agente consulte documentação externa sem sair do editor.

---

## 📚 Links de Referência

- [Repositório Oficial no GitHub](https://github.com/lumina-ide/lumina-source)
- [Guia da Base de Código (Lumina Codebase Guide)](https://github.com/lumina-ide/lumina-source/blob/main/LUMINA_CODEBASE_GUIDE.md)
- [Instruções de Compilação (Building)](https://github.com/lumina-ide/lumina-source/blob/main/BUILDING.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Lumina IDE** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Limites de Hardware e a Carga Cognitiva Realista:** O Lumina avisa explicitamente que tentar rodar um modelo de 32B parâmetros em uma máquina com 16GB de RAM travará o sistema. Na matemática, isso é uma analogia perfeita para a **gestão da carga cognitiva**. O aluno não deve tentar resolver uma prova de cálculo avançado se ainda não dominou a álgebra básica (o "hardware" mental não suporta a "carga" do problema). Ensine o aluno a reconhecer seus limites atuais e a fazer o "downscale" do problema: dividi-lo em partes menores e gerenciáveis que seu "sistema" consiga processar sem travar (ansiedade ou bloqueio mental).
2. **O "Budget Slider" de Raciocínio e a Alocação de Esforço:** O Lumina permite ajustar o quanto um modelo deve "pensar" antes de responder. O aluno deve desenvolver um "slider mental" semelhante. Nem todo problema exige uma demonstração formal de 10 linhas (orçamento alto). Alguns exigem apenas uma aplicação direta de fórmula (orçamento baixo). Aprender a calibrar a profundidade do raciocínio de acordo com a complexidade da questão é um sinal de maturidade matemática e evita o desperdício de tempo e energia.
3. **Agente Autônomo com Ferramentas e o Método de Polya:** O agente do Lumina não chuta uma resposta; ele usa ferramentas sequencialmente: *lê o arquivo* → *pesquisa a sintaxe* → *propõe a edição*. Isso espelha o **Método de Resolução de Problemas de Polya**: (1) Compreender o problema, (2) Estabelecer um plano, (3) Executar o plano, (4) Examinar a solução obtida. Incentive o aluno a não pular diretamente para a execução (o "chute"). Ele deve explicitamente "ler o arquivo" (dados do enunciado) e "escolher a ferramenta" (fórmula/teorema) antes de escrever a primeira linha da resolução.
