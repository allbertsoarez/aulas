# 🕵️ REA (Reverse Engineer Anything)

## 📌 O que é o REA?
O **REA (Reverse Engineer Anything)** é um framework inovador e de código aberto que utiliza agentes de Inteligência Artificial para automatizar e guiar o processo de engenharia reversa. Sua filosofia central é a **democratização da análise profunda e a automação inteligente**: em vez de depender exclusivamente da inspeção manual e exaustiva de código assembly, o REA orquestra agentes de IA para analisar o comportamento de aplicativos e binários nativos, formular hipóteses e gerar relatórios estruturados. Ele atua como um "copiloto" para pesquisadores de segurança, analistas de malware e curiosos técnicos, acelerando a compreensão de como um software funciona "por baixo do capô".

- **Categoria:** Framework de Engenharia Reversa Assistida por Agentes de IA
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** REA, Reverse Engineer Anything, Engenharia Reversa, Agentes de IA, Análise de Binários, Segurança, Automação, Mente Binária, Descompilação

---

## ✨ Principais Destaques
- **Análise Orientada por Agentes:** Utiliza modelos de linguagem para planejar e executar tarefas de engenharia reversa, como identificar funções críticas, rastrear fluxo de dados e explicar trechos de código descompilado.
- **Escopo Multinível:** Capaz de atuar desde a análise comportamental de alto nível (como um aplicativo interage com o sistema) até a inspeção de baixo nível de binários nativos compilados.
- **Ecossistema Comunitário Ativo:** Possui forks e guias adaptados pela comunidade brasileira (como "REA com Provas" e "REA sem Travas"), focados em casos de uso práticos, educacionais e de remoção de restrições de software.
- **Integração com o Fluxo de Trabalho Clássico:** Projetado para complementar, e não substituir, ferramentas consagradas como Ghidra, IDA Pro ou x64dbg, atuando como uma camada de inteligência sobre o processo existente.

---

## 🚀 Instalação e Primeiros Passos

O REA é uma ferramenta baseada em linha de comando, geralmente distribuída via repositório Git.

**Passo 1: Pré-requisitos**
- Ter o **Python 3.9+** instalado.
- Ter o **Git** instalado no sistema.
- (Recomendado) Possuir uma chave de API de um provedor de LLM compatível (ou configurar um modelo local via Ollama, dependendo da versão do fork).

**Passo 2: Instalação**
1. Clone o repositório oficial ou um dos forks da comunidade:
   ```bash
   git clone https://github.com/morluto/rea.git
   cd rea
   ```
2. Crie um ambiente virtual e instale as dependências:
   ```bash
   python -m venv venv
   source venv/bin/activate  # No Windows: venv\Scripts\activate
   pip install -r requirements.txt
   ```

**Primeiros Passos:**
1. Configure sua chave de API ou endpoint de modelo local conforme instruído no `README_pt-BR.md`.
2. Aponte o REA para um binário ou aplicativo de teste (sempre use arquivos que você possui ou tem permissão para analisar, como desafios de CTF).
3. *Dica de fluxo:* Antes de usar o REA em alvos complexos, estude os fundamentos. O guia da **Mente Binária** (linkado abaixo) é a base teórica essencial para entender o que o agente de IA está tentando analisar.

---

## 📚 Links de Referência

**Oficiais:**
- [Site Oficial](https://rea.tools/) | [Versão em Português](https://rea.tools/pt-BR/)
- [Repositório Oficial no GitHub](https://github.com/morluto/rea)
- [README em Português](https://github.com/morluto/rea/blob/main/README_pt-BR.md)

**Guias e Adaptações da Comunidade (Brasil):**
- [REA com Provas (Guia e Repositório)](https://inematds.github.io/rea-com-provas/guia/) | [GitHub](https://github.com/inematds/rea-com-provas)
- [REA sem Travas (Guia e Repositório)](https://inematds.github.io/rea-sem-travas/guia/) | [GitHub](https://github.com/inematds/rea-sem-travas)
- [Craft Anything (Projeto Relacionado)](https://github.com/storytold/craft-anything)

**Fundamentos Teóricos (Leitura Obrigatória):**
- 📚 [Mente Binária: Engenharia Reversa (GitBook)](https://mentebinaria.gitbook.io/engenharia-reversa-)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **REA (Reverse Engineer Anything)** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Engenharia Reversa e a "Desconstrução" de Problemas Complexos:** O REA pega um programa compilado (o resultado final) e trabalha de trás para frente para entender sua lógica original. Na matemática, essa é a essência da **análise**. Quando o aluno se depara com uma fórmula complexa ou um teorema pronto, ele não deve apenas aceitá-lo. Ele deve fazer a "engenharia reversa" daquela fórmula: *"De quais axiomas isso veio? Quais propriedades foram aplicadas em cada linha da demonstração?"*. Entender a origem é mais poderoso do que memorizar o destino.
2. **O Agente de IA como Metacognição Estruturada:** O agente do REA não "chuta"; ele formula uma hipótese, testa uma ferramenta, analisa o resultado e ajusta a rota. O aluno deve internalizar esse **loop metacognitivo**. Ao errar uma questão, em vez de apenas olhar a resposta certa, ele deve atuar como seu próprio agente: *"Qual foi minha hipótese inicial? Onde a execução falhou? Qual regra eu violei?"*. Transformar o erro em um processo de depuração (debug) sistemático acelera drasticamente o aprendizado.
3. **"REA sem Travas" e a Liberdade Intelectual:** O guia da comunidade "REA sem Travas" foca em remover restrições artificiais de software. Na educação, o maior objetivo é remover as "travas" mentais do aluno (ex: "eu não sou bom em matemática", "isso é muito difícil"). Ao ensinar o aluno a desmontar um problema e entender sua mecânica interna, você lhe dá o "código-fonte" do pensamento lógico. Ele deixa de ser um usuário passivo de fórmulas e se torna um engenheiro ativo do próprio raciocínio, sem travas ou bloqueios.
