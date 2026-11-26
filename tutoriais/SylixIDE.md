# ⚡ Sylix IDE

## 📌 O que é o Sylix IDE?
O **Sylix** é um editor de código com Inteligência Artificial de nova geração, construído do zero em Rust. Sua filosofia central é a **privacidade local-first, a performance extrema e o controle total do usuário**: diferentemente de editores baseados em Electron que pesam gigabytes e enviam seu código para nuvens de terceiros, o Sylix pesa menos de 35MB, indexa seu projeto localmente e permite que você use suas próprias chaves de API (ou modelos locais), garantindo que seus dados e sua lógica de programação permaneçam sob seu domínio absoluto.

- **Categoria:** Editor de Código com IA Local-First, Leve e Construído em Rust
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** Sylix IDE, Editor de Código, IA Local, Rust, BYOK, AST Parsing, Verificação de Código, Privacidade, Leveza

---

## ✨ Principais Destaques
- **Context Engine (Motor de Contexto Local):** Utiliza parsing de AST (Árvore de Sintaxe Abstrata) nativo em Rust e embeddings locais para indexar todo o seu projeto. A IA entende a estrutura e as dependências do seu código, não apenas o arquivo aberto no momento.
- **Verify Loop (Ciclo de Verificação):** Quando a IA sugere ou escreve código, o Sylix pode executar testes automaticamente para verificar se a alteração funciona. Se algo quebrar, o sistema alerta *antes* que você aceite a mudança.
- **BYOK (Bring Your Own Key):** Suporte a mais de 120 provedores de IA (OpenAI, Anthropic, Gemini, Ollama, etc.). Você traz sua própria chave de API, controlando seus custos e evitando o *vendor lock-in* de assinaturas caras.
- **SafeZone (Ambiente Isolado):** Cria um "worktree" isolado para testar as alterações sugeridas pela IA. Seu branch principal permanece limpo e seguro, permitindo que você revise as mudanças com tranquilidade antes de mesclá-las.
- **Performance e Leveza:** Construído em Rust, sem o overhead do Electron. Inicialização instantânea, consumo mínimo de RAM e resposta fluida, mesmo em projetos grandes.

---

## 🚀 Instalação e Primeiros Passos

O Sylix é distribuído como um binário leve e portátil, com instaladores nativos para os principais sistemas operacionais.

**Passo 1: Download**
- Acesse [sylixide.com](https://sylixide.com/) e baixe a versão para o seu sistema operacional (Linux, Windows ou macOS). O instalador tem menos de 35MB.

**Passo 2: Configuração Inicial**
1. Ao abrir o Sylix, ele oferecerá a importação automática de temas, atalhos de teclado e configurações do VS Code, Cursor ou Zed, tornando a transição indolor.
2. Vá até as configurações de IA e insira sua chave de API preferida (ex: OpenAI, Anthropic) ou configure um endpoint local (como Ollama) para privacidade total.

**Passo 3: Primeiros Passos no Fluxo de Trabalho**
1. Abra uma pasta de projeto. Observe como o "Context Engine" começa a indexar os arquivos em segundo plano (indicado por um ícone discreto).
2. Faça uma pergunta ao assistente de IA sobre o projeto: *"Onde está a função que calcula o imposto?"*. Graças ao AST local, ele encontrará a referência exata, mesmo que esteja em outro arquivo.
3. *Dica de fluxo:* Ao pedir para a IA refatorar um bloco de código, ative o modo **SafeZone**. O Sylix aplicará a mudança em um ambiente de teste isolado, executará os testes (se configurados) e só mostrará o resultado para sua aprovação final, mantendo seu trabalho principal 100% seguro.

---

## 📚 Links de Referência

- [Site Oficial](https://sylixide.com/)
- [Repositório Oficial no GitHub](https://github.com/Curly-09/sylix)
- [Documentação de Recursos e Configuração](https://sylixide.com/features)
- [Comunidade no Discord](https://discord.com/invite/f94g5hAFtJ)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Sylix IDE** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Context Engine (AST) e a Visão Sistêmica do Problema:** O Sylix não olha apenas para a linha de código atual; ele analisa a Árvore de Sintaxe Abstrata de todo o projeto para entender as dependências. Na matemática, o aluno não deve olhar para uma equação isolada. Ele deve ser treinado a fazer uma "análise de contexto": *"Esta variável $x$ foi definida como positiva no início do problema? Esta fórmula depende de uma condição que foi satisfeita três passos atrás?"*. Entender o sistema como um todo previne erros de premissa.
2. **Verify Loop e a Cultura da Verificação Obrigatória:** O Sylix roda testes automaticamente antes de aceitar o código da IA. Este é o equivalente digital perfeito da **verificação da resposta** na matemática. Ensine o aluno que a resolução não termina quando ele encontra um valor para $x$. O "Verify Loop" mental exige: *"Se eu substituir este valor na equação original, a igualdade se mantém? A unidade de medida faz sentido no contexto do problema?"*. Tornar a verificação um passo automático e não negociável elimina erros bobos em provas.
3. **SafeZone e o Valor do "Rascunho Estratégico":** O SafeZone permite testar mudanças arriscadas sem corromper o código principal. No estudo, o aluno deve dominar a arte do **rascunho estratégico**. Diante de um problema complexo, ele não deve tentar a manipulação algébrica arriscada diretamente na linha de resposta final. Ele deve isolar essa tentativa no "SafeZone" do seu caderno (um espaço delimitado ao lado), testar a hipótese e, só se funcionar, transcrever o passo válido para a resolução principal. Isso mantém a clareza e a organização do pensamento.
4. **BYOK (Traga Sua Própria Chave) e a Autonomia nas Ferramentas:** O Sylix não força um único modelo de IA; ele dá ao usuário o poder de escolher. Na aprendizagem, o aluno deve desenvolver a **autonomia para escolher a ferramenta certa**. Em vez de depender cegamente de um único método ensinado, ele deve ter um "molho de chaves" mental: *"Para este problema de otimização, posso usar a Derivada, mas também posso tentar completar quadrados. Qual é a mais eficiente aqui?"*. A flexibilidade é um sinal de maestria.
