<div align="center">
  <br>
  <h1>🗺️ Mapa da Estrutura do Repositório</h1>
  <p><strong>Repositório:</strong> <a href="https://github.com/allbertsoarez/aulas">github.com/allbertsoarez/aulas</a></p>
  <p><em>Este documento é um guia visual para navegação e manutenção do repositório.</em></p>
  <br>
</div>

---

## 📂 Diagrama Completo da Estrutura

```text
📦 REPOSITÓRIO "aulas" (Raiz)
│
├── 📘 README.md                                  ← APOSTILA MESTRA (Capa e Sumário Geral)
├── 👋 GUIA_DO_ALUNO.md                           ← Boas-vindas e instruções de uso
├── 🏆 PROJETO_INTEGRADOR.md                      ← Desafio final interdisciplinar
├── 🔗 RECURSOS.md                                ← HUB DE LINKS, FERRAMENTAS E REPOSITÓRIOS
├── 🗺️ ESTRUTURA.md                               ← Este arquivo (Mapa Visual)
│
├── 📁 algoritmos/
│   ├── 📗 README.md                              ← Apostila de Algoritmos (Teoria)
│   └── 📁 portugol/
│       ├── 📙 README.md                          ← Índice dos arquivos .por
│       ├── ola_mundo.por
│       ├── variaveis_tipos.por
│       ├── condicionais_se.por
│       ├── repeticao_para.por
│       └── vetores_matrizes.por
│
├── 📁 apostilas/
│   │
│   ├── 📁 logica-de-programacao/
│   │   └── 📗 README.md                          ← Apostila de Lógica (9 capítulos)
│   │
│   ├── 📁 linguagem-de-programacao/
│   │   └── 📗 README.md                          ← Apostila de Assembly + C (13 capítulos)
│   │
│   ├── 📁 linguagem-orientada-a-objetos/
│   │   ├── 📗 README.md                          ← Apostila de C++ + Python (13 capítulos)
│   │   └── 📙 java.md                            ← 🟡 APÊNDICE: Java (Plano B)
│   │
│   ├── 📁 banco-de-dados/
│   │   ├── 📗 README.md                          ← Apostila de BD (Cenário Editora)
│   │   └── 📁 sql/
│   │       ├── 📙 README.md                      ← Índice dos scripts SQL
│   │       ├── criacao_tabelas.sql
│   │       ├── inserts_iniciais.sql
│   │       └── consultas_avancadas.sql
│   │
│   ├── 📁 matematica/
│   │   ├── 📗 README.md                          ← Apostila de Matemática Aplicada
│   │   └── 📁 geogebra/
│   │       ├── 📙 README.md                      ← Índice dos arquivos .ggb
│   │       ├── funcao_1grau.ggb
│   │       ├── funcao_2grau.ggb
│   │       ├── circulo_trigonometrico.ggb
│   │       ├── matrizes_operacoes.ggb
│   │       └── sistemas_lineares.ggb
│   │
│   ├── 📁 estatistica-aplicada/
│   │   └── 📗 README.md                          ← Apostila de Estatística (8 capítulos)
│   │
│   ├── 📁 redes-de-computadores/
│   │   └── 📗 README.md                          ← Apostila de Redes + Linux (16 capítulos)
│   │
│   ├── 📁 empreendedorismo/
│   │   └── 📗 README.md                          ← Apostila de Empreendedorismo (10 capítulos)
│   │
│   ├── 📁 estruturas-de-dados/
│   │   └── 📗 README.md                          ← Apostila de Estruturas de Dados (11 capítulos)
│   │
│   ├── 📁 git-e-github/
│   │   └── 📗 README.md                          ← Apostila de Git e GitHub (11 capítulos)
│   │
│   └── 📁 inteligencia-artificial/
│       └── 📗 README.md                          ← 🟢 Apostila de IA e Prompt (8 capítulos)
│
├── 📁 codigo-fonte/
│   │
│   ├── 📁 asm/
│   │   ├── 📙 README.md                          ← Índice dos códigos Assembly
│   │   ├── ola_mundo.asm
│   │   ├── variaveis.asm
│   │   ├── condicional.asm
│   │   ├── repeticao.asm
│   │   └── comparacao_c.asm
│   │
│   ├── 📁 c/
│   │   ├── 📙 README.md                          ← Índice dos códigos C
│   │   ├── ola_mundo.c
│   │   ├── variaveis_tipos.c
│   │   ├── entrada_saida.c
│   │   ├── condicionais_if.c
│   │   ├── repeticao_for.c
│   │   └── funcoes.c
│   │
│   ├── 📁 c++/
│   │   ├── 📙 README.md                          ← Índice dos códigos C++ (POO)
│   │   ├── ola_mundo.cpp
│   │   ├── classe_objeto.cpp
│   │   ├── encapsulamento.cpp
│   │   ├── heranca.cpp
│   │   ├── polimorfismo.cpp
│   │   └── construtor_destrutor.cpp
│   │
│   ├── 📁 python/
│   │   ├── 📙 README.md                          ← Índice dos códigos Python (POO)
│   │   ├── ola_mundo.py
│   │   ├── variaveis_tipos.py
│   │   ├── entrada_saida.py
│   │   ├── condicionais_if.py
│   │   ├── repeticao_for.py
│   │   ├── funcoes.py
│   │   └── listas_dicionarios.py
│   │
│   ├── 📁 java/
│   │   ├── 📙 README.md                          ← Índice dos códigos Java (Plano B)
│   │   ├── OlaMundo.java
│   │   ├── ClasseObjeto.java
│   │   ├── Encapsulamento.java
│   │   ├── Heranca.java
│   │   ├── Polimorfismo.java
│   │   └── Interfaces.java
│   │
│   └── 📁 notebooks/
│       ├── 📙 README.md                          ← Índice geral dos notebooks
│       ├── 01_pandas_editora.ipynb
│       ├── 02_estatistica_descritiva.ipynb
│       ├── 03_correlacao_regressao.ipynb
│       └── 📁 python-basico/
│           ├── 01_ola_mundo.ipynb
│           ├── 02_variaveis_tipos.ipynb
│           ├── 03_entrada_saida.ipynb
│           ├── 04_condicionais.ipynb
│           ├── 05_repeticao.ipynb
│           ├── 06_funcoes.ipynb
│           ├── 07_listas_dicionarios.ipynb
│           ├── 08_tratamento_erros.ipynb
│           ├── 09_manipulacao_arquivos.ipynb
│           ├── 10_modulos_bibliotecas.ipynb
│           ├── 11_strings_metodos.ipynb
│           ├── 12_list_comprehensions.ipynb
│           └── 13_fstrings_avancadas.ipynb
│
└── 📁 prompts/
    ├── 📙 README.md                              ← Índice da Biblioteca de Prompts
    ├── 01_refatoracao_codigo.md
    ├── 02_geracao_testes.md
    ├── 03_resumo_estudos.md
    ├── 04_template_agente.md
    └── 05_analise_dados.md
```

---

## 🎨 Legenda de Ícones

| Ícone | Significado |
| :---: | :--- |
| 📘 | **Apostila Mestra** (Raiz do repositório) |
| 📗 | **Apostila Teórica** (Conteúdo principal da disciplina) |
| 📙 | **Índice de Arquivos Práticos** (README de pasta de códigos/scripts/prompts) |
| 📁 | **Pasta / Diretório** |
| 📦 | **Repositório** |
| 🗺️ | **Mapa de Estrutura** (Este arquivo) |
| 🟢 | **Material Complementar de Vanguarda** (IA) |
| 🟡 | **Apêndice / Plano B** (Java) |

---

## 🔗 Tabela de Caminhos Relativos

Use esta tabela para criar links corretos entre os arquivos do repositório.

| Onde o arquivo está | Link para a **Apostila Mestra** (Raiz) | Link para a **Apostila da Matéria** (Pai) |
| :--- | :--- | :--- |
| **Raiz** (`README.md`) | `./README.md` | *(Você já está aqui)* |
| **Nível 1** (ex: `algoritmos/README.md`) | `../README.md` | *(Você já está aqui)* |
| **Nível 2 Teoria** (ex: `apostilas/banco-de-dados/README.md`) | `../../README.md` | *(Você já está aqui)* |
| **Nível 2 Prática** (ex: `codigo-fonte/c/README.md`) | `../../README.md` | `../../apostilas/linguagem-de-programacao/README.md` |
| **Nível 3 Prática** (ex: `apostilas/banco-de-dados/sql/README.md`) | `../../../README.md` | `../README.md` |
| **Nível 3 Prática** (ex: `algoritmos/portugol/README.md`) | `../../README.md` | `../README.md` |
| **Nível 3 Notebooks** (ex: `codigo-fonte/notebooks/python-basico/01_ola_mundo.ipynb`) | `../../../README.md` | `../../README.md` (pasta notebooks) |
| **Nível 1 Prompts** (ex: `prompts/01_refatoracao_codigo.md`) | `../README.md` | `./README.md` (pasta prompts) |

---

## 📋 Mapa de Navegação (Fluxo do Aluno)

```
                         ┌──────────────────────────┐
                         │   📘 APOSTILA MESTRA     │
                         │   (README.md da Raiz)    │
                         └────────────┬─────────────┘
                                      │
       ┌──────────────┬───────────────┼───────────────┬──────────────┐
       ▼              ▼               ▼               ▼              ▼
  🧠 FUNDAMENTOS  💻 LINGUAGENS  🗄️ DADOS/REDES  📐 CIÊNCIAS   💼 GESTÃO
  ─────────────   ─────────────   ──────────────   ──────────   ─────────
  • Lógica        • Assembly+C    • Banco de Dados  • Matemática • Empreend.
  • Algoritmos    • C++/Python    • Redes + Linux   • Estatística
    └─ Portugol     └─ Java 🟡      └─ Scripts SQL    └─ GeoGebra
                                    └─ Notebooks 📓
       │              │               │               │              │
       └──────────────┴───────────────┼───────────────┴──────────────┘
                                      ▼
                         ┌──────────────────────────┐
                         │  🚀 TÓPICOS ESPECIAIS    │
                         │  • Estruturas de Dados   │
                         │  • Git e GitHub          │
                         └────────────┬─────────────┘
                                      ▼
                         ┌──────────────────────────┐
                         │  🤖 MATERIAL COMPLEMENTAR│
                         │  • Inteligência Artificial│
                         │  • Biblioteca de Prompts │
                         └──────────────────────────┘
```

---

## 📊 Resumo Estatístico do Repositório

| Categoria | Quantidade |
| :--- | :---: |
| Apostilas Teóricas | 12 |
| Linguagens de Programação | 6 (ASM, C, C++, Python, Java, Portugol) |
| Arquivos de Código-Fonte | 40+ |
| Notebooks Jupyter | 16 |
| Scripts SQL | 3 |
| Templates de Prompts | 5 |
| Capítulos Totais (aprox.) | 130+ |
| Exercícios Práticos | 60+ |

---

## ✅ Checklist para Atualizações Futuras

Quando for adicionar **nova matéria** ou **novo conteúdo**, siga este roteiro:

- [ ] **1.** Criar a pasta teórica em `apostilas/[nome-da-materia]/`
- [ ] **2.** Criar o `README.md` com capa e sumário (usar o template padrão)
- [ ] **3.** Se tiver prática, criar a pasta em `codigo-fonte/[linguagem]/` ou dentro da própria pasta da matéria (como `sql/` ou `portugol/`)
- [ ] **4.** Criar o `README.md` da pasta de códigos com a tabela de arquivos
- [ ] **5.** Atualizar a **Apostila Mestra** (`README.md` da raiz) adicionando o link no sumário
- [ ] **6.** Atualizar este arquivo **ESTRUTURA.md** (diagrama + tabela de caminhos)
- [ ] **7.** Testar todos os links de "Voltar" (botão no rodapé de cada arquivo)
- [ ] **8.** Verificar se os caminhos relativos estão corretos usando a tabela acima

---

## 📝 Template Padrão para Novas Apostilas

Ao criar uma nova apostila, use esta estrutura base:

```markdown
<div align="center">
  <br><br>
  <h1>[EMOJI] APOSTILA DE [NOME DA MATÉRIA]</h1>
  <h2>[Subtítulo]</h2>
  <br>
  <p><strong>Disciplina:</strong> [Nome]</p>
  <p><strong>Professor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

1. [Capítulo 1](#1-capítulo-1)
2. [Capítulo 2](#2-capítulo-2)
...

---

## 1. Capítulo 1
(Conteúdo...)

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
```

---

<div align="center">
  <br>
  <a href="./README.md">🔙 Voltar para a Apostila Mestra</a>
  <br><br>
  <p><em>Última atualização: 2026</em></p>
</div>
