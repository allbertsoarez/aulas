# 🗄️ Scripts SQL - Banco de Dados

Esta pasta é destinada exclusivamente ao armazenamento de scripts, queries e arquivos de banco de dados relacionados à apostila de Banco de Dados. O objetivo é manter o material prático separado da teoria.

Os scripts abaixo utilizam o cenário didático de uma **Editora** (Autores, Categorias, Livros e o relacionamento N:N entre eles) para demonstrar os conceitos de SQL.

## 📂 Índice de Arquivos

| Arquivo | Descrição | Tópico Relacionado |
| :--- | :--- | :--- |
| [`criacao_tabelas.sql`](./criacao_tabelas.sql) | Scripts DDL (`CREATE TABLE`) para criação do esquema da editora, incluindo a tabela pivô `livros_autores` para o relacionamento N:N. | 2. Modelagem e 3. SQL (DDL) |
| [`inserts_iniciais.sql`](./inserts_iniciais.sql) | Scripts DML (`INSERT INTO`) com dados fictícios de livros, autores e categorias para popular as tabelas. | 3. SQL (DML) |
| [`consultas_avancadas.sql`](./consultas_avancadas.sql) | Exemplos de DQL (`SELECT`) utilizando `JOIN` (1:N e N:N), `GROUP BY`, `HAVING` e `LEFT JOIN`. | 3. SQL (DQL) e Tópicos Avançados |

> **Dica de Estudo:** 
> 1. Execute o `criacao_tabelas.sql` primeiro para criar a estrutura.
> 2. Em seguida, execute o `inserts_iniciais.sql` para ter dados para consultar.
> 3. Por fim, execute as queries do `consultas_avancadas.sql` linha por linha para entender o resultado de cada uma.

> **Nota:** Adicione novos arquivos nesta tabela conforme for criando os scripts.

---
<div align="center">
  <a href="../README.md">🔙 Voltar para a Apostila de Banco de Dados</a>
</div>
