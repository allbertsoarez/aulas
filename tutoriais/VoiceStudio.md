# 🎙️ VoiceStudio

## 📌 O que é o VoiceStudio?
O **VoiceStudio** (anteriormente conhecido como OmniVoice Studio) é um estúdio de voz com inteligência artificial de código aberto, projetado para ser a alternativa definitiva, 100% local e gratuita a serviços proprietários como o ElevenLabs. Sua filosofia central é a **soberania dos dados, a acessibilidade e a ética no uso de IA**: ele permite clonar vozes, gerar fala (TTS), transcrever áudio (STT), dublar vídeos e criar audiolivros em 646 idiomas, rodando inteiramente no hardware do usuário. Sem necessidade de contas, sem telemetria e sem custos por caractere, garantindo que suas amostras de voz e dados de áudio nunca saiam do seu dispositivo.

- **Categoria:** Estúdio de Voz com IA de Código Aberto, 100% Local e Multilíngue
- **Plataforma:** Windows / macOS / Linux / Android / iOS / Docker
- **Palavras-chave:** VoiceStudio, OmniVoice, Clonagem de Voz, IA Local, TTS, STT, Dublagem, Transcrição, Privacidade, Código Aberto, 646 Idiomas

---

## ✨ Principais Destaques
- **Clonagem e Design de Voz:** Clone uma voz a partir de apenas 3 segundos de áudio limpo ou "projete" uma voz do zero descrevendo em texto suas características (gênero, sotaque, tom, emoção), sem necessidade de áudio de referência.
- **Dublagem de Vídeo com Sincronização:** Transcreva, traduza e regrave o áudio de vídeos mantendo a separação dos falantes e o alinhamento temporal (lip-sync aproximado) com o original.
- **Ditado e Transcrição Local:** Widget de ditado flutuante que converte fala em texto em tempo real usando motores locais (como Whisper), com histórico pesquisável e refinamento por LLM para remover hesitações.
- **Criação de Audiolivros e Lotes:** Narre scripts longos ou arquivos EPUB inteiros, divididos em capítulos, com crossfade suave entre os segmentos gerados.
- **Aceleração de Hardware Flexível:** Funciona inteiramente na CPU (requer ~8GB de RAM), mas aproveita aceleração via Metal (Apple Silicon), CUDA (NVIDIA), ROCm (AMD) e Vulkan para máxima performance.

---

## 🚀 Instalação e Primeiros Passos

O VoiceStudio oferece instaladores nativos otimizados para evitar a compilação de dependências complexas no primeiro uso.

**Opção 1: Instalador de Um Comando (Recomendado)**
- **Windows:** Abra o PowerShell e execute: `irm https://voicestudio.sh/install.ps1 | iex`
- **macOS / Linux:** Abra o terminal e execute: `curl -fsSL https://voicestudio.sh/install | sh`

**Opção 2: Gerenciadores de Pacotes ou Binários**
- **macOS:** Via Homebrew (`brew install --cask debpalash/tap/voicestudio`) ou download do `.dmg`.
- **Linux:** Disponível via AUR (`yay -S voicestudio-bin`), Snap, `.deb`, AppImage ou Nix.
- **Mobile:** APK para Android (ou via repositório F-Droid/Obtainium) e IPA para iOS (via sideloading).

**Primeiros Passos:**
1. Abra o VoiceStudio e vá para a aba **"Voice Cloning"**.
2. Faça o upload de um clipe de áudio curto e limpo (ou use um dos perfis pré-projetados, como "The Calm Guide").
3. Digite um texto na caixa de entrada e clique em "Generate". O aplicativo baixará o modelo necessário (ex: OmniVoice GGUF) automaticamente na primeira vez.
4. *Dica de fluxo pedagógico:* Use a ferramenta de **Ditado Local** enquanto resolve exercícios no papel. Fale seu raciocínio em voz alta; o VoiceStudio transcreverá e limpará as hesitações, criando um registro de estudo ativo e personalizado sem que você precise tirar as mãos do caderno.

---

## 📚 Links de Referência

- [Site Oficial](https://voicestudio.sh/)
- [Repositório Oficial no GitHub](https://github.com/debpalash/VoiceStudio)
- [Documentação Completa e Guias de Instalação](https://github.com/debpalash/VoiceStudio/blob/main/README.md)
- [Política de Licença e Uso Responsável](https://github.com/debpalash/VoiceStudio/blob/main/LICENSE-NOTICE.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **VoiceStudio** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Clonagem de Voz e a Internalização de Padrões Lógicos:** O VoiceStudio analisa alguns segundos de áudio para replicar a estrutura e a entonação de uma fala. Na matemática, o aluno deve aprender a "clonar" o raciocínio de exemplos resolvidos. Não se trata de decorar a resposta, mas de analisar o "sotaque" lógico do problema: quais premissas foram usadas? Qual foi a ordem das operações? Internalizar esse padrão permite que o aluno resolva novos problemas com a mesma naturalidade.
2. **Design de Voz por Texto e a Tradução de Representações:** O recurso de gerar uma voz a partir de uma descrição textual (ex: "tom calmo e lento") exige que a IA traduza linguagem natural em parâmetros acústicos. Na matemática, essa é a habilidade crucial de **traduzir enunciados textuais em linguagem simbólica**. O aluno deve praticar a conversão precisa de "a soma de dois números consecutivos" para "$x + (x + 1)$". A fluência nessa tradução é a base da modelagem matemática.
3. **Dublagem Sincronizada e a Verificação de Resultados:** Na dublagem, o áudio gerado deve se alinhar perfeitamente com o tempo e a intenção do vídeo original. Na resolução de problemas, isso é análogo à **verificação da resposta**. O aluno não deve considerar o trabalho terminado ao encontrar um valor para $x$. Ele deve "sincronizar" seu resultado com o enunciado: *"Se eu substituir esse valor na equação original, a igualdade se mantém? A unidade de medida faz sentido no contexto?"*. Se o "áudio" (resposta) não sincroniza com o "vídeo" (problema), o processo deve ser revisado.
