# 📷 RawTherapee

## 📌 O que é o RawTherapee?
O **RawTherapee** é um processador de imagens RAW profissional, gratuito e de código aberto (licença GPLv3), desenvolvido para fotógrafos que exigem controle absoluto sobre seus arquivos digitais. Sua filosofia central é a **soberania criativa, a precisão científica e a edição não-destrutiva**: diferentemente de editores que comprimem e modificam permanentemente a imagem, o RawTherapee trabalha sobre uma "receita" (arquivo `.pp3`) de ajustes aplicados ao arquivo RAW original, preservando intactos todos os dados capturados pelo sensor da câmera e permitindo revisões infinitas sem perda de qualidade.

- **Categoria:** Processador Profissional de Imagens RAW de Código Aberto
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** RawTherapee, RAW, Fotografia, Edição Não-Destrutiva, Processamento de Imagem, Código Aberto, Color Management, Pipeline Fotográfico

---

## ✨ Principais Destaques
- **Edição 100% Não-Destrutiva:** Todas as edições são salvas como instruções em um arquivo lateral (`.pp3`), mantendo o arquivo RAW original intacto. Você pode reverter, comparar e refazer qualquer etapa sem perda de dados.
- **Pipeline de Processamento Profissional:** Controle total sobre demosaicing, gerenciamento de cores (suporte a perfis ICC), espaço de trabalho, curva de tons, redução de ruído, correção de lente e nitidez, com algoritmos científicos de alto nível.
- **Suporte Abrangente a Formatos RAW:** Lê arquivos RAW de praticamente todas as câmeras digitais modernas (CR2, NEF, ARW, DNG, RAF, etc.), além de formatos clássicos como JPEG, TIFF e PNG.
- **Processamento em Lote (Batch):** Permite aplicar a mesma "receita" de edição a centenas de imagens simultaneamente, otimizando fluxos de trabalho profissionais.

---

## 🚀 Instalação e Primeiros Passos

O RawTherapee é distribuído como instaladores nativos para cada plataforma, garantindo desempenho máximo e integração com o sistema.

**Opção 1: Instaladores Nativos (Recomendado)**
- **Windows / macOS:** Baixe o instalador oficial em [rawtherapee.com/downloads](https://www.rawtherapee.com/downloads).
- **Linux:**
  - **Flatpak:** `flatpak install flathub com.rawtherapee.RawTherapee`
  - **Ubuntu/Debian:** `sudo apt install rawtherapee`
  - **Arch:** `sudo pacman -S rawtherapee`

**Primeiros Passos:**
1. Abra o RawTherapee e navegue até uma pasta que contenha arquivos RAW (extensões como `.CR2`, `.NEF`, `.ARW` ou `.DNG`).
2. Clique duas vezes em uma imagem para abrir o editor principal. Você verá a imagem junto a um painel lateral rico em ferramentas.
3. No painel direito, experimente a aba **"Exposure"** para ajustar exposição, contraste e saturação. Observe que nada é gravado na imagem original.
4. *Dica de fluxo:* Vá até a aba **"History"** (Histórico) para ver a linha do tempo de todas as suas edições. Você pode clicar em qualquer ponto anterior para "voltar no tempo" instantaneamente.
5. Quando estiver satisfeito, clique no botão **"Save"** (ícone de disquete) e exporte para JPEG, TIFF ou PNG no formato desejado.

---

## 📚 Links de Referência

- [Site Oficial](https://www.rawtherapee.com/)
- [Página de Downloads](https://www.rawtherapee.com/downloads)
- [RawTherapee no Flathub](https://flathub.org/apps/com.rawtherapee.RawTherapee)
- [Empacotamento no GitHub (Flathub)](https://github.com/flathub/com.rawtherapee.RawTherapee)
- [RawTherapee na Wikipédia](https://pt.wikipedia.org/wiki/RawTherapee)
- [Documentação Oficial (RawPedia)](https://rawpedia.rawtherapee.com/Main_Page)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **RawTherapee** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Arquivo RAW vs. JPEG e a Preservação dos "Dados Brutos":** O RAW guarda todos os dados capturados pelo sensor, enquanto o JPEG já é uma imagem "processada e comprimida" com perdas. Na matemática, o aluno deve aprender a trabalhar sempre com os **dados brutos e as formas exatas** antes de arredondar. Usar $\sqrt{2}$ em vez de $1,41$, ou manter $\pi$ em vez de $3,14$ durante toda a resolução, evita o acúmulo de erros de arredondamento que invalidam resultados complexos. Só no final se faz a aproximação decimal, se necessário.
2. **Edição Não-Destrutiva e o Rascunho Preservado:** O RawTherapee nunca altera o arquivo original; ele guarda uma "receita" de transformações. O aluno deve tratar seu **rascunho matemático da mesma forma**. Em vez de apagar cálculos errados (o que apaga também a memória de *por que* o erro aconteceu), ele deve riscá-los levemente ou usar uma cor diferente, criando um "histórico" visual. Esse histórico se torna uma ferramenta poderosa de revisão: o aluno vê seu próprio processo de pensamento, identifica padrões de erro e corrige a causa raiz, não apenas o sintoma.
3. **Pipeline de Processamento e a Sequência Lógica das Operações:** No RawTherapee, a ordem das transformações importa: ajuste de branco antes da curva de tons, redução de ruído antes da nitidez. Na matemática, isso é a essência da **ordem das operações e da construção de provas**. Ensine o aluno que pular etapas ou trocar a ordem de passos lógicos (ex: aplicar uma propriedade antes de verificar suas condições de existência) é como inverter a ordem no pipeline fotográfico: o resultado final pode parecer "correto à primeira vista", mas carrega distorções invisíveis que só aparecem sob exame rigoroso.
