# SUMÁRIO

## 1. FUNDAMENTOS E CICLO DE VIDA DE BANCO DE DADOS

### 1.1. DIFERENÇA ENTRE BANCO DE DADOS E SGBD
* **Banco de Dados:** Coleção organizada, estruturada e persistente de dados armazenados eletronicamente.
* **Sistema de Gerenciamento de Banco de Dados (SGBD):** Software complexo que interage com usuários finais e aplicações para capturar, manipular, proteger e analisar os dados (ex: [`PostgreSQL`](https://www.postgresql.org/), [`MySQL`](https://dev.mysql.com/doc/)).

### 1.2. FASES DE UM PROJETO DE BANCO DE DADOS
* **Levantamento de Requisitos:** Compreensão detalhada das regras de negócio e necessidades de dados.
* **Modelagem Conceitual:** Criação do Modelo de Entidade-Relacionamento (MER), independente de tecnologia.
* **Modelagem Lógica:** Transformação do MER em um Modelo Relacional, definindo tabelas e tipos de dados.
* **Modelagem Física:** Implementação efetiva no SGBD, incluindo criação de índices e otimizações de desempenho.

---

## 2. MODELAGEM CONCEITUAL E LÓGICA DE DADOS

### 2.1. CONCEITOS BÁSICOS DO MODELO DE ENTIDADE-RELACIONAMENTO (MER)
* **Entidade:** Objeto ou conceito do mundo real sobre o qual se deseja armazenar dados (ex: `Aluno`, `Curso`).
* **Atributo:** Característica ou propriedade descritiva de uma entidade (ex: `nome`, `matrícula`).
* **Relacionamento:** Associação lógica e semântica entre duas ou mais entidades.

### 2.2. DIAGRAMA DE ENTIDADE-RELACIONAMENTO (DER) E MODELO RELACIONAL
* O **Diagrama de Entidade-Relacionamento (DER)** é a representação visual e gráfica do MER. Na transição para o Modelo Relacional, as entidades tornam-se **tabelas**, os atributos tornam-se **colunas**, e os relacionamentos são materializados através de chaves, estabelecendo a estrutura relacional matemática dos dados.

---

## 3. NORMALIZAÇÃO E INTEGRIDADE DE DADOS

### 3.1. MAPEAMENTO DE RESTRIÇÕES E USO DE CHAVES
* [`Chave Primária (Primary Key)`](https://www.postgresql.org/docs/current/ddl-constraints.html#DDL-CONSTRAINTS-PRIMARY-KEYS): Identificador único e não nulo de um registro em uma tabela, garantindo a identificação inequívoca de cada linha.
* [`Chave Estrangeira (Foreign Key)`](https://www.postgresql.org/docs/current/ddl-constraints.html#DDL-CONSTRAINTS-FK): Campo que cria um vínculo explícito entre os dados de duas tabelas, referenciando a chave primária de outra relação.

### 3.2. INTEGRIDADE REFERENCIAL NO BANCO DE DADOS
* A [`Integridade Referencial`](https://www.postgresql.org/docs/current/ddl-constraints.html#DDL-CONSTRAINTS-FK) assegura que as relações entre as tabelas permaneçam consistentes, impedindo a exclusão de registros "pai" com dependentes ou a inserção de referências inexistentes.

### 3.3. NORMALIZAÇÃO DE DADOS: 1FN, 2FN E 3FN
* Processo sistemático de organização dos dados para reduzir a [`redundância`](https://www.postgresql.org/docs/current/) e evitar anomalias de atualização.
* **1ª Forma Normal (1FN):** Eliminação de grupos repetitivos e garantia de atomicidade.
* **2ª Forma Normal (2FN):** Eliminação de dependências parciais (todos os atributos não-chave devem depender da chave primária inteira).
* **3ª Forma Normal (3FN):** Eliminação de dependências transitivas (atributos não-chave não devem depender de outros atributos não-chave).

---

## 4. LINGUAGEM SQL: DEFINIÇÃO E MANIPULAÇÃO DE DADOS

### 4.1. CRIAÇÃO E ESTRUTURAÇÃO DE TABELAS (DDL)
* A materialização do modelo lógico ocorre através da Linguagem de Definição de Dados ([`DDL`](https://www.postgresql.org/docs/current/sql-createtable.html)).
* Utiliza-se o comando [`CREATE TABLE`](https://www.postgresql.org/docs/current/sql-createtable.html) para definir colunas, tipos de dados (ex: `VARCHAR`, `INTEGER`) e restrições (`NOT NULL`, `UNIQUE`).

### 4.2. INSERÇÃO, ATUALIZAÇÃO E EXCLUSÃO DE DADOS (DML - CRUD)
* A manipulação dos registros é feita via Linguagem de Manipulação de Dados ([`DML`](https://www.postgresql.org/docs/current/dml.html)), completando o ciclo [`CRUD`](https://www.postgresql.org/docs/current/dml.html).
* [`INSERT`](https://www.postgresql.org/docs/current/dml.html#DML-INSERT): Inserção de novos registros nas tabelas.
* [`UPDATE`](https://www.postgresql.org/docs/current/dml.html#DML-UPDATE): Alteração de dados existentes com base em condições específicas.
* [`DELETE`](https://www.postgresql.org/docs/current/dml.html#DML-DELETE): Remoção de registros, exigindo cuidado redobrado com a integridade referencial.

---

## 5. LINGUAGEM SQL: CONSULTAS AVANÇADAS E RELACIONAIS

### 5.1. CONSULTAS BÁSICAS E FILTROS (COMANDO SELECT)
* O comando [`SELECT`](https://www.postgresql.org/docs/current/sql-select.html) é a base da recuperação de dados.
* Permite projetar colunas, aplicar condições de filtro (`WHERE`), ordenar (`ORDER BY`) e limitar resultados (`LIMIT`).

### 5.2. JUNÇÃO DE TABELAS E FUNÇÕES DE AGREGAÇÃO
* **Junções (`JOIN`):** Combinação de dados de múltiplas tabelas relacionais usando [`INNER JOIN`](https://www.postgresql.org/docs/current/queries-table-expressions.html#QUERIES-JOIN), `LEFT JOIN` e `RIGHT JOIN`.
* **Agregação:** Uso de funções como `COUNT()`, `SUM()`, `AVG()` combinadas com a cláusula [`GROUP BY`](https://www.postgresql.org/docs/current/tutorial-agg.html) para análises estatísticas e relatórios gerenciais.

---

## 6. NOÇÕES DE ADMINISTRAÇÃO E SEGURANÇA

### 6.1. CONTROLE DE ACESSO E PERMISSÕES DE USUÁRIOS (DCL)
* Introdução à Linguagem de Controle de Dados ([`DCL`](https://www.postgresql.org/docs/current/sql-grant.html)).
* Criação de *roles*/usuários e aplicação de privilégios específicos utilizando os comandos [`GRANT`](https://www.postgresql.org/docs/current/sql-grant.html) e `REVOKE`, garantindo o princípio do menor privilégio.

### 6.2. NOÇÕES DE BACKUP, RESTAURAÇÃO E MANUTENÇÃO
* Estratégias fundamentais para a continuidade do negócio e prevenção de perda de dados.
* Conceitos de [`Backup Lógico (pg_dump)`](https://www.postgresql.org/docs/current/backup.html#BACKUP-DUMP) versus Backup Físico, e procedimentos básicos de restauração.
