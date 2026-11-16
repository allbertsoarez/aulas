# 🎬 Cutwire Drift

## 📌 O que é o Cutwire Drift?
O **Drift** (da CutWire Studios) é um editor de vídeo para desktop e mobile, gratuito e de código aberto (licença GPLv3), construído sobre as robustas tecnologias Qt 6 e FFmpeg. Sua filosofia central é a "edição na velocidade do criador, sem amarras": ele oferece recursos de nível profissional (como keyframes avançados, correção de cor e rastreamento de máscaras) sem marcas d'água, sem exigência de criação de contas, sem assinaturas e sem *lock-in* de nuvem. Todo o processamento, incluindo recursos de IA, ocorre localmente no dispositivo do usuário, garantindo privacidade absoluta e soberania sobre o projeto.

- **Categoria:** Editor de Vídeo Desktop de Código Aberto
- **Plataforma:** Windows / macOS / Linux / Android
- **Palavras-chave:** Edição de Vídeo, Código Aberto, Sem Marca D'água, Qt 6, FFmpeg, Privacidade, Legendas Automáticas, IA Local, MCP

---

## ✨ Principais Destaques
- **Soberania e Privacidade (Local-first):** Diferente de editores "gratuitos" que limitam recursos ou inserem marcas d'água, o Drift é 100% livre. Seus arquivos e dados nunca saem do seu dispositivo, a menos que você decida exportá-los.
- **Ferramentas Profissionais Acessíveis:** Linha do tempo multi-faixa, keyframing avançado (com curvas de Bézier e *easing*), correção de cor com escopos (histograma, formas de onda) e LUTs, além de máscaras com rastreamento (tracking) pontual e planar.
- **IA Integrada e Local:** Geração de legendas automáticas a partir da fala, clonagem de voz, remoção de fundo (cutouts) e estabilização de vídeo. Os modelos de IA são baixados uma única vez e processados inteiramente na sua máquina.
- **Automação via Agentes (MCP):** Suporte nativo ao *Model Context Protocol*. Isso permite que assistentes de IA (como Cursor ou Claude Code) interajam diretamente com a linha do tempo aberta para importar, cortar, adicionar efeitos ou exportar, sob seu controle e com opção de desfazer (*undo*).

---

## 🚀 Instalação e Primeiros Passos

O Drift oferece opções de instalação nativas para garantir o melhor desempenho em cada sistema operacional.

**Opção 1: Desktop (Windows, macOS, Linux)**
- **Linux:** Instale via Flathub: `flatpak install flathub org.cutwire.Drift`
- **macOS:** Instale via Homebrew: `brew install --cask cutwire-studios/tap/drift` (ou baixe o `.dmg` no GitHub).
- **Windows:** Baixe o instalador `.exe` ou a versão portátil (`.zip`) na página de Releases do GitHub ou via Microsoft Store.

**Opção 2: Mobile (Android)**
- Disponível na Google Play Store ou via download direto do arquivo `.apk` na página de Releases do GitHub (ideal para Chromebooks ou tablets).

**Primeiros Passos:**
1. Abra o Drift e clique em **"New Project"**.
2. Arraste seus vídeos, áudios ou imagens diretamente para a **Source Lab** (para pré-visualização e corte rápido) ou direto para a linha do tempo (*timeline*).
3. Para adicionar legendas automáticas, vá para a aba **"Subtitles"**, selecione o clipe de áudio e clique em gerar. O processo roda localmente.
4. Ao finalizar, vá para a aba **"Export"**, escolha o formato (ex: MP4) e renderize. O vídeo final será limpo, sem marcas d'água ou limitações de resolução.

---

## 📚 Links de Referência

- [Site Oficial](https://cutwire.org/drift/)
- [Repositório Principal no GitHub](https://github.com/CutWire-Studios/Drift)
- [Página de Releases (Downloads Diretos)](https://github.com/CutWire-Studios/Drift/releases)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Cutwire Drift** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Keyframes e Interpolação (O Caminho entre os Pontos):** No Drift, você define um *keyframe* inicial e um final, e o software interpola o movimento entre eles. Na matemática, os alunos frequentemente sabem o "dado inicial" (keyframe 1) e a "resposta final" (keyframe 2), mas pulam a interpolação (o desenvolvimento). Incentive o aluno a focar no *caminho*: preencher os passos intermediários (as propriedades aplicadas, as simplificações) é onde o verdadeiro aprendizado ocorre, não apenas na conexão dos extremos.
2. **A Linha do Tempo e a Sequência Lógica:** Editar um vídeo exige que os clipes estejam em uma ordem causal e lógica para que a narrativa faça sentido. Uma demonstração matemática é exatamente uma "linha do tempo" lógica. Se um teorema é aplicado antes de suas condições serem satisfeitas, o "vídeo" da resolução quebra. Ensine o aluno a revisar a "linha do tempo" de sua prova, verificando se cada passo é uma consequência válida do anterior.
3. **Processamento Local vs. Nuvem (Internalização do Conhecimento):** O Drift processa tudo localmente para garantir que o usuário não dependa de servidores externos. No estudo, isso é uma analogia perfeita para a internalização. Se o aluno precisa "consultar a nuvem" (o livro, a fórmula colada ou a internet) para cada operação básica, seu processamento cognitivo fica lento e dependente. Dominar os fundamentos de memória ("rodar localmente") libera a capacidade mental para resolver problemas complexos e criativos.
