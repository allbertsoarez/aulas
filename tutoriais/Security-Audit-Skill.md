# 🛡️ Security Audit Skill (Cloudflare)

## 📌 O que é o Security Audit Skill?
O **Security Audit Skill** é um pacote de habilidades (skill) de código aberto desenvolvido pela Cloudflare para transformar agentes de codificação de IA em auditores de segurança estruturados. Sua filosofia central é o **rigor adversarial, a verificação independente e a rastreabilidade**: diferentemente de scanners de vulnerabilidade tradicionais ou prompts genéricos de "encontre bugs", esta habilidade orquestra o agente através de seis fases distintas (Reconhecimento, Caça Orientada por Cobertura, Validação de Candidatos, Saída Estruturada, Verificação Independente de Registros e Relatório Neutro ao Alvo). O resultado é um conjunto de descobertas validadas de forma independente, legíveis por máquina e com rastreamento exato da fonte, eliminando alucinações e falsos positivos comuns em revisões de código assistidas por IA.

- **Categoria:** Habilidade de Agente de Codificação para Auditorias de Segurança Multifásicas
- **Plataforma:** Cross-platform (via Agentes de Codificação como Claude Code, Cursor, etc., requer Node.js)
- **Palavras-chave:** Security Audit Skill, Cloudflare, Agente de IA, Auditoria de Código, Descoberta de Vulnerabilidades, Validação Independente, Revisão de Segurança

---

## ✨ Principais Destaques
- **Orquestração Multifásica:** Divide a auditoria em etapas lógicas: mapeamento de arquitetura, caça dirigida por lacunas de cobertura, validação de candidatos e geração de relatório, evitando a análise superficial.
- **Validação Adversarial Independente:** O agente que verifica uma descoberta *nunca* é o mesmo agente que a encontrou. Isso força uma revisão crítica real, tentando ativamente refutar a vulnerabilidade antes de confirmá-la.
- **Saída Estruturada e Legível por Máquina:** Gera arquivos como `coverage-ledger.json` e `findings.json`, validados por scripts JavaScript de dependência zero (`validate-findings.cjs`), classificando resultados estritamente como `confirmed` (confirmado com rastreio de fonte), `needs_validation` (fato não resolvido) ou `rejected` (refutado).
- **Foco em Classes de Ataque Específicas:** Inclui prompts e metodologias especializadas para diferentes vetores, como segurança de memória, injeção de prompt em LLMs, autenticação web, cadeia de suprimentos (supply chain) e exaustão de recursos.

---

## 🚀 Instalação e Primeiros Passos

A ferramenta é distribuída como um "skill" para ser instalado em agentes de codificação compatíveis (como o Claude Code ou outros que suportem o protocolo de skills).

**Passo 1: Pré-requisitos**
- Ter um agente de codificação que suporte o uso de ferramentas e sub-agentes paralelos.
- Ter o **Node.js** instalado no sistema (necessário para os validadores de dependência zero incluídos no pacote).
- Um ambiente de execução em sandbox (recomendado) para que o agente possa testar códigos sem riscos à rede ou ao sistema principal.

**Passo 2: Instalação via CLI de Skills**
- Abra o terminal no diretório do seu projeto ou globalmente e execute:
  ```bash
  # Instalação local no projeto
  npx skills add https://github.com/cloudflare/security-audit-skill --skill security-audit
  
  # Ou instalação global no usuário
  npx skills add https://github.com/cloudflare/security-audit-skill --skill security-audit --global
  ```

**Passo 3: Primeiros Passos (Execução da Auditoria)**
1. Abra seu agente de codificação no repositório que deseja auditar.
2. Faça uma solicitação direta que acione a habilidade, por exemplo:
   - *"Faça uma auditoria de segurança completa neste repositório."*
   - *"Encontre vulnerabilidades de injeção de SQL no diretório ./src."*
3. O agente iniciará a Fase 1 (Reconhecimento), criando arquivos como `architecture.md` e `coverage-ledger.json` antes de prosseguir para a caça ativa.
4. *Dica de fluxo:* Após a execução, revise o arquivo `REPORT.md` gerado e, crucialmente, o `NEEDS-VALIDATION.md`. As descobertas marcadas como "precisam de validação" são pistas valiosas que requerem sua atenção humana especializada, pois a IA identificou um padrão suspeito, mas não pôde confirmá-lo deterministicamente.

---

## 📚 Links de Referência

- [Repositório Oficial no GitHub](https://github.com/cloudflare/security-audit-skill)
- [Artigo: Build your own vulnerability harness (Blog da Cloudflare)](https://blog.cloudflare.com/build-your-own-vulnerability-harness) *(Contexto de origem da ferramenta)*
- [Documentação de Uso e Princípios de Design (README)](https://github.com/cloudflare/security-audit-skill/blob/main/README.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Security Audit Skill** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Validação Adversarial Independente e a Verificação da Resposta:** O princípio de que "o agente que verifica nunca é o que encontrou" é a tradução perfeita da necessidade de **verificar uma resposta matemática usando um método diferente**. Se o aluno resolveu uma equação isolando o $x$, ele deve verificar o resultado substituindo o valor encontrado na equação original. Se a prova foi feita por indução, ele deve testar os casos base. Confiar cegamente no primeiro resultado (mesmo que tenha sido o próprio aluno que o gerou) é uma falha de processo; a verificação independente é o que transforma um "chute educado" em uma certeza matemática.
2. **Classificação Rigorosa (`confirmed` vs `needs_validation`) e a Diferença entre Conjectura e Teorema:** O skill classifica descobertas de forma binária e rigorosa: ou há um rastreamento de fonte completo e um resultado observado (`confirmed`), ou é apenas um fato não resolvido (`needs_validation`). Na matemática, o aluno deve aprender a fazer essa mesma distinção. Um padrão que funciona para $n=1, 2, 3$ é apenas uma **conjectura** (`needs_validation`). Ele só se torna um **teorema** (`confirmed`) após uma demonstração lógica universal. Ensinar o aluno a rotular suas próprias descobertas com esse rigor evita que ele assuma generalizações prematuras em provas e exames.
3. **Auditoria Multifásica e o Método de Polya (Decomposição do Problema):** As 6 fases do skill (Reconhecimento, Caça, Validação, etc.) espelham a estrutura ideal de resolução de problemas. O aluno não deve ler um problema complexo e imediatamente começar a calcular. Ele deve seguir suas próprias fases: 
   - *Fase 1 (Reconhecimento):* O que é dado? O que é pedido? Quais são as restrições?
   - *Fase 2 (Caça/Planejamento):* Qual teorema ou fórmula se aplica aqui?
   - *Fase 3 (Execução):* Realizar os cálculos passo a passo.
   - *Fase 4 (Validação/Relatório):* A resposta faz sentido? A unidade está correta? 
   Estruturar o pensamento em fases impede a ansiedade e a desorganização mental diante de problemas longos.
