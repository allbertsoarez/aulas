# 🎵 Spotatui

## 📌 O que é o Spotatui?
O **Spotatui** é um reprodutor de música de código aberto, extremamente rápido e leve, escrito na linguagem Rust. Sua filosofia central é a **unificação, a eficiência e a soberania do usuário**: ele permite criar uma única fila de reprodução que mistura nativamente faixas do Spotify, arquivos locais, estações de rádio, YouTube, servidores Subsonic/Navidrome e Qobuz. Diferente de players convencionais inchados, ele oferece uma interface de terminal (TUI) minimalista e uma versão desktop, ambas compartilhando a mesma configuração, histórico e controle, sem depender de intermediários ou telemetria.

- **Categoria:** Reprodutor de Música de Código Aberto, Rápido e Multiplataforma (Terminal e Desktop)
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** Spotatui, Reprodutor de Música, Terminal, Rust, Spotify, YouTube, Local, Subsonic, Código Aberto, TUI, CLI

---

## ✨ Principais Destaques
- **Fila de Reprodução Unificada (Cross-Source):** A funcionalidade "matadora" do app. Pressione `z` em qualquer faixa, de qualquer fonte (ex: uma rádio online, um vídeo do YouTube e um MP3 local), e todas serão enfileiradas e tocadas sequencialmente pelo mesmo motor, com os mesmos atalhos de teclado.
- **Streaming Nativo do Spotify:** Conecta-se diretamente ao Spotify usando um simples código de emparelhamento, sem a necessidade de criar um "app de desenvolvedor", sem Client ID e sem depender do aplicativo oficial do Spotify rodando em segundo plano.
- **Duas Interfaces, Um Só Cérebro:** Disponível como um aplicativo de terminal (TUI) para máxima eficiência e leveza, e como um aplicativo desktop (GUI) para quem prefere janelas tradicionais. Ambos compartilham o mesmo login, histórico de reprodução e configurações.
- **DJ de IA e Visualizador em Tempo Real:** Inclui um visualizador de áudio FFT real no terminal e a opção de integrar um "DJ de IA" (via modelos locais como Ollama ou via MCP) que sugere músicas com base no seu histórico de escuta local, sem enviar seus dados para a nuvem.

---

## 🚀 Instalação e Primeiros Passos

O Spotatui é famoso por sua instalação de uma única linha de comando, tornando o processo incrivelmente simples.

**Opção 1: Instalação Rápida via Terminal (Recomendada)**
- **Linux / macOS / WSL (Windows):**
  ```bash
  curl -fsSL https://spotatui.com/install.sh | bash
  ```
- **Windows (PowerShell):**
  ```powershell
  irm https://spotatui.com/install.ps1 | iex
  ```
  *(Alternativamente, no Windows, você pode usar o `winget install spotatui`)*

**Opção 2: Gerenciadores de Pacotes**
- **macOS (Homebrew):** `brew tap LargeModGames/spotatui && brew install spotatui`
- **Arch Linux (AUR):** `yay -S spotatui-bin`
- **Rust (Cargo):** `cargo install --locked spotatui`

**Primeiros Passos:**
1. Abra o terminal e digite `spotatui`.
2. Na primeira execução, ele perguntará quais fontes de música você deseja ativar. Você pode escolher apenas fontes gratuitas (como Rádio ou Arquivos Locais) ou configurar o Spotify (requer conta Premium).
3. Use `/` para pesquisar, as setas para navegar e `Enter` para tocar.
4. *Dica de fluxo:* Pressione `?` a qualquer momento para ver todos os atalhos de teclado. Tente navegar até uma estação de rádio, pressionar `z` para adicioná-la à fila, e depois pesquisar uma música no YouTube e pressionar `z` novamente. Veja como elas coexistem perfeitamente na mesma fila (pressione `Shift+Q` para ver a fila).

---

## 📚 Links de Referência

- [Site Oficial](https://spotatui.com/)
- [Repositório Oficial no GitHub](https://github.com/LargeModGames/spotatui)
- [Documentação Completa e Guias de Instalação](https://github.com/LargeModGames/spotatui#installation)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Spotatui** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Fila Unificada (Cross-Source) e a Interdisciplinaridade do Conhecimento:** O Spotatui permite colocar um MP3 local, uma faixa do Spotify e um vídeo do YouTube na mesma fila de reprodução, tratando todos como "música" de forma igualitária. Na matemática, o aluno deve aprender a fazer o mesmo com o conhecimento: colocar uma ferramenta de geometria, uma de álgebra e uma de física na mesma "fila mental" de resolução. Um problema complexo raramente é resolvido com uma única disciplina; a maestria está em saber qual ferramenta "tocar" a seguir, independentemente de sua origem.
2. **Streaming Nativo (Sem Intermediários) e o Pensamento por Primeiros Princípios:** O Spotatui conecta-se diretamente à API do Spotify sem precisar de um "app de desenvolvedor" inchado atuando como intermediário. Na aprendizagem, o aluno deve buscar a compreensão pelos **primeiros princípios** (definições básicas, axiomas) em vez de depender de "macetes", resumos prontos ou fórmulas decoradas que atuam como intermediários obscuros. Quando se entende a origem direta do conceito, a aplicação se torna robusta e não falha quando o problema muda ligeiramente.
3. **Interface de Terminal (TUI) e a Gestão da Carga Cognitiva:** O Spotatui no terminal é rápido, leve e controlado inteiramente pelo teclado, eliminando distrações visuais e consumo desnecessário de recursos do sistema. O ambiente de estudo do aluno deve adotar esse mesmo "modo terminal" mental: um espaço de trabalho limpo, sem celular, sem abas de redes sociais e com apenas o material estritamente necessário sobre a mesa. Reduzir o "ruído" operacional libera a memória de trabalho (a "RAM" mental) para focar exclusivamente na complexidade do raciocínio matemático.
