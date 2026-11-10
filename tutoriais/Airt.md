# 🛡️ AIRT

## 📌 O que é o AIRT?
O **AIRT (AI Red Team Academy)** é um curso gratuito e de código aberto focado em testes ofensivos de segurança em sistemas de Inteligência Artificial (AI Red Teaming). Desenvolvido pelo pesquisador de segurança `0x4D31` em colaboração com a Perplexity Computer, o curso oferece mais de 60 horas de conteúdo, indo desde injeção de prompt até ataques à cadeia de suprimentos de IA, tudo acompanhado de laboratórios práticos e isolados via Docker.

---

## ✨ Principais Destaques
- **100% Prático e Local**: Todos os 8 laboratórios são executados localmente via Docker (usando Ollama e modelos locais), sem necessidade de chaves de API de serviços em nuvem ou custos adicionais.
- **Currículo Abrangente**: Cobre desde os fundamentos (MITRE ATLAS, OWASP Top 10 para LLMs) até tópicos avançados como exploração de sistemas multiagentes, extração de modelos e automação de testes em escala.
- **Ferramentas da Indústria**: Ensina o uso profissional de ferramentas open-source consagradas, como `garak` (NVIDIA), `PyRIT` (Microsoft) e `promptfoo`.
- **Acessibilidade**: Conteúdo totalmente gratuito, com licença CC BY-SA 4.0 para o material didático e MIT para os códigos dos laboratórios.

---

## ⚙️ Requisitos de Sistema para os Laboratórios
Para executar os ambientes de teste (Docker) com fluidez, seu sistema deve atender aos seguintes requisitos mínimos:
- **Software**: Docker e Docker Compose instalados e em execução.
- **Memória RAM**: 8 GB no mínimo (16 GB ou mais recomendados para os módulos 7 e 8, que envolvem automação e múltiplos contêineres).
- **Armazenamento**: Pelo menos 20 GB de espaço livre para download dos modelos de linguagem locais e imagens Docker.
- **Conhecimento Prévio**: Noções básicas de Python, linha de comando (terminal) e conceitos fundamentais de Machine Learning.

---

## 🚀 Configuração dos Laboratórios

O processo para iniciar os ambientes práticos é padronizado e direto:

**Passo 1:** Clone o repositório oficial e acesse a pasta de laboratórios:
```bash
git clone https://github.com/0x4D31/airt.git
cd airt/labs
```

**Passo 2:** Escolha um módulo para iniciar (exemplo: Laboratório 01 - Fundamentos) e inicie os contêineres:
```bash
cd lab01-foundations
docker compose up -d
```
*(O Docker baixará as imagens necessárias e configurará o ambiente local, incluindo o banco de dados vetorial e o LLM local).*

**Passo 3:** Acesse a interface do laboratório no seu navegador:
```text
http://localhost:8888
```

**Passo 4:** Siga as instruções interativas dentro do laboratório para executar ferramentas como o `garak` ou orquestradores do `PyRIT` contra os alvos vulneráveis propositalmente criados para o exercício.

---

## 📚 Estrutura do Curso (8 Módulos)
1. **Fundamentos de AI Red Teaming**: MITRE ATLAS, OWASP LLM Top 10 e modelagem de ameaças.
2. **Ataques de Injeção de Prompt**: Injeção direta/indireta, jailbreaks e bypass de filtros.
3. **Exploração de RAG e Bancos de Dados Vetoriais**: Envenenamento de base de conhecimento e ataques de incorporação (embedding).
4. **Exploração de Sistemas Multiagentes**: Sequestro de agentes, abuso de ferramentas e envenenamento de memória.
5. **Ataques à Cadeia de Suprimentos e Infraestrutura de IA**: Backdoors em modelos, exploits de serialização (pickle) e dependências.
6. **Extração de Modelos e Ataques de Inferência**: Roubo de modelos, inferência de associação e canais laterais.
7. **AI Red Teaming Automatizado em Escala**: Uso de `garak`, `PyRIT`, `promptfoo` e integração com CI/CD.
8. **Pós-Exploração e Análise de Impacto**: Movimentação lateral, quantificação de risco e elaboração de relatórios profissionais.

---

## 📚 Links de Referência

- [Site Oficial do Curso (AIRT)](https://0x4d31.github.io/airt/)
- [Repositório no GitHub](https://github.com/0x4D31/airt)

---

### 💡 Nota sobre a Metodologia de Estudo
O **AIRT** é um exemplo perfeito de uma metodologia de ensino eficaz para temas complexos, algo que se alinha diretamente com o seu objetivo de desenvolver métodos próprios de estudo. 

Observe como o curso aplica dois princípios cognitivos poderosos:
1. **Chunking (Fragmentação)**: Um tema vasto e intimidador como "Segurança Ofensiva em IA" é dividido em 8 módulos lógicos e progressivos.
2. **Aprendizagem Ativa (Learning by Doing)**: Cada conceito teórico é imediatamente seguido por um laboratório Docker isolado. O aluno não apenas lê sobre "injeção de prompt"; ele a executa e vê o sistema falhar em tempo real.
