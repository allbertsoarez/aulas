# 🗄️ Scripts SQL - Banco de Dados

Esta pasta é destinada exclusivamente ao armazenamento de scripts, queries e arquivos de banco de dados relacionados à apostila de Banco de Dados. O objetivo é manter o material prático separado da teoria.

Os scripts abaixo utilizam o cenário didático de um **Sistema Escolar** (Alunos, Disciplinas e Matrículas) para demonstrar os conceitos de SQL.

## 📂 Índice de Arquivos

| Arquivo | Descrição | Tópico Relacionado |
| :--- | :--- | :--- |
| [`criacao_tabelas.sql`](./criacao_tabelas.sql) | Scripts DDL (`CREATE TABLE`) para criação do esquema do banco, incluindo Chaves Primárias e Estrangeiras. | 2. Modelagem e 3. SQL (DDL) |
| [`inserts_iniciais.sql`](./inserts_iniciais.sql) | Scripts DML (`INSERT INTO`) com dados fictícios para popular as tabelas e permitir testes. | 3. SQL (DML) |
| [`consultas_avancadas.sql`](./consultas_avancadas.sql) | Exemplos de DQL (`SELECT`) utilizando `JOIN`, `GROUP BY`, `HAVING` e `LEFT JOIN`. | 3. SQL (DQL) e Tópicos Avançados |

> **Dica de Estudo:** 
> 1. Execute o `criacao_tabelas.sql` primeiro para criar a estrutura.
> 2. Em seguida, execute o `inserts_iniciais.sql` para ter dados para consultar.
> 3. Por fim, execute as queries do `consultas_avancadas.sql` linha por linha para entender o resultado de cada uma.

> **Nota:** Adicione novos arquivos nesta tabela conforme for criando os scripts. Basta seguir o padrão `[Nome do Arquivo](./nome_do_arquivo.sql)`.

---
<div align="center">
  <a href="../README.md">🔙 Voltar para a Apostila de Banco de Dados</a>
</div>
