<div align="center">
  <br><br>
  <h1>🗄️ APOSTILA DE BANCO DE DADOS</h1>
  <h2>Modelagem, SQL e Administração de Dados</h2>
  <br>
  <p><strong>Disciplina:</strong> Banco de Dados</p>
  <p><strong>Professor/Autor:</strong> Albert Soares</p>
  <p><strong>Versão:</strong> 1.0 | <strong>Ano:</strong> 2026</p>
  <br><br>
</div>

---

# 📑 SUMÁRIO

## 📖 Conteúdo Programático

1. [Introdução a Banco de Dados](#1-introdução-a-banco-de-dados)
2. [Modelagem de Dados](#2-modelagem-de-dados)
3. [Linguagem SQL](#3-linguagem-sql)
4. [Normalização de Dados](#4-normalização-de-dados)
5. [Exercícios Práticos](#5-exercícios-práticos)
6. [Referências Bibliográficas](#6-referências-bibliográficas)

---

## 1. Introdução a Banco de Dados

### 1.1 Dado vs. Informação
- **Dado:** É um fato bruto, sem contexto. (Ex: `85`, `Ana`, `2024`).
- **Informação:** É o dado processado e com contexto. (Ex: `A aluna Ana tirou nota 85 no ano de 2024`).

Um Banco de Dados (BD) é um repositório organizado projetado para armazenar, gerenciar e recuperar **dados** de forma eficiente, para que eles possam ser transformados em **informação**.

### 1.2 O que é um SGBD?
O **SGBD (Sistema Gerenciador de Banco de Dados)** é o software responsável por gerenciar o banco de dados. Ele atua como uma "ponte" entre o usuário/aplicação e os dados físicos.
Exemplos de SGBDs: MySQL, PostgreSQL, Oracle, SQL Server, SQLite.

### 1.3 Vantagens de usar um SGBD
| Abordagem por Arquivos (Antiga) | Abordagem por Banco de Dados (Moderna) |
| :--- | :--- |
| Redundância de dados (dados repetidos). | Controle de redundância. |
| Inconsistência de dados. | Integridade e consistência garantidas. |
| Dificuldade de acesso e compartilhamento. | Múltiplos usuários acessando simultaneamente. |
| Falta de segurança centralizada. | Controle de acesso e permissões (GRANT/REVOKE). |

---

## 2. Modelagem de Dados

A modelagem é a etapa de "desenhar" o banco de dados antes de criá-lo no SGBD. Ela é dividida em três níveis:

### 2.1 Modelo Conceitual (MER)
O **Modelo Entidade-Relacionamento (MER)** é independente de qualquer SGBD. Utilizamos o **DER (Diagrama Entidade-Relacionamento)** para representar:
- **Entidades:** Objetos do mundo real (Ex: `ALUNO`, `DISCIPLINA`).
- **Atributos:** Características das entidades (Ex: `nome`, `email`).
- **Relacionamentos:** Como as entidades interagem (Ex: um ALUNO se MATRICULA em uma DISCIPLINA).

### 2.2 Modelo Lógico (Relacional)
Aqui transformamos o desenho em **Tabelas (Relações)**.
- Cada entidade vira uma tabela.
- Os atributos viram colunas.
- Os relacionamentos são feitos através de **Chaves**:
  - **PK (Primary Key):** Chave Primária. Identifica unicamente uma linha.
  - **FK (Foreign Key):** Chave Estrangeira. Cria o link entre duas tabelas.

### 2.3 Cardinalidade
Define a quantidade de registros de uma tabela que podem se relacionar com a outra:
- **1:1 (Um para Um):** Um aluno tem um prontuário médico.
- **1:N (Um para Muitos):** Um departamento tem vários funcionários.
- **N:N (Muitos para Muitos):** Um aluno se matricula em várias disciplinas, e uma disciplina tem vários alunos. *(No modelo relacional, isso exige uma tabela intermediária, como a tabela `matriculas`)*.

---

## 3. Linguagem SQL

A **SQL (Structured Query Language)** é a linguagem padrão para interagir com bancos de dados relacionais. Ela é dividida em subconjuntos:

### 3.1 DDL (Data Definition Language)
Usada para definir a **estrutura** do banco (criar, alterar ou excluir tabelas).
Comandos principais: `CREATE`, `ALTER`, `DROP`.

```sql
-- Exemplo: Criando a tabela de Alunos
CREATE TABLE alunos (
    id_aluno INT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    data_nascimento DATE
);
```

> 💻 **Prática:** Execute o script completo de criação do nosso cenário escolar no arquivo [`criacao_tabelas.sql`](./sql/criacao_tabelas.sql).

### 3.2 DML (Data Manipulation Language)
Usada para **manipular os dados** dentro das tabelas (inserir, atualizar ou excluir registros).
Comandos principais: `INSERT`, `UPDATE`, `DELETE`.

```sql
-- Exemplo: Inserindo um novo aluno
INSERT INTO alunos (nome, email, data_nascimento) 
VALUES ('Ana Silva', 'ana.silva@email.com', '2005-03-15');
```

> 💻 **Prática:** Popule o banco com dados fictícios usando o arquivo [`inserts_iniciais.sql`](./sql/inserts_iniciais.sql).

### 3.3 DQL (Data Query Language)
Usada para **consultar** e extrair informações do banco. É o coração do SQL!
Comando principal: `SELECT`.

```sql
-- Exemplo: Listando todos os alunos
SELECT nome, email FROM alunos WHERE data_nascimento > '2004-01-01';
```

### 3.4 Consultas Avançadas (JOINs)
Quando precisamos buscar dados de **várias tabelas ao mesmo tempo**, usamos os `JOINs`.

| Tipo de JOIN | Descrição |
| :--- | :--- |
| `INNER JOIN` | Retorna apenas os registros que têm correspondência em **ambas** as tabelas. |
| `LEFT JOIN` | Retorna **todos** os registros da tabela da esquerda, e os correspondentes da direita (ou NULL). |
| `RIGHT JOIN` | Retorna **todos** os registros da tabela da direita, e os correspondentes da esquerda. |

```sql
-- Exemplo: Listando Alunos e suas Notas (INNER JOIN)
SELECT 
    a.nome AS Aluno, 
    d.nome AS Disciplina, 
    m.nota AS Nota
FROM alunos a
JOIN matriculas m ON a.id_aluno = m.id_aluno
JOIN disciplinas d ON m.id_disciplina = d.id_disciplina;
```

> 💻 **Prática:** Explore consultas com `GROUP BY`, `HAVING` e `LEFT JOIN` no arquivo [`consultas_avancadas.sql`](./sql/consultas_avancadas.sql).

---

## 4. Normalização de Dados

A normalização é um processo para **organizar as tabelas** de forma a evitar redundância e anomalias de inserção/atualização/exclusão.

### 4.1 Formas Normais (FN)
- **1FN (Primeira Forma Normal):** Toda tabela deve ter uma Chave Primária e todos os atributos devem ser **atômicos** (não podem haver listas ou vetores em uma única célula).
- **2FN (Segunda Forma Normal):** Estar na 1FN + todos os atributos que não são chave devem depender **totalmente** da chave primária (evita dependência parcial).
- **3FN (Terceira Forma Normal):** Estar na 2FN + nenhum atributo não-chave pode depender de outro atributo não-chave (evita dependência transitiva). *"Cada atributo deve falar sobre a chave, toda a chave e nada mais que a chave."*

---

## 5. Exercícios Práticos

| # | Exercício | Dificuldade |
| :---: | :--- | :---: |
| 1 | Crie uma tabela `professores` com `id_professor`, `nome` e `especialidade`. | ⭐ |
| 2 | Adicione a coluna `id_professor` (FK) na tabela `disciplinas`. | ⭐⭐ |
| 3 | Faça uma consulta que retorne o nome da disciplina e o nome do professor que a leciona. | ⭐⭐ |
| 4 | Crie uma query que mostre a média de idade dos alunos cadastrados. | ⭐⭐⭐ |
| 5 | Normalize a tabela `escola_dados_unicos` (que contém dados de aluno, curso e endereço misturados) até a 3FN. | ⭐⭐⭐ |

> 💻 **Prática:** As resoluções e os scripts de apoio para estes exercícios estão disponíveis na [Pasta de Scripts SQL](./sql/README.md).

---

## 6. Referências Bibliográficas

- DATE, C. J. **Introdução a Sistemas de Bancos de Dados**. Rio de Janeiro: Elsevier, 2004.
- ELMASRI, Ramez; NAVATHE, Shamkant B. **Sistemas de Banco de Dados**. São Paulo: Pearson, 2011.
- KROENKE, David M.; AUER, David J. **Banco de Dados: Projeto, Implementação e Gerenciamento**. São Paulo: Pearson, 2012.

---

<div align="center">
  <br>
  <a href="../../README.md">🔙 Voltar para a Apostila Principal</a>
  <br><br>
</div>
