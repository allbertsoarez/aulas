# ⬇️ yt-dlp

## 📌 O que é o yt-dlp?
O **yt-dlp** é uma ferramenta de linha de comando gratuita e de código aberto para download de vídeos e áudios de centenas de sites (YouTube, Vimeo, Twitch, Twitter, Instagram e muitos outros). Sua filosofia central é a **automação, a preservação local e o controle absoluto**: diferentemente de extensões de navegador pesadas ou sites de terceiros cheios de anúncios, o yt-dlp permite que você baixe, converta e organize mídia de forma programática e eficiente, criando um arquivo pessoal offline de conteúdo valioso (videoaulas, tutoriais, palestras) que não depende da disponibilidade eterna da internet ou da permanência do vídeo online.

- **Categoria:** Ferramenta de Linha de Comando para Download de Vídeos e Áudios da Internet
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** yt-dlp, Download de Vídeo, YouTube, Linha de Comando, Automação, Arquivamento Local, Preservação de Conteúdo, Streaming, Código Aberto

---

## ✨ Principais Destaques
- **Suporte Massivo a Sites:** Funciona com centenas de plataformas de vídeo, não apenas YouTube. Mantido ativamente pela comunidade para contornar mudanças de API.
- **Controle Granular de Qualidade:** Permite escolher a resolução exata (4K, 1080p, 720p), formato (MP4, WebM) e até baixar apenas o áudio (MP3, M4A) com qualidade máxima.
- **Metadados e Organização Automática:** Pode salvar automaticamente títulos, descrições, legendas e thumbnails em estruturas de pastas organizadas, facilitando a catalogação posterior.
- **Listas de Reprodução e Canais Inteiros:** Capaz de baixar uma playlist completa ou todos os vídeos de um canal de uma só vez, com um único comando.
- **Sistema de Configuração Persistente:** Permite criar um arquivo `config` com suas flags preferidas, evitando a necessidade de digitá-las repetidamente.

---

## 🚀 Instalação e Primeiros Passos

O yt-dlp é uma ferramenta de linha de comando, o que a torna leve e integrável a scripts e fluxos de trabalho automatizados.

**Opção 1: Via Gerenciador de Pacotes (Recomendado)**
- **Windows (via winget):** `winget install yt-dlp`
- **macOS (via Homebrew):** `brew install yt-dlp`
- **Linux (via pip):** `pip install yt-dlp`

**Opção 2: Download Direto**
- Baixe o binário mais recente na [página de releases do GitHub](https://github.com/yt-dlp/yt-dlp/releases) e adicione-o ao `PATH` do seu sistema.

**Primeiros Passos (Download Básico)**
1. Abra o terminal ou prompt de comando.
2. Para baixar um vídeo na melhor qualidade disponível:
   ```bash
   yt-dlp https://www.youtube.com/watch?v=EXEMPLO
   ```
3. Para baixar apenas o áudio em formato MP3:
   ```bash
   yt-dlp -x --audio-format mp3 https://www.youtube.com/watch?v=EXEMPLO
   ```

**Configuração Avançada (Arquivo `config`)**
Para evitar digitar flags repetidamente, crie um arquivo de configuração:

1. **Localize o diretório de configuração:**
   - **Linux/macOS:** `~/.config/yt-dlp/`
   - **Windows:** `%APPDATA%\yt-dlp\`

2. **Crie um arquivo chamado `config`** (sem extensão) nesse diretório e adicione suas flags preferidas. Exemplo prático:
   ```
   -P ~/Movies/YouTube/
   --embed-thumbnail
   --write-thumbnail
   --convert-thumbnails jpg
   --embed-metadata
   --embed-info-json
   --sub-langs en,pt-BR,pt
   --write-subs
   ```

   **O que essas flags fazem:**
   - `-P ~/Movies/YouTube/`: Define um diretório específico para todos os downloads.
   - `--embed-thumbnail`: Incrusta a thumbnail no arquivo de vídeo/áudio.
   - `--write-thumbnail`: Salva a thumbnail como arquivo separado.
   - `--convert-thumbnails jpg`: Converte thumbnails para formato JPG.
   - `--embed-metadata`: Adiciona metadados (título, artista, etc.) ao arquivo.
   - `--embed-info-json`: Incrusta informações JSON detalhadas.
   - `--sub-langs en,pt-BR,pt`: Baixa legendas em inglês e português (Brasil/Portugal).
   - `--write-subs`: Salva legendas como arquivos separados.

3. **Salve o arquivo.** Agora, toda vez que você executar `yt-dlp`, essas configurações serão aplicadas automaticamente.

**Comandos Úteis Adicionais:**
- **Baixar uma playlist inteira:** `yt-dlp URL_DA_PLAYLIST`
- **Baixar vídeos ao vivo desde o início:** `yt-dlp --live-from-start URL_DA_LIVE`
- **Listar formatos disponíveis:** `yt-dlp -F URL_DO_VÍDEO`

---

## 📚 Links de Referência

- [Repositório Oficial no GitHub](https://github.com/yt-dlp/yt-dlp)
- [Página de Instalação](https://github.com/yt-dlp/yt-dlp?tab=readme-ov-file#installation)
- [Documentação Completa de Comandos](https://github.com/yt-dlp/yt-dlp#readme)
- [Discord da Comunidade](https://discord.gg/H5MNcFW63r)

**Ferramentas GUI (Interfaces Gráficas) para o yt-dlp:**
- [yt-dlp-gui (Kannagi)](https://github.com/kannagi0303/yt-dlp-gui)
- [YouTube-DL-GUI (Oleksis)](https://oleksis.github.io/youtube-dl-gui/)
- [Tartube (Interface Avançada)](https://github.com/axcore/tartube)

**Recursos de Aprendizagem:**
- [Guia Completo do RapidSeedbox (Português)](https://www.rapidseedbox.com/pt/blog/guia-completo-yt-dlp)
- [yt-dlp for Dummies (Reddit)](https://www.reddit.com/r/youtubedl/comments/15xqg3t/ytdlp_for_dummies/)
- [Baixar Vídeos do YouTube Grátis com CLI (Manual do Usuário)](https://manualdousuario.net/baixar-videos-youtube-gratis-cli/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **yt-dlp** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Linha de Comando e a Precisão das Fórmulas Matemáticas:** O yt-dlp exige que você escreva comandos exatos para obter o resultado desejado. Um espaço faltando ou uma flag errada muda completamente o comportamento. Na matemática, isso é análogo à **precisão das fórmulas e propriedades**. Ensine o aluno que "quase certo" é errado. A diferença entre $f(x) = x^2$ e $f(x) = x^2 + 1$ é pequena na escrita, mas muda completamente o gráfico e o comportamento da função. A atenção aos detalhes é o que separa o sucesso do erro.

2. **Arquivo `config` e a Automação de Processos Mentais:** O arquivo de configuração permite que você defina suas preferências uma vez e elas sejam aplicadas automaticamente em todas as execuções futuras. Na aprendizagem, o aluno deve criar seus próprios "arquivos de configuração mentais": **rotinas e heurísticas automatizadas**. Por exemplo, ao resolver qualquer equação do segundo grau, a rotina deve ser: *1. Identificar a, b, c; 2. Calcular Δ; 3. Analisar o sinal de Δ; 4. Aplicar Bhaskara*. Automatizar esses passos reduz a carga cognitiva e permite focar na interpretação do problema, não na mecânica da resolução.

3. **Preservação Local e o Arquivamento do Conhecimento:** O yt-dlp permite que você baixe e armazene localmente videoaulas que podem ser removidas da internet a qualquer momento. Na educação, isso é uma metáfora para a **internalização do conhecimento**. O aluno não deve depender eternamente de "fontes externas" (professor, livro, vídeo) para acessar a informação. Ele deve "baixar" o conhecimento para sua memória de longo prazo através de revisão espaçada e prática ativa, criando um "arquivo local" mental que estará disponível mesmo sob pressão (provas, exames).

4. **Metadados e o Contexto das Informações:** O yt-dlp pode salvar títulos, descrições e legendas junto com o vídeo, fornecendo contexto. Na matemática, uma fórmula sem contexto é inútil. Ensine o aluno a sempre anotar os **metadados** de cada teorema ou fórmula: *"Para que serve? Quais são as condições de existência? Quando eu uso isso?"*. Um caderno cheio de fórmulas sem contexto é como um disco rígido cheio de arquivos sem nomes: impossível de recuperar quando necessário.

5. **Flags e Parâmetros como Variáveis:** As flags do yt-dlp (`-x`, `-f`, `-o`) são parâmetros que modificam o comportamento do programa. Na matemática, variáveis e parâmetros funcionam da mesma forma: eles permitem que uma mesma fórmula ou função se adapte a diferentes situações. Ensine o aluno a ver as fórmulas não como "decorebas", mas como "scripts" que podem ser parametrizados. A fórmula de Bhaskara funciona para qualquer $a$, $b$, $c$; basta "passar os argumentos" corretos.
