<div align="center">
  <br><br>
  <h1>💡 APOSTILA DE LÓGICA DE PROGRAMAÇÃO</h1>
  <h2>Proposições, Conectivos e Raciocínio Computacional</h2>
  <br>
  <p><strong>Disciplina:</strong> Lógica de Programação</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução à Lógica](#1-introdução-à-lógica)
2. [Proposições e Valores Lógicos](#2-proposições-e-valores-lógicos)
3. [Conectivos Lógicos](#3-conectivos-lógicos)
4. [Tabelas-Verdade](#4-tabelas-verdade)
5. [Proposições Compostas e Equivalências](#5-proposições-compostas-e-equivalências)
6. [Argumentos e Validade](#6-argumentos-e-validade)
7. [Lógica Aplicada à Programação](#7-lógica-aplicada-à-programação)
8. [Exercícios Práticos](#8-exercícios-práticos)
9. [Referências Bibliográficas](#9-referências-bibliográficas)

---

## 1. Introdução à Lógica

### 1.1 O que é Lógica?
A palavra **lógica** vem do grego *logos*, que significa "razão", "pensamento" ou "argumento". Na computação, a lógica é a base para construir algoritmos corretos e eficientes.

> *"A lógica não ensina a pensar, mas ensina a não errar ao pensar."* — Filosofia Clássica

### 1.2 Por que estudar Lógica na Computação?
- **Tomada de decisão:** Todo `SE` / `SENÃO` em um programa é uma proposição lógica.
- **Validação de código:** Garantir que um algoritmo faz exatamente o que foi projetado.
- **Banco de dados:** Consultas SQL usam operadores lógicos (`AND`, `OR`, `NOT`).
- **Inteligência Artificial:** Redes neurais e sistemas especialistas são baseados em regras lógicas.

---

## 2. Proposições e Valores Lógicos

### 2.1 O que é uma Proposição?
Uma **proposição** é qualquer sentença declarativa que pode ser classificada como **Verdadeira (V)** ou **Falsa (F)**, sem ambiguidade.

| Frase | É Proposição? | Por quê? |
| :--- | :---: | :--- |
| "O sol é uma estrela." | ✅ Sim | Pode ser julgada como V ou F. |
| "3 + 5 = 10" | ✅ Sim | É Falsa, mas ainda é uma proposição. |
| "Que horas são?" | ❌ Não | É uma pergunta, não tem valor lógico. |
| "x + 2 = 5" | ❌ Não | É uma sentença aberta (depende do valor de x). |
| "Feche a porta!" | ❌ No | É uma ordem, não pode ser V ou F. |

### 2.2 Princípios Fundamentais da Lógica
1. **Princípio da Identidade:** Uma proposição verdadeira é verdadeira; uma falsa é falsa.
2. **Princípio da Não-Contradição:** Uma proposição não pode ser V e F ao mesmo tempo.
3. **Princípio do Terceiro Excluído:** Toda proposição só pode ser V ou F — nunca um "meio-termo".

---

## 3. Conectivos Lógicos

Os **conectivos** são operadores que combinam duas ou mais proposições para formar novas proposições compostas.

| Conectivo | Símbolo | Nome em Programação | Significado |
| :---: | :---: | :--- | :--- |
| `∧` | `E` | `AND` | Ambas devem ser verdadeiras. |
| `∨` | `OU` | `OR` | Pelo menos uma deve ser verdadeira. |
| `~` ou `¬` | `NAO` | `NOT` | Inverte o valor lógico. |
| `→` | `SE...ENTAO` | `IF...THEN` | Se a primeira é V, a segunda também deve ser. |
| `↔` | `SE...E_SOMENTE_SE` | `==` (bicondicional) | Ambas têm o mesmo valor lógico. |

### 3.1 Exemplos em Linguagem Natural
- **E (∧):** "Estudo **e** passo na prova." (As duas coisas precisam acontecer)
- **OU (∨):** "Vou ao cinema **ou** fico em casa." (Uma das duas)
- **NAO (¬):** "**Não** está chovendo." (Inverte o estado "está chovendo")

---

## 4. Tabelas-Verdade

A **tabela-verdade** é uma ferramenta que lista **todas as combinações possíveis** de valores lógicos para as proposições de entrada e mostra o resultado da proposição composta.

### 4.1 Tabela do E (∧)
| p | q | p ∧ q |
| :---: | :---: | :---: |
| V | V | **V** |
| V | F | F |
| F | V | F |
| F | F | F |

> *Regra: Só é V quando **ambas** são V.*

### 4.2 Tabela do OU (∨)
| p | q | p ∨ q |
| :---: | :---: | :---: |
| V | V | **V** |
| V | F | **V** |
| F | V | **V** |
| F | F | F |

> *Regra: Só é F quando **ambas** são F.*

### 4.3 Tabela do NAO (¬)
| p | ¬p |
| :---: | :---: |
| V | **F** |
| F | **V** |

### 4.4 Tabela do SE...ENTAO (→)
| p | q | p → q |
| :---: | :---: | :---: |
| V | V | **V** |
| V | F | **F** |
| F | V | **V** |
| F | F | **V** |

> *Regra: Só é F quando a **primeira é V e a segunda é F** (a promessa foi quebrada).*

---

## 5. Proposições Compostas e Equivalências

### 5.1 Número de Linhas da Tabela-Verdade
Para `n` proposições simples, a tabela-verdade terá **2ⁿ linhas**.
- 2 proposições (p, q): 2² = 4 linhas
- 3 proposições (p, q, r): 2³ = 8 linhas

### 5.2 Leis de De Morgan (MUITO IMPORTANTE!)
As Leis de De Morgan mostram como distribuir a negação em expressões com E e OU:

| Expressão Original | Equivalente (De Morgan) |
| :--- | :--- |
| `¬(p ∧ q)` | `¬p ∨ ¬q` |
| `¬(p ∨ q)` | `¬p ∧ ¬q` |

> 💻 **Na programação:** `!(a && b)` é exatamente igual a `!a || b`. Isso é essencial para simplificar `IFs` complexos!

### 5.3 Proposições Especiais
- **Tautologia:** Sempre verdadeira (Ex: `p ∨ ¬p` — "Está chovendo ou não está chovendo").
- **Contradição:** Sempre falsa (Ex: `p ∧ ¬p` — "Está chovendo e não está chovendo").
- **Contingência:** Pode ser V ou F, dependendo dos valores (a maioria das proposições).

---

## 6. Argumentos e Validade

### 6.1 O que é um Argumento?
Um **argumento** é uma sequência de proposições (chamadas **premissas**) que levam a uma conclusão.

**Exemplo clássico:**
- Premissa 1: Todo homem é mortal.
- Premissa 2: Sócrates é homem.
- **Conclusão:** Sócrates é mortal.

### 6.2 Argumento Válido
Um argumento é **válido** quando a conclusão é **consequência lógica** das premissas. Ou seja: se as premissas são V, a conclusão **obrigatoriamente** também será V.

> ⚠️ **Atenção:** Validade não significa que as premissas são verdadeiras no mundo real! Um argumento pode ser válido mesmo com premissas falsas, desde que a lógica interna esteja correta.

---

## 7. Lógica Aplicada à Programação

### 7.1 Operadores Lógicos em Código
| Lógica Matemática | Portugol | Python | C/C++/Java |
| :---: | :---: | :---: | :---: |
| `∧` (E) | `E` | `and` | `&&` |
| `∨` (OU) | `OU` | `or` | `||` |
| `¬` (NAO) | `NAO` | `not` | `!` |

### 7.2 Exemplo Prático: Validando Login
```portugol
// Situação: O usuário só entra se tiver senha correta E conta ativa
SE (senhaCorreta E contaAtiva) ENTAO
    ESCREVA("Login bem-sucedido!")
SENAO
    ESCREVA("Acesso negado.")
FIMSE
```

### 7.3 Curto-Circuito (Short-Circuit)
Na programação, os operadores lógicos **não avaliam tudo** se não for necessário:
- No `E (&&)`: Se a primeira for F, **nem olha a segunda** (já sabe que o resultado é F).
- No `OU (||)`: Se a primeira for V, **nem olha a segunda** (já sabe que o resultado é V).

> 💡 Isso é usado para evitar erros! Ex: `SE (x <> 0 E (10 / x) > 2)` — se `x` for 0, a segunda parte nem é executada, evitando divisão por zero!

---

## 8. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Classifique as frases abaixo como proposição ou não: <br>a) "2 + 2 = 5" <br>b) "Qual seu nome?" <br>c) "O número 7 é primo." | ⭐ |
| 2 | Construa a tabela-verdade de: `p ∧ (q ∨ r)` | ⭐⭐ |
| 3 | Usando as Leis de De Morgan, reescreva: `NAO (idade >= 18 E temCNH)` | ⭐⭐ |
| 4 | Verifique se o argumento é válido: <br>P1: Se chove, a rua fica molhada. <br>P2: A rua está molhada. <br>C: Logo, choveu. | ⭐⭐⭐ |
| 5 | Traduza para Portugol: "O aluno será aprovado se a média for maior ou igual a 7 OU se a média for maior que 5 e ele tiver feito a recuperação." | ⭐⭐⭐ |

---

## 9. Referências Bibliográficas

- ALENCAR FILHO, Edgard de. **Iniciação à Lógica Matemática**. São Paulo: Nobel, 2002.
- GERSTING, Judith L. **Fundamentos Matemáticos para a Ciência da Computação**. Rio de Janeiro: LTC, 2004.
- HUNTER, David. **Fundamentos de Lógica, Algoritmos e Estruturas de Dados**. Porto Alegre: Bookman, 2010.
- SALVETTI, D. D.; BARBOSA, L. M. **Algoritmos**. São Paulo: Makron Books, 1999.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
