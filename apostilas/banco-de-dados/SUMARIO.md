# SUMÁRIO

## 1. FUNDAMENTOS DE BANCO DE DADOS
### 1.1. DIFERENÇA ENTRE BANCO DE DADOS E SGBD
* **Banco de Dados:** Coleção organizada, estruturada e persistente de dados armazenados eletronicamente.
* **Sistema de Gerenciamento de Banco de Dados (SGBD):** Software complexo que interage com usuários finais e aplicações para capturar, manipular, proteger e analisar os dados (ex: [`PostgreSQL`](https://www.postgresql.org/), [`MySQL`](https://dev.mysql.com/doc/)).

### 1.2. FASES DE UM PROJETO DE BANCO DE DADOS
* **Levantamento de Requisitos:** Compreensão detalhada das regras de negócio e necessidades de dados.
* **Modelagem Conceitual:** Criação do Modelo de Entidade-Relacionamento (MER), independente de tecnologia.
* **Modelagem Lógica:** Transformação do MER em um Modelo Relacional, definindo tabelas e tipos de dados.
* **Modelagem Física:** Implementação efetiva no SGBD, incluindo criação de índices e otimizações de desempenho.

---

## 2. MODELAGEM DE DADOS
### 2.1. CONCEITOS BÁSICOS DO MODELO DE ENTIDADE-RELACIONAMENTO (MER)
* **Entidade:** Objeto ou conceito do mundo real sobre o qual se deseja armazenar dados (ex: `Aluno`, `Curso`).
* **Atributo:** Característica ou propriedade descritiva de uma entidade (ex: `nome`, `matrícula`).
* **Relacionamento:** Associação lógica e semântica entre duas ou mais entidades.

### 2.2. DIAGRAMA DE ENTIDADE-RELACIONAMENTO (DER) E MODELO RELACIONAL
* O **Diagrama de Entidade-Relacionamento (DER)** é a representação visual e gráfica do MER. Na transição para o Modelo Relacional, as entidades tornam-se **tabelas**, os atributos tornam-se **colunas**, e os relacionamentos são materializados através de chaves, estabelecendo a estrutura relacional matemática dos dados.

---

## 3. INTEGRIDADE E REGRAS DE NEGÓCIO
### 3.1. MAPEAMENTO DE RESTRIÇÕES E USO DE CHAVES
* [`Chave Primária (Primary Key)`](https://www.postgresql.org/docs/current/ddl-constraints.html#DDL-CONSTRAINTS-PRIMARY-KEYS): Identificador único e não nulo de um registro em uma tabela, garantindo a identificação inequívoca de cada linha.
* [`Chave Estrangeira (Foreign Key)`](https://www.postgresql.org/docs/current/ddl-constraints.html#DDL-CONSTRAINTS-FK): Campo que cria um vínculo explícito entre os dados de duas tabelas, referenciando a chave primária de outra relação.

### 3.2. INTEGRIDADE REFERENCIAL NO BANCO DE DADOS
* A [`Integridade Referencial`](https://www.postgresql.org/docs/current/ddl-constraints.html#DDL-CONSTRAINTS-FK) assegura que as relações entre as tabelas permaneçam consistentes, impedindo, por exemplo, a exclusão de um registro "pai" se houver registros "filhos" dependentes, ou a inserção de um registro com referência inexistente.

---

## 4. IMPLEMENTAÇÃO E CONSULTA EM SQL
### 4.1. TABELAS EM LINGUAGEM SQL
* A materialização do modelo lógico no SGBD ocorre através do comando [`CREATE TABLE`]. Nesta etapa, definem-se o nome da tabela, as colunas, seus respectivos tipos de dados (ex: `VARCHAR`, `INTEGER`) e as devidas restrições de integridade (ex: `NOT NULL`, `UNIQUE`).

### 4.2. CONSULTAS ATRAVÉS DO COMANDO SELECT
* Para recuperar, filtrar e manipular os dados armazenados, utiliza-se o comando [`SELECT`](https://www.postgresql.org/docs/current/sql-select.html). Ele permite projetar colunas específicas, aplicar condições de filtro (`WHERE`), ordenar resultados (`ORDER BY`) e agregar informações de uma ou mais tabelas (via `JOIN`), sendo a operação de leitura mais fundamental e poderosa da [`SQL (Structured Query Language)`](https://www.postgresql.org/docs/current/sql.html).
*A numeração sequencial e hierárquica confere ao material uma estrutura de apostila profissional, facilitando a localização rápida de conteúdos e a construção mental do cronograma de estudos pelo aluno. Como gancho pedagógico, sugiro adicionar um "Desafio do Capítulo" ao final de cada seção principal, incentivando a aplicação imediata dos conceitos de modelagem antes de avançar para a sintaxe SQL.*
