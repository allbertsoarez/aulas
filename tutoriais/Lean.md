# 📐 Lean (Lean 4)

## 📌 O que é o Lean?
O **Lean** (especificamente o Lean 4, sua versão mais moderna) é uma linguagem de programação funcional de código aberto e um assistente de provas interativo (*theorem prover*). Sua filosofia central é a **certeza matemática e a verificação formal**: ele permite escrever definições, teoremas e demonstrações de tal forma que o próprio computador possa verificar a correção lógica de cada passo, eliminando ambiguidades, "pulos" de raciocínio e erros humanos. É a ponte definitiva entre a ciência da computação e a matemática pura, sendo usado tanto para desenvolver software à prova de falhas quanto para formalizar matemática de ponta.

- **Categoria:** Linguagem de Programação e Assistente de Provas Interativo
- **Plataforma:** Windows / macOS / Linux (via VS Code)
- **Palavras-chave:** Lean 4, Teoremas Formais, Verificação de Provas, Matemática Computacional, Código Aberto, Mathlib, Tipos Dependentes, Lógica

---

## ✨ Principais Destaques
- **Verificação Formal Absoluta:** O Lean não aceita "é óbvio que" ou "fica como exercício". Se o código compila e a prova é concluída (geralmente com `sorry` removido e substituído por táticas válidas), a correção lógica é garantida matematicamente.
- **Experiência Interativa no VS Code:** A extensão do Lean fornece um painel lateral (*Infoview*) que mostra em tempo real o "estado da prova": quais hipóteses você tem disponíveis e qual é a meta exata que precisa ser provada a cada linha.
- **Mathlib (Biblioteca Padrão):** Uma biblioteca comunitária massiva e em constante crescimento que já contém dezenas de milhares de teoremas formalizados (álgebra, análise, topologia, teoria dos números), permitindo que você construa sobre conhecimentos já verificados.
- **Metaprogramação e Táticas:** O Lean 4 é escrito em si mesmo, permitindo que usuários criem "táticas" personalizadas (scripts) para automatizar partes repetitivas ou complexas de uma demonstração.

---

## 🚀 Instalação e Primeiros Passos

A experiência moderna do Lean é profundamente integrada ao editor de código Visual Studio Code (VS Code).

**Passo 1: Preparar o Ambiente**
1. Instale o [Visual Studio Code](https://code.visualstudio.com/).
2. Instale o **Elan**, o gerenciador de toolchain do Lean (semelhante ao `rustup`). No terminal:
   - **Linux/macOS:** `curl https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh -sSf | sh`
   - **Windows:** Baixe o instalador `elan-init.exe` na página de releases do GitHub do `elan`.

**Passo 2: Configurar o VS Code**
- Abra o VS Code, vá na aba de Extensões e instale a extensão oficial **"Lean 4"**.

**Primeiros Passos:**
1. Crie um novo arquivo com a extensão `.lean` (ex: `teste.lean`). O Lean ativará automaticamente o modo de servidor.
2. Digite um teorema simples. Por exemplo:
   ```lean
   theorem soma_comutativa (a b : Nat) : a + b = b + a := by
     rw [Nat.add_comm]
   ```
3. *Dica de fluxo:* Observe o painel **Lean Infoview** (geralmente à direita ou como aba flutuante). Conforme você digita `by`, ele mostra a meta. Conforme você aplica a tática `rw` (rewrite), ele mostra que a meta foi resolvida (`no goals`). Essa interação é a essência do aprendizado com o Lean.

---

## 📚 Links de Referência

- [Site Oficial do Lean](https://lean-lang.org/)
- [Repositório Oficial do Lean 4 no GitHub](https://github.com/leanprover/lean4)
- [Documentação e Livro "Functional Programming in Lean"](https://lean-lang.org/functional_programming_in_lean/)
- 🎮 **[Natural Number Game](https://adam.math.hhu.de/)** (Recomendação de Ouro: Um tutorial interativo em formato de jogo para aprender a provar teoremas básicos de aritmética no Lean).

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Lean** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Verificação Formal e o Fim do "É Óbvio":** O Lean recusa qualquer passo lógico que não seja explicitamente justificado por uma regra ou teorema anterior. Na sala de aula, incentive os alunos a eliminarem o "é óbvio" ou o "daí segue que" vago de suas resoluções. Cada transição de linha deve ter uma "justificativa de compilação" mental (ex: "apliquei a propriedade distributiva", "usei o Teorema de Pitágoras"). Isso transforma a resolução em uma cadeia lógica inquebrável.
2. **O "Infoview" e o Gerenciamento do Estado do Problema:** No VS Code, o Lean mostra constantemente: *"Hipóteses: você sabe que $x > 0$. Meta: prove que $x^2 > 0$"*. Ensine o aluno a fazer essa mesma pausa metacognitiva no meio de uma prova longa. Ele deve ser capaz de verbalizar a qualquer momento: *"O que eu já tenho como verdadeiro (hipóteses) e o que exatamente eu preciso alcançar agora (meta)?"*. Manter esse estado claro evita que o aluno se perça em manipulações algébricas sem rumo.
3. **Mathlib e a Construção sobre Ombros de Gigantes:** Ninguém no Lean prova a comutatividade da soma do zero absoluto; usa-se `Nat.add_comm` da `Mathlib`. Da mesma forma, o aluno não deve tentar "reinventar a roda" ou decorar fórmulas isoladas. Ele deve aprender a identificar e invocar "teoremas-base" confiáveis (identidades trigonométricas, propriedades de potências, leis de Newton) como blocos de construção. A maestria não está em provar tudo do zero, mas em saber qual ferramenta já validada aplicar no momento certo.
