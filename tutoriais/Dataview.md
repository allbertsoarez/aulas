# 📊 Dataview

## 📌 O que é o Dataview?
O **Dataview** é um plugin poderoso e essencial para o Obsidian que transforma seu cofre de notas em um banco de dados dinâmico e consultável. Sua filosofia central é a "indexação viva": ele lê metadados estruturados (via YAML Frontmatter ou campos inline) e permite que você liste, filtre, ordene, agrupe e calcule suas anotações automaticamente. Utilizando uma linguagem de consulta semelhante ao SQL (DQL) ou scripts em JavaScript (DataviewJS), ele cria visualizações em tempo real sem nunca modificar ou corromper os arquivos Markdown originais.

- **Categoria:** Plugin de Gerenciamento de Dados e Consultas para Obsidian
- **Plataforma:** Windows / macOS / Linux (via Obsidian)
- **Palavras-chave:** Obsidian, Banco de Dados, Markdown, YAML, Consultas (DQL), JavaScript, Automação de Notas, PKM

---

## ✨ Principais Destaques
- **Indexação Viva e Dinâmica:** As consultas são atualizadas em tempo real. Ao adicionar uma nova nota com os metadados corretos (ex: `status:: concluído`), ela aparece automaticamente nas suas tabelas ou listas, sem necessidade de atualização manual.
- **Linguagem de Consulta (DQL):** Uma sintaxe intuitiva e poderosa, semelhante ao SQL, para filtrar, classificar e realizar cálculos simples diretamente nos seus blocos de nota.
- **API JavaScript (DataviewJS):** Para usuários avançados, oferece acesso total ao índice do Obsidian, permitindo criar visualizações complexas, automações personalizadas e interações que vão muito além da linguagem DQL padrão.
- **Abordagem Não Destrutiva:** O Dataview é estritamente uma ferramenta de *exibição* e *cálculo*. Ele lê seus dados para gerar a visualização, mas nunca altera o conteúdo bruto dos seus arquivos originais (preservando a integridade do seu conhecimento).

---

## 🚀 Instalação e Primeiros Passos

O Dataview é instalado diretamente dentro do ecossistema do Obsidian e requer uma mudança de mentalidade: passar de "anotações soltas" para "anotações estruturadas".

**Opção 1: Instalação via Comunidade do Obsidian**
1. Abra o Obsidian, vá em **Configurações** > **Plugins da Comunidade** e desative o "Modo de Segurança" (se ainda não o tiver feito).
2. Clique em **Procurar**, digite "Dataview", clique em **Instalar** e, em seguida, em **Ativar**.

**Primeiros Passos:**
1. **Estruture seus dados:** Abra uma nota e adicione metadados no topo (YAML) ou no corpo do texto. Exemplo inline: `Autor:: J.R.R. Tolkien` ou `Nota:: 9`.
2. **Crie uma consulta:** Em uma nova nota (ou na mesma), crie um bloco de código especificando a linguagem `dataview`:
   ```dataview
   TABLE Autor, Nota
   FROM "Livros"
   WHERE Nota >= 8
   SORT Nota DESC
   ```
3. **Visualize:** Alterne para o **Modo de Leitura** (ou visualize no modo de edição, dependendo da sua configuração). O bloco de código se transformará magicamente em uma tabela dinâmica e atualizável.
4. *Dica de fluxo:* Comece com consultas simples (`LIST` ou `TABLE`) e, gradualmente, explore funções como `FLATTEN` ou `GROUP BY` para agregar dados complexos.

---

## 📚 Links de Referência

**Documentação e Código:**
- [Documentação Oficial e Manual Completo](https://blacksmithgu.github.io/obsidian-dataview/)
- [Repositório no GitHub](https://github.com/blacksmithgu/obsidian-dataview)
- [Cofre de Exemplo (Exemplos Práticos Prontos)](https://github.com/s-blu/obsidian_dataview_example_vault)

**Guias e Tutoriais:**
- [Como transformar suas notas em um banco de dados com Obsidian e Dataview (PT)](https://howto.mediadoma.com/pt-pt/como-transformar-suas-notas-em-um-banco-de-dados-com-obsidian-e-dataview/)
- [Dataview in Obsidian: A Beginner's Guide (EN)](https://obsidian.rocks/dataview-in-obsidian-a-beginners-guide/)
- [Obsidian Dataview for Beginners (EN)](https://dannyhatcher.com/obsidian-dataview-for-beginners/)
- 📺 [Introdução ao Dataview no Obsidian (Vídeo)](https://www.youtube.com/watch?v=AfsTBr0ENNs)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Dataview** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Metadados como Fundamentos (Estruturação do Conhecimento):** Assim como o Dataview precisa de campos estruturados (YAML ou inline) para funcionar, o aluno deve aprender a anotar com "propriedades" claras. Um teorema não é apenas um bloco de texto; ele possui "campos" implícitos: pré-requisitos, condições de aplicação e exceções. Ensinar o aluno a estruturar a anotação (ex: `Tópico:: Derivadas`, `Dificuldade:: Alta`) transforma um amontoado de texto em um banco de dados mental recuperável.
2. **Consultas Dinâmicas (Revisão Ativa e Síntese):** O poder do Dataview está em agregar informações dispersas em uma única visão (ex: "mostre todos os exercícios que errei no último mês"). Na matemática, incentive o aluno a criar suas próprias "consultas" de revisão: em vez de reler o caderno passivamente, ele deve filtrar ativamente todos os conceitos de um tópico específico, sintetizando o conhecimento e identificando lacunas antes de uma prova.
3. **Separação entre Dados e Exibição (O Processo vs. O Resultado):** O Dataview exibe os dados de forma limpa sem alterar o arquivo original. Isso é uma analogia perfeita para a resolução de problemas: o rascunho (o arquivo Markdown bruto) contém o processo real, com tentativas, erros e correções. A "consulta" (a prova limpa ou o resumo final) é apenas uma *visualização* organizada desse processo. Valorize o rascunho e o histórico de erros, pois é neles que os "metadados" do aprendizado verdadeiro são construídos.
