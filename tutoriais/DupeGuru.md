# 🧹 DupeGuru

## 📌 O que é o DupeGuru?
O **DupeGuru** é uma ferramenta de interface gráfica (GUI) multiplataforma, escrita principalmente em Python, projetada para encontrar e gerenciar arquivos duplicados no sistema. Sua principal filosofia é a **eficiência com segurança**: ele não se limita a buscar cópias idênticas (byte a byte), mas utiliza um algoritmo de "correspondência fuzzy" (nebulosa) para identificar arquivos semelhantes, mesmo que seus nomes ou conteúdos tenham pequenas variações. Além disso, seu sistema de "diretório de referência" foi desenhado para prevenir a exclusão acidental de arquivos importantes, tornando a limpeza do disco uma tarefa segura e controlada.

- **Categoria:** Utilitário de Limpeza e Deduplicação de Arquivos
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** Arquivos Duplicados, Correspondência Fuzzy, Python, Código Aberto, Otimização de Espaço, Segurança de Dados

---

## ✨ Principais Destaques
- **Algoritmo de Correspondência Fuzzy:** Encontra arquivos duplicados mesmo quando os nomes não são exatamente iguais (ex: "relatorio_final.pdf" e "relatorio_final_v2.pdf"), economizando tempo na triagem manual.
- **Modos Especializados:** Possui modos de verificação específicos para **Música** (comparando metadados e tags de áudio) e **Imagens** (identificando fotos visualmente semelhantes, mesmo com resoluções ou formatos diferentes), além do modo Padrão para arquivos gerais.
- **Segurança por Design:** O sistema de agrupamento e o conceito de "diretório de referência" garantem que o software nunca sugira a exclusão do arquivo original que você pretende manter, prevenindo desastres por clique equivocado.
- **Leve e Personalizável:** Escrito em Python com interface Qt, é rápido, consome poucos recursos do sistema e permite ajustar a sensibilidade do motor de correspondência para encontrar exatamente o tipo de duplicata que você deseja.

---

## 🚀 Instalação e Primeiros Passos

O DupeGuru é leve e possui instaladores nativos ou pacotes para as principais distribuições, além do código fonte estar disponível para compilação.

**Opção 1: Instalação Nativa (Recomendado)**
- **Windows / macOS:** Baixe o instalador mais recente diretamente na página de Releases do GitHub ou no site oficial.
- **Linux:** Disponível via PPA (Ubuntu/Debian), Flatpak ou gerenciadores de pacotes nativos (ex: `sudo apt install dupeguru` em algumas distribuições, ou via Flatpak: `flatpak install flathub com.github.dupeguru.dupeguru`).

**Primeiros Passos:**
1. Abra o DupeGuru e selecione o **Modo** de verificação no topo (Padrão, Música ou Imagem), dependendo do que você deseja limpar.
2. Clique no botão **"+"** para adicionar as pastas que deseja escanear ao "Diretório de Referência" (os arquivos que você *sabe* que quer manter) e às "Pastas de Varredura" (onde as duplicatas serão procuradas).
3. Clique em **"Scan"**. O software processará os arquivos e exibirá os grupos de duplicatas.
4. *Dica de segurança:* O DupeGuru marcará automaticamente as cópias para exclusão, protegendo o arquivo original (destacado como referência). Revise a lista, ajuste as seleções se necessário, e use a ação "Delete" ou "Move" para limpar o espaço.

---

## 📚 Links de Referência

- [Site Oficial e Documentação](https://dupeguru.voltaicideas.net/)
- [Repositório no GitHub](https://github.com/arsenetar/dupeguru/)
- [Página de Downloads e Releases](https://github.com/arsenetar/dupeguru/releases)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **DupeGuru** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Correspondência Fuzzy e Reconhecimento de Padrões:** O maior trunfo do DupeGuru é identificar que dois arquivos são "praticamente a mesma coisa", mesmo com nomes ou formatos ligeiramente diferentes. Na matemática, essa é a habilidade suprema de **transferência de conhecimento**: reconhecer que um problema novo, com uma "roupagem" diferente ou números alterados, é estruturalmente idêntico a um problema já resolvido. Ensine o aluno a olhar além da superfície e identificar a "assinatura fuzzy" do conceito matemático subjacente.
2. **Modos Especializados (Flexibilidade Cognitiva):** O DupeGuru muda seu algoritmo dependendo se está analisando texto, música ou imagens. Da mesma forma, o estudante deve aprender a "trocar de modo" mentalmente. O modo de pensar para resolver uma equação algébrica é diferente do modo para interpretar um gráfico geométrico ou para analisar um problema de lógica verbal. A flexibilidade para aplicar a ferramenta cognitiva certa ao tipo de dado certo é sinal de domínio.
3. **O "Diretório de Referência" (Preservação do Essencial):** O software protege o arquivo original de ser apagado acidentalmente. No estudo, o aluno deve construir e proteger seu próprio "Diretório de Referência": um resumo mestre, um formulário de fórmulas ou um conjunto de teoremas fundamentais que ele revisa e mantém sempre atualizado e seguro. Esse núcleo de conhecimento serve como âncora de verdade, permitindo que ele experimente, rabisque e "limpe" seus rascunhos de exercícios sem medo de perder a base conceitual.
