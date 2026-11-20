# ✍️ Humanizer

## 📌 O que é o Humanizer?
O **Humanizer** não é um aplicativo tradicional, mas sim uma "skill" (habilidade/framework de prompt) projetada para ser integrada a agentes de IA (como Cursor, Claude, ou LLMs locais). Sua filosofia central é a **autenticidade e a fluidez natural**: modelos de linguagem tendem a gerar textos com estruturas previsíveis, vocabulário repetitivo (os chamados "AI-isms") e uma formalidade robótica. O Humanizer atua como um filtro de pós-processamento que instrui a IA a reescrever o conteúdo introduzindo variação de ritmo (*burstiness*), imperfeições calculadas e um tom mais orgânico, removendo os sinais típicos de escrita gerada por máquina.

- **Categoria:** Habilidade de Agente para Refinamento de Texto e Remoção de Padrões de IA
- **Plataforma:** Multiplataforma (Integrável a Cursor, Claude, LLMs locais e Agentes)
- **Palavras-chave:** Humanização de Texto, Prompt Engineering, Escrita Natural, Detecção de IA, Refinamento, Agentes de IA, Burstiness

---

## ✨ Principais Destaques
- **Eliminação de "AI-isms":** Remove ativamente transições clichês e vocabulário inflado que LLMs adoram usar (ex: "É importante notar que...", "No cenário dinâmico de hoje...", "Em conclusão...").
- **Aumento de Perplexidade e *Burstiness*:** Instrui o modelo a variar o comprimento das frases e a complexidade das estruturas. Humanos escrevem com "rajadas" (uma frase longa e complexa seguida de uma curta e direta); IAs tendem a manter um ritmo monótono.
- **Foco na Intenção e no Tom:** Permite calibrar o texto para soar como um especialista conversando com um par, em vez de uma enciclopédia tentando soar neutra e onisciente.
- **Integração Nativa com Fluxos de Trabalho:** Por ser uma *skill* baseada em texto/prompt, ela pode ser embutida diretamente nas instruções do sistema (System Prompt) do seu agente de IA ou usada como um comando de refino após a geração do rascunho inicial.

---

## 🚀 Instalação e Primeiros Passos

Como o Humanizer é uma instrução de prompt (skill), a "instalação" consiste em importar as regras para o seu ambiente de IA.

**Opção 1: Uso como System Prompt (Recomendado para Agentes)**
1. Acesse o [repositório do Humanizer no GitHub](https://github.com/blader/humanizer) ou a [página no Skills.sh](https://www.skills.sh/blader/humanizer).
2. Copie o bloco de instruções (prompt) principal fornecido pelos desenvolvedores.
3. Cole essas instruções nas **Custom Instructions** (ou System Prompt) do seu assistente de IA (ex: nas configurações do Cursor, do Claude ou do seu LLM local via Ollama/LM Studio).
4. A partir de agora, toda a geração de texto do agente seguirá essas regras de humanização por padrão.

**Opção 2: Uso como Comando de Pós-Processamento (Refino)**
- Se você já tem um texto gerado por IA e quer "humanizá-lo", basta colar o texto no chat da sua IA e digitar: 
  *"Reescreva o texto abaixo aplicando as regras de humanização: remova clichês de IA, varie o tamanho das frases para criar burstiness, e use um tom mais direto e conversacional. [Colar texto]"*.

---

## 📚 Links de Referência

- [Página Oficial no Skills.sh](https://www.skills.sh/blader/humanizer)
- [Repositório Oficial no GitHub](https://github.com/blader/humanizer)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Humanizer** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática e redação acadêmica:

1. **Remoção de "AI-isms" e a Voz Autêntica do Aluno:** IAs escrevem de forma genérica para tentar agradar a todos. Muitos alunos fazem o mesmo nas provas dissertativas: usam palavras difíceis e estruturas engessadas para "parecerem inteligentes", o que resulta em um texto robótico e confuso. Ensine o aluno a "humanizar" sua própria redação científica: a clareza, a objetividade e a voz pessoal valem muito mais do que o vocabulário inflado. Se o aluno não consegue explicar o conceito com suas próprias palavras simples, ele não o compreendeu.
2. **"Burstiness" (Variação de Ritmo) e a Criatividade Matemática:** O Humanizer quebra a monotonia gerando frases longas e curtas de forma imprevisível. Na resolução de problemas, o aluno deve desenvolver essa mesma "burstiness" cognitiva. Ele não deve aplicar cegamente o mesmo algoritmo longo e maçante para tudo. Às vezes, a solução exige uma longa dedução algébrica (frase longa); outras vezes, exige um "pulo do gato" geométrico ou uma estimativa rápida (frase curta). A maestria está em saber variar a abordagem conforme a elegância do problema exige.
3. **Pós-Processamento e a Etapa de Revisão:** O Humanizer é usado *depois* que o rascunho bruto foi gerado. Na matemática, a resolução da equação é apenas o "rascunho bruto". A etapa de "humanização" (revisão) é onde o aluno olha para o número final e pergunta: *"Isso faz sentido no mundo real? Faltou a unidade de medida? A resposta condiz com a ordem de grandeza esperada?"*. Ensine o aluno que o cálculo não termina quando se acha o 'X'; o processo só termina quando a resposta é "revisada e humanizada" para o contexto do problema.
