# 🎙️ VoiceBox

## 📌 O que é o VoiceBox?
O **VoiceBox** é um estúdio de voz com inteligência artificial de código aberto, projetado para clonar vozes, gerar fala (TTS), transcrever áudio (STT) e realizar ditado com total privacidade. Sua filosofia central é a **soberania dos dados, a execução local e a democratização da criação**: diferentemente de serviços de nuvem caros e fechados (como ElevenLabs), o VoiceBox roda inteiramente no seu hardware (utilizando motores como Qwen3-TTS, Whisper e modelos otimizados via MLX ou CUDA). Isso garante que suas amostras de voz, transcrições e dados de áudio nunca saiam do seu computador, eliminando riscos de vigilância ou custos por caractere.

- **Categoria:** Estúdio de Voz com IA de Código Aberto e Execução 100% Local
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** VoiceBox, Clonagem de Voz, IA Local, TTS, STT, Whisper, MCP, Privacidade, Código Aberto, Ditado, Qwen

---

## ✨ Principais Destaques
- **Clonagem de Voz Multi-Motor:** Suporta diversos motores de síntese (Qwen3-TTS, Chatterbox, LuxTTS, Kokoro) para clonagem de alta qualidade a partir de apenas 3 segundos de áudio, vozes pré-definidas ou controle de entrega por linguagem natural (ex: "fale de forma calma e lenta").
- **Ditado Global e Entrada de Voz:** Atalho de teclado global para ditar em qualquer aplicativo (com colagem automática via acessibilidade no macOS/Windows), usando transcrição local via Whisper, com opção de refinamento por LLM para remover hesitações ("hum", "ahn").
- **Integração com Agentes via MCP:** Servidor de *Model Context Protocol* (MCP) embutido, permitindo que assistentes de IA (como Claude Code, Cursor ou Cline) "falem" com você usando vozes clonadas, com um indicador visual (pill) na tela mostrando quem está falando.
- **Personalidades de Voz:** Anexe uma "personalidade" (prompt de sistema) a um perfil de voz. O LLM local (Qwen3) pode reescrever ou compor textos no tom e estilo desse personagem antes da síntese de fala, tudo sem enviar dados para a nuvem.
- **Editor de Histórias e Efeitos de Áudio:** Linha do tempo multi-faixa para narrativas e conversas, com um pipeline de efeitos de pós-processamento (pitch shift, reverb, compressão) aplicáveis em tempo real.

---

## 🚀 Instalação e Primeiros Passos

O VoiceBox é distribuído como um aplicativo nativo (construído com Tauri/Rust), evitando o peso de frameworks como Electron.

**Passo 1: Download**
- **macOS:** Baixe o instalador `.dmg` (disponível para Apple Silicon/ARM e Intel/x64) no site oficial.
- **Windows:** Baixe o instalador `.msi` (com suporte automático a CUDA para placas NVIDIA).
- **Linux:** Disponível via compilação a partir do código-fonte ou Docker (consulte a documentação oficial).

**Passo 2: Configuração Inicial**
1. Abra o VoiceBox. Na primeira execução, ele pode baixar os modelos iniciais (ex: Whisper Small ou Qwen3-TTS 0.6B) diretamente da interface.
2. Vá em **"Create Voice"** e faça o upload de um clipe de áudio de 3 a 30 segundos (ou grave diretamente no microfone) para clonar um perfil de voz.
3. Dê um nome ao perfil (ex: "Meu Narrador") e teste digitando um texto na caixa de geração.

**Passo 3: Ativando o Ditado Global (Opcional, mas recomendado)**
1. Nas configurações, ative o "Global Dictation".
2. No macOS, conceda as permissões de "Monitoramento de Entrada" e "Acessibilidade" quando solicitado (necessário para colar o texto transcrito no aplicativo em foco).
3. *Dica de fluxo pedagógico:* Use o atalho de ditado para explicar um conceito matemático em voz alta enquanto resolve um exercício no papel. O VoiceBox transcreverá e refinará seu pensamento, criando um registro de estudo ativo e personalizado sem que você precise tirar as mãos do caderno.

---

## 📚 Links de Referência

- [Site Oficial](https://voicebox.sh/)
- [Repositório Oficial no GitHub](https://github.com/jamiepine/voicebox)
- [Documentação de Instalação e Solução de Problemas](https://voicebox.sh/linux-install) *(e guias gerais no site)*
- [Referência da API e MCP](https://github.com/jamiepine/voicebox/blob/main/README.md#api)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **VoiceBox** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Clonagem de Voz e a Apropriação de Padrões de Pensamento:** O VoiceBox analisa amostras de áudio para replicar padrões de entonação e criar uma voz funcional. Na aprendizagem, o aluno deve aprender a "clonar" o raciocínio de grandes matemáticos ou do professor. Não se trata de copiar cegamente, mas de internalizar os padrões de pensamento (o "sotaque" lógico) até que a resolução de problemas soe natural e autêntica, como se fosse o próprio raciocínio do aluno, e não uma fórmula decorada.
2. **Ditado Local (STT) e a Externalização da Carga Cognitiva:** O recurso de ditado global permite transformar fala em texto instantaneamente, sem depender da nuvem. Na matemática, isso é análogo à **externalização do pensamento**. O aluno não deve tentar resolver problemas complexos apenas "de cabeça". Ele precisa "ditar" seus passos para o papel (ou para um rascunho), externalizando a carga da memória de trabalho. Isso libera o cérebro para focar na lógica de alto nível e na estratégia, em vez de gastar energia apenas para reter dados intermediários.
3. **Personalidades de Voz e a Flexibilidade de Representação:** O VoiceBox permite que um mesmo texto seja reescrito e falado com diferentes "personalidades" (ex: um detetive cínico, um professor calmo). Na aprendizagem, o aluno deve praticar a **flexibilidade de representação**. Ele deve ser capaz de explicar o mesmo conceito matemático (ex: o Teorema de Pitágoras) de diferentes maneiras: formalmente (para uma prova), visualmente (desenhando para um colega) ou analogicamente (como uma história). Dominar múltiplas "vozes" explicativas é o verdadeiro sinal de compreensão profunda (a essência da Técnica Feynman).
