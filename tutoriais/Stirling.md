# 📄 Stirling-PDF

## 📌 O que é o Stirling-PDF?
O **Stirling-PDF** é uma aplicação web robusta e de código aberto, projetada para ser hospedada localmente, que permite visualizar, editar, mesclar, dividir e converter arquivos PDF. Sua filosofia central é a **soberania dos dados e a privacidade absoluta**: diferentemente de conversores de PDF online "gratuitos" que frequentemente coletam, armazenam ou monetizam seus documentos, o Stirling-PDF processa 100% das operações no seu próprio servidor ou computador. Isso garante que informações confidenciais, acadêmicas ou pessoais (como provas, listas de exercícios ou documentos financeiros) nunca saiam do seu ambiente controlado.

- **Categoria:** Ferramenta Web Auto-hospedada para Manipulação e Edição de PDFs
- **Plataforma:** Windows / macOS / Linux (via Docker, Instalador Nativo ou Web)
- **Palavras-chave:** Stirling-PDF, Manipulação de PDF, Auto-hospedado, Privacidade, OCR, Código Aberto, Docker, Mesclar PDF, Converter PDF

---

## ✨ Principais Destaques
- **Processamento 100% Local e Privado:** Nenhum arquivo é enviado para a nuvem de terceiros. Toda a manipulação (leitura, edição, conversão) ocorre na memória do seu dispositivo, garantindo sigilo total.
- **Canivete Suíço de PDFs:** Oferece dezenas de ferramentas em uma única interface, incluindo: mesclar, dividir, comprimir, converter (PDF para Word, Imagem, HTML e vice-versa), adicionar marca d'água, assinar digitalmente e reorganizar páginas.
- **OCR Integrado (Reconhecimento Óptico de Caracteres):** Transforma PDFs digitalizados (imagens) em documentos com texto pesquisável e selecionável, essencial para trabalhar com material didático escaneado.
- **Interface Web Intuitiva e Responsiva:** Funciona em qualquer navegador moderno, tornando-se acessível não apenas no computador, mas também em tablets e celulares na mesma rede local.

---

## 🚀 Instalação e Primeiros Passos

Devido à sua natureza web, a forma mais robusta e recomendada de usar o Stirling-PDF é através de contêineres, mas ele também oferece opções nativas.

**Opção 1: Docker (Recomendado para Desktop/Servidor)**
- Se você tem o Docker instalado, basta executar um único comando no terminal para ter o sistema rodando:
  ```bash
  docker run -d -p 8080:8080 -v ./stirling_data:/usr/share/tessdata frooodle/s-pdf:latest
  ```
  *(Isso inicia o servidor na porta 8080 e persiste os dados de idioma/OCR).*

**Opção 2: Instaladores Nativos (Windows / macOS / Linux)**
- Acesse a [página de releases no GitHub](https://github.com/Stirling-Tools/Stirling-PDF/releases) e baixe o executável ou pacote adequado para o seu sistema operacional, que roda um servidor web local automaticamente.

**Primeiros Passos:**
1. Abra seu navegador e acesse `http://localhost:8080` (ou o endereço IP do seu servidor local).
2. Na tela inicial, escolha a ferramenta desejada (ex: "Mesclar PDF" ou "PDF para Word").
3. Arraste e solte seus arquivos, ajuste as configurações (se houver) e clique em "Processar" ou "Baixar".
4. *Dica de fluxo:* Para material de estudo, use a ferramenta **"OCR"** em apostilas digitalizadas. Isso permitirá que você pesise por palavras-chave (ex: "Teorema de Pitágoras") dentro do PDF usando o buscador do seu navegador ou leitor de PDF.

---

## 📚 Links de Referência

**Oficiais e Documentação:**
- [Site Oficial (Stirling-PDF)](https://www.stirlingpdf.com/)
- [Site Alternativo / Espelho](https://stirlingpdf.io/?lang=pt_BR)
- [Repositório Oficial no GitHub](https://github.com/Stirling-Tools/Stirling-PDF)
- [Documentação de Instalação e Configuração](https://docs.stirlingpdf.com/)

**Comunidade e Discussões:**
- [Reddit: Stirling PDF is a cool project (r/selfhosted)](https://www.reddit.com/r/selfhosted/comments/1cvsu9m/stirling_pdf_is_a_cool_project/)

*(Nota: O link `stirling.com` refere-se a uma entidade comercial diferente e não faz parte do projeto open-source Stirling-PDF).*

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Stirling-PDF** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Processamento Local e a Internalização do Conhecimento:** O Stirling-PDF brilha porque processa tudo localmente, sem depender de servidores externos. Na aprendizagem, isso é uma analogia direta para a **internalização**. O aluno não deve depender eternamente de "consultas na nuvem" (celular, cola, professor ditando o próximo passo) para resolver um problema. Ele precisa transferir os fundamentos (axiomas, regras de sinais, identidades) para sua "memória local", garantindo que o raciocínio esteja disponível de forma autônoma, rápida e segura, especialmente em situações de avaliação.
2. **Split (Dividir) e Merge (Mesclar) na Decomposição de Problemas:** A capacidade da ferramenta de dividir um PDF gigante em partes gerenciáveis, ou mesclar anotações dispersas em um único documento, reflete a estratégia ideal de resolução de problemas matemáticos. O aluno deve aprender a **decompor** um problema complexo em subproblemas menores e isolados (Split), resolvê-los individualmente com clareza, e por fim **sintetizar** (Merge) essas conclusões parciais em uma resposta final coesa e bem estruturada.
3. **OCR e a "Leitura Ativa" de Enunciados:** O OCR transforma uma imagem estática e "muda" em texto estruturado, pesquisável e acionável. Na matemática, o aluno não deve ler um enunciado longo de forma passiva. Ele deve praticar a "leitura ativa" (o OCR mental): sublinhar variáveis, circular restrições e traduzir o texto narrativo em equações e relações lógicas explícitas. Transformar o "texto estático" do problema em uma "estrutura de dados" mental é o primeiro passo para a solução.
