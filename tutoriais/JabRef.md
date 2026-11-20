# 📚 JabRef

## 📌 O que é o JabRef?
O **JabRef** é um gerenciador de referências bibliográficas de código aberto, poderoso e altamente customizável. Sua filosofia central é o **controle local, a eficiência e a adesão a padrões abertos**: diferentemente de gerenciadores proprietários que prendem seus dados na nuvem, o JabRef é nativo do formato **BibTeX/BibLaTeX**, o padrão-ouro da comunidade científica (especialmente em matemática e ciências exatas). Ele oferece uma maneira robusta de coletar, organizar, buscar e citar literatura, garantindo que você seja o único dono da sua base de conhecimento.

- **Categoria:** Gerenciador de Referências Bibliográficas
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** BibTeX, Referências, LaTeX, Código Aberto, Metadados, Pesquisa Acadêmica, JabRef, Gestão do Conhecimento

---

## ✨ Principais Destaques
- **Nativo em BibTeX/BibLaTeX:** Perfeita integração com editores LaTeX (como Overleaf, TeXworks, VS Code) e suporte a exportação para Word/LibreOffice via plugins, garantindo formatação de citações impecável.
- **Busca Automática de Metadados:** Basta inserir um DOI, ISBN, PMID ou ID do arXiv, e o JabRef busca e preenche automaticamente todos os dados do artigo (autores, título, revista, ano), economizando horas de digitação.
- **Extensão para Navegador:** O *JabRef Browser Extension* permite capturar referências diretamente de bases de dados acadêmicas (IEEE, Springer, PubMed, etc.) e enviar para sua biblioteca com um único clique.
- **Gestão de Arquivos e Busca Avançada:** Permite vincular arquivos PDF às entradas, renomeá-los automaticamente seguindo um padrão (ex: `Autor_Ano_Titulo.pdf`) e realizar buscas complexas usando lógica booleana e campos específicos.

---

## 🚀 Instalação e Primeiros Passos

O JabRef é uma aplicação Java, mas os instaladores modernos já incluem o ambiente de execução necessário, tornando o processo muito simples.

**Opção 1: Instalação no Computador (Recomendado)**
- Acesse a [página de download oficial](https://www.jabref.org/#download) e baixe o instalador para **Windows** (`.exe`), **macOS** (`.dmg`) ou **Linux** (`.deb`, `.rpm` ou AppImage).

**Opção 2: Extensão para Navegador (Complementar Essencial)**
- Instale a extensão oficial no [Chrome Web Store](https://chromewebstore.google.com/detail/jabref-browser-extension/bifehkofibaamoeaopjglfkddgkijdlh) ou Firefox. Ela se comunica com o JabRef Desktop via "JabRef Host".

**Primeiros Passos:**
1. Abra o JabRef e crie uma **Nova Biblioteca** (*File > New library*). Salve o arquivo `.bib` em uma pasta dedicada aos seus estudos.
2. Clique no botão **"+" (New entry)**. Escolha "Gerar a partir de DOI" e cole o DOI de um artigo ou livro que você está usando. Veja a mágica dos metadados sendo preenchidos.
3. Arraste o arquivo PDF do artigo para dentro da entrada criada. O JabRef perguntará se deseja vincular e, opcionalmente, renomear o arquivo.
4. *Dica de fluxo:* Use a barra de pesquisa superior com prefixos para filtrar rapidamente. Ex: digite `author:euclides` ou `year:>2020` para encontrar exatamente o que precisa.

---

## 📚 Links de Referência

**Oficiais e Documentação:**
- [Site Oficial](https://www.jabref.org/)
- [Página de Download](https://www.jabref.org/#download)
- [Documentação para Desenvolvedores e Usuários](https://devdocs.jabref.org/)
- [Repositório Oficial no GitHub](https://github.com/JabRef/jabref)
- [JabRef na Wikipédia](https://pt.wikipedia.org/wiki/JabRef)

**Guias Acadêmicos e Tutoriais:**
- [Guia de JabRef para LaTeX (FEUP)](https://feup.libguides.com/LaTeX/JabRef)
- [O Gerenciador de Referências Gratuito JabRef (USP)](https://sites.usp.br/comcirp/o-gerenciador-de-referencias-gratuito-jabref/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **JabRef** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Metadados e a "Etiquetagem" do Conhecimento:** O JabRef organiza milhares de artigos usando campos estruturados (autor, ano, palavras-chave). O aluno deve aplicar essa mesma lógica aos seus estudos. Em vez de ter um caderno caótico, ele deve "etiquetar" mentalmente ou no Obsidian os conceitos: *"Este é um problema de Otimização", "Este requer a Regra da Cadeia", "Este é um erro recorrente"*. A organização estruturada dos dados mentais acelera drasticamente a recuperação da informação na hora da prova.
2. **A Fonte Primária (DOI) vs. Citação de Segunda Mão:** O JabRef busca o DOI para garantir que os dados venham da fonte original e confiável, evitando erros de transcrição. Na matemática, incentive o aluno a buscar sempre a "fonte primária" do conhecimento: a definição formal do livro-texto ou a demonstração original, em vez de confiar apenas em resumos de segunda mão, vídeos superficiais ou "macetes" que podem ter perdido o rigor no caminho.
3. **Biblioteca Local e a Internalização (Review):** O JabRef armazena os dados localmente no seu computador, sob seu controle. O conhecimento real também precisa ser "armazenado localmente" na memória de longo prazo do aluno, não apenas "linkado" na internet ou no livro fechado. A prática de revisão ativa e espaçada é o equivalente a "sincronizar e salvar" essa biblioteca local, garantindo que o conhecimento esteja disponível mesmo quando a "conexão externa" (consulta ao material) não está disponível.
