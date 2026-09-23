# 🗺️ DIAGRAMA DA ESTRUTURA DO REPOSITÓRIO
```text
📦 REPOSITÓRIO "aulas" (Raiz: https://github.com/allbertsoarez/aulas)
│
├── 📘 README.md                              ← APOSTILA MESTRA (Capa e Sumário Geral)
│
├── 📁 algoritmos/
│   ├── 📗 README.md                          ← Apostila de Algoritmos (Teoria)
│   └── 📁 portugol/
│       ├── 📙 README.md                      ← Índice dos arquivos .por
│       ├── ola_mundo.por
│       ├── variaveis_tipos.por
│       ├── condicionais_se.por
│       ├── repeticao_para.por
│       └── vetores_matrizes.por
│
├── 📁 apostilas/
│   ├── 📁 logica-de-programacao/
│   │   └── 📗 README.md                      ← Apostila de Lógica (Teoria)
│   │
│   ├── 📁 linguagem-de-programacao/
│   │   └── 📗 README.md                      ← Apostila de Assembly + C (Teoria)
│   │
│   ├── 📁 linguagem-orientada-a-objetos/
│   │   ├── 📗 README.md                      ← Apostila de C++ + Python (Teoria)
│   │   └── 📙 java.md                        ← 🟡 APÊNDICE (Plano B)
│   │
│   ├── 📁 banco-de-dados/
│   │   ├── 📗 README.md                      ← Apostila de BD (Teoria - Cenário Editora)
│   │   └── 📁 sql/
│   │       ├── 📙 README.md                  ← Índice dos scripts SQL
│   │       ├── criacao_tabelas.sql
│   │       ├── inserts_iniciais.sql
│   │       └── consultas_avancadas.sql
│   │
│   ├── 📁 matematica/
│   │   ├── 📗 README.md                      ← Apostila de Matemática (Teoria)
│   │   └── 📁 geogebra/
│   │       ├── 📙 README.md                  ← Índice dos arquivos .ggb
│   │       ├── funcao_1grau.ggb
│   │       ├── funcao_2grau.ggb
│   │       ├── circulo_trigonometrico.ggb
│   │       ├── matrizes_operacoes.ggb
│   │       └── sistemas_lineares.ggb
│   │
│   ├── 📁 estatistica-aplicada/
│   │   └── 📗 README.md                      ← Apostila de Estatística (Teoria)
│   │
│   ├── 📁 redes-de-computadores/
│   │   └── 📗 README.md                      ← Apostila de Redes (Teoria + Lab)
│   │
│   └── 📁 empreendedorismo/
│       └── 📗 README.md                      ← Apostila de Empreendedorismo (Teoria)
│
└── 📁 codigo-fonte/
    ├── 📁 asm/
    │   ├── 📙 README.md                       ← Índice dos códigos Assembly
    │   ├── ola_mundo.asm
    │   ├── variaveis.asm
    │   ├── condicional.asm
    │   ├── repeticao.asm
    │   └── comparacao_c.asm
    │
    ├── 📁 c/
    │   ├── 📙 README.md                       ← Índice dos códigos C
    │   ├── ola_mundo.c
    │   ├── variaveis_tipos.c
    │   ├── entrada_saida.c
    │   ├── condicionais_if.c
    │   ├── repeticao_for.c
    │   └── funcoes.c
    │
    ├── 📁 c++/
    │   ├── 📙 README.md                       ← Índice dos códigos C++ (POO)
    │   ├── ola_mundo.cpp
    │   ├── classe_objeto.cpp
    │   ├── encapsulamento.cpp
    │   ├── heranca.cpp
    │   ├── polimorfismo.cpp
    │   └── construtor_destrutor.cpp
    │
    ├── 📁 python/
    │   ├── 📙 README.md                       ← Índice dos códigos Python (POO)
    │   ├── ola_mundo.py
    │   ├── variaveis_tipos.py
    │   ├── entrada_saida.py
    │   ├── condicionais_if.py
    │   ├── repeticao_for.py
    │   ├── funcoes.py
    │   └── listas_dicionarios.py
    │
    ├── 📁 java/
    │   ├── 📙 README.md                       ← Índice dos códigos Java (Plano B)
    │   ├── OlaMundo.java
    │   ├── ClasseObjeto.java
    │   ├── Encapsulamento.java
    │   ├── Heranca.java
    │   ├── Polimorfismo.java
    │   └── Interfaces.java
    │
    └── 📁 notebooks/
        └── 📙 README.md                       ← (Futuro: Jupyter Notebooks)
```

---

## 🔗 TABELA DE CAMINHOS RELATIVOS (Atualizada)

Esta é a parte mais importante para evitar links quebrados no GitHub. Como removemos a pasta `aulas/`, os caminhos subiram um nível.

| Onde o arquivo está | Link para a **Apostila Mestra** (Raiz) | Link para a **Apostila da Matéria** (Pai) |
| :--- | :--- | :--- |
| **Raiz** (`README.md`) | `./README.md` | *(Você já está aqui)* |
| **Nível 1** (ex: `algoritmos/README.md`) | `../README.md` | *(Você já está aqui)* |
| **Nível 2 Teoria** (ex: `apostilas/banco-de-dados/README.md`) | `../../README.md` | `../README.md` |
| **Nível 2 Prática** (ex: `codigo-fonte/c/README.md`) | `../../README.md` | `../../apostilas/linguagem-de-programacao/README.md` |
| **Nível 3 Prática** (ex: `apostilas/banco-de-dados/sql/README.md`) | `../../../README.md` | `../README.md` |
| **Nível 3 Prática** (ex: `algoritmos/portugol/README.md`) | `../../README.md` | `../README.md` |

---

## 📝 CHECKLIST RÁPIDO PARA ATUALIZAÇÕES FUTURAS

Quando for adicionar novo conteúdo, siga este roteiro simplificado:

- [ ] **1.** Criar a pasta teórica em `apostilas/[nome-da-materia]/` (sem a pasta `aulas` na frente).
- [ ] **2.** Criar o `README.md` com capa e sumário.
- [ ] **3.** Se tiver prática, criar a pasta em `codigo-fonte/[linguagem]/` ou dentro da própria pasta da matéria (como `sql/` ou `portugol/`).
- [ ] **4.** Criar o `README.md` da pasta de códigos com a tabela de arquivos.
- [ ] **5.** Atualizar a **Apostila Mestra** (`README.md` da raiz) adicionando o link no sumário.
- [ ] **6.** Testar o botão de "Voltar" no rodapé de cada arquivo novo usando a tabela acima.

---

### 💡 Próximos Passos

Essa estrutura está agora **100% alinhada** com a URL real do seu repositório (`github.com/allbertsoarez/aulas`).
