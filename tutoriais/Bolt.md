# ⚡ Bolt.diy

## 📌 O que é o Bolt.diy?
O **Bolt.diy** é a versão oficial de código aberto do Bolt.new, um ambiente de desenvolvimento web full-stack impulsionado por IA que roda diretamente no navegador (graças à tecnologia WebContainer). Sua principal inovação é a **agnóstica de modelo**: ele permite que você escolha e alterne livremente entre mais de 22 provedores de LLM (como OpenAI, Anthropic, Ollama, OpenRouter, Gemini, DeepSeek, Groq, LM Studio, etc.) para cada prompt, garantindo que você use a ferramenta certa para o trabalho certo, sem ficar preso a um único ecossistema.

---

## ✨ Principais Destaques
- **Liberdade de Escolha de Modelos:** Configure e alterne entre modelos de nuvem (GPT-4, Claude, Gemini) e modelos locais (via Ollama ou LM Studio) para equilibrar custo, privacidade e desempenho.
- **Desenvolvimento Full-Stack no Navegador:** Graças aos WebContainers, o Bolt.diy executa ambientes Node.js reais diretamente no navegador, permitindo instalar pacotes (npm), rodar servidores de desenvolvimento e visualizar o resultado em tempo real, sem configurar nada na sua máquina.
- **Integrações Avançadas:** Suporte nativo a controle de versão (Git/GitHub), integração com bancos de dados (Supabase), protocolo MCP (Model Context Protocol) para ferramentas externas e implantação com um clique (Vercel, Netlify).
- **Extensibilidade:** Arquitetura modular que permite adicionar facilmente qualquer novo provedor compatível com o Vercel AI SDK.

---

## 🚀 Instalação e Primeiros Passos

O Bolt.diy pode ser executado localmente via Node.js ou de forma isolada via Docker.

### Opção 1: Execução Local (Recomendada para Desenvolvimento)
**Pré-requisitos:** Node.js (versão >= 22.12.0) e `pnpm` (>= 9.15.9).

1. **Clone o repositório e instale as dependências:**
   ```bash
   git clone https://github.com/stackblitz-labs/bolt.diy.git
   cd bolt.diy
   pnpm install
   ```
2. **Configure as Chaves de API (Opcional mas recomendado):**
   Renomeie o arquivo `.env.example` para `.env.local` e adicione suas chaves (ex: `ANTHROPIC_API_KEY=xxx`, `OPENAI_API_KEY=xxx`). *Alternativamente, você pode configurá-las diretamente na interface gráfica em Configurações > Provedores.*
3. **Inicie o servidor de desenvolvimento:**
   ```bash
   pnpm run dev
   ```
   Acesse `http://localhost:5173` no seu navegador.

### Opção 2: Execução via Docker (Ambiente Isolado)
1. Copie o arquivo de ambiente: `cp .env.example .env.local`
2. Construa e inicie o contêiner:
   ```bash
   docker compose --profile development up
   ```

---

## 📚 Links de Referência

- [Repositório no GitHub](https://github.com/stackblitz-labs/bolt.diy)
- [Documentação Oficial](https://stackblitz-labs.github.io/bolt.diy/)

---

### 💡 Nota sobre a Metodologia de Estudo
A filosofia do **Bolt.diy** oferece lições valiosas para a sua metodologia de estudo de temas complexos, especialmente na matemática:

1. **Agnosticismo de Ferramenta (Escolha a Estratégia Certa):** Assim como o Bolt.diy permite trocar de LLM conforme a necessidade (um modelo rápido para rascunho, um modelo de raciocínio profundo para lógica complexa), o aluno de matemática deve aprender a escolher a *estratégia* adequada para cada problema. Nem todo problema exige uma fórmula pesada; às vezes, uma representação visual, uma tabela ou uma estimativa mental é a "ferramenta" mais eficiente.
2. **Feedback Imediato (Live Preview):** O maior poder do Bolt.diy é mostrar o resultado do código instantaneamente. No estudo, isso se traduz em **verificação contínua**. Em vez de resolver 10 linhas de uma equação cegamente e descobrir o erro apenas no final, o aluno deve ser treinado a "visualizar o preview" a cada passo: *"Esta simplificação faz sentido? O sinal está correto?"*. O ciclo de feedback curto é a chave para a correção de rota eficiente.
3. **Ambiente Seguro para Experimentação (Sandbox):** O WebContainer roda em um sandbox isolado, onde o aluno pode "quebrar" o código sem consequências reais. Crie um "espaço de rascunho" mental ou físico para seus alunos, onde eles sejam incentivados a testar conjecturas, fazer suposições erradas e explorar caminhos alternativos sem medo de penalização, transformando o erro em parte natural do processo de descoberta.
