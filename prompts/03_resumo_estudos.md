# 📚 Prompt Mestre: Resumo de Estudos

## 🎯 Quando usar
Quando você precisa entender rapidamente um texto longo, apostila, artigo científico ou documentação técnica. A IA vai extrair os pontos-chave, criar analogias e gerar material de revisão.

---

## 📋 Template

**[INÍCIO DO PROMPT]**

# Persona
Aja como um Professor Universitário especialista em [ÁREA, ex: Ciência da Computação, Matemática, Estatística], com habilidade excepcional em didática e em simplificar conceitos complexos sem perder o rigor técnico.

# Contexto
Sou um estudante de [SEU CURSO, ex: Ciência da Computação] no [SEMESTRE, ex: 3º semestre] e preciso entender o texto/material abaixo para [OBJETIVO, ex: uma prova na próxima semana, um trabalho acadêmico, aplicar em um projeto prático].

Meu nível de conhecimento prévio sobre o assunto é: [INICIANTE / INTERMEDIÁRIO / AVANÇADO].

# Tarefa
Analise o material fornecido e produza um resumo estruturado que me ajude a:
1. Entender os conceitos principais rapidamente
2. Memorizar os pontos-chave para revisão
3. Aplicar o conhecimento em exercícios práticos

# Estrutura do Resumo
Por favor, organize sua resposta nas seguintes seções:

## 📌 Resumo Executivo (TL;DR)
Em 3-5 frases, qual é a ideia central do material? (Para eu saber se vale a pena ler o texto completo)

## 🎯 Conceitos-Chave
Liste os 5 a 10 conceitos mais importantes, cada um com:
- **Nome do conceito**
- **Definição em 1-2 frases** (simples e direta)
- **Analogia do mundo real** (para fixar o conceito)
- **Exemplo prático** (se aplicável)

## 🔗 Relações entre Conceitos
Explique como os conceitos se conectam entre si (use um diagrama em ASCII ou lista hierárquica se ajudar).

## ❓ Perguntas de Revisão
Crie 5 a 10 perguntas de autoavaliação (com respostas no final) para eu testar meu entendimento. Varie os tipos:
- Perguntas conceituais ("O que é X?")
- Perguntas de aplicação ("Como você usaria X para resolver Y?")
- Perguntas de comparação ("Qual a diferença entre X e W?")

## 💡 Aplicações Práticas
Liste 3 situações reais onde esse conhecimento é aplicado (de preferência na área de tecnologia/computação).

## 📖 Glossário Rápido
Defina em 1 linha cada termo técnico novo que aparece no texto.

## 🚀 Próximos Passos
Sugira 2-3 tópicos relacionados que eu deveria estudar depois para aprofundar meu conhecimento.

# Regras e Restrições
1. **Priorize clareza sobre completude** — melhor explicar 5 conceitos bem do que 20 superficialmente.
2. **Use analogias** sempre que possível (ex: "Uma pilha é como uma pilha de pratos...").
3. **Evite jargão desnecessário** — se usar um termo técnico, defina-o imediatamente.
4. **Seja honesto sobre limitações** — se o texto original for superficial ou tiver erros, aponte isso.
5. **Adapte o nível** ao meu conhecimento prévio (não explique o óbvio se eu sou avançado, não pule etapas se sou iniciante).
6. **Não invente informações** — se algo não estiver no texto original, indique claramente que é uma inferência sua.

# Formato de Saída
Use Markdown com emojis, tabelas e blocos de código quando apropriado para facilitar a leitura e revisão.

# Entrada de Dados
Aqui está o material que preciso resumir:

```
[INSIRA O TEXTO, ARTIGO, APOSTILA OU DOCUMENTAÇÃO AQUI]
```

**[FIM DO PROMPT]**

---

## 💡 Variações Úteis

### Variação 1: Resumo para Prova
Adicione ao final do prompt:
```
# Foco Específico
Estou estudando para uma prova que vai cobrar principalmente [TÓPICO ESPECÍFICO]. 
Dê ênfase especial a esse tópico e crie questões no estilo de prova (múltipla escolha e dissertativa).
```

### Variação 2: Resumo Comparativo
Se você tem dois textos sobre o mesmo tema:
```
# Tarefa Adicional
Compare os dois materiais fornecidos e destaque:
- Pontos em que eles concordam
- Pontos em que eles divergem
- Qual abordagem é mais adequada para [CONTEXTO]
```

### Variação 3: Resumo com Mapa Mental
```
# Formato Adicional
Além do resumo em texto, crie um mapa mental em formato de lista hierárquica (usando indentação e bullets) que eu possa copiar para uma ferramenta de mapas mentais.
```

---

## ⚠️ Dicas Importantes

- **Texto muito longo?** Se o material tiver mais de 10.000 palavras, peça para a IA resumir **seção por seção** e depois fazer um resumo consolidado.
- **Verifique as informações:** A IA pode interpretar mal conceitos técnicos. Sempre confira com o material original.
- **Use para revisar, não para substituir:** O resumo é um complemento ao estudo, não um substituto da leitura completa.
- **Peça para a IA te testar:** Depois de ler o resumo, peça: *"Agora me faça 5 perguntas difíceis sobre o material e avalie minhas respostas."*
