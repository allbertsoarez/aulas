# 🎬 Jellyfin

## 📌 O que é o Jellyfin?
O **Jellyfin** é o "Sistema de Mídia de Software Livre" (*The Free Software Media System*). Sua filosofia central é a **soberania digital, a privacidade e a ausência de barreiras artificiais**: diferentemente de soluções proprietárias (como Plex ou Emby) que bloqueiam recursos avançados atrás de paywalls ou rastreiam os hábitos de visualização dos usuários, o Jellyfin é 100% gratuito e de código aberto (FOSS). Ele permite que você transforme seu computador ou servidor em um hub central de streaming, organizando seus filmes, séries, músicas e fotos com metadados ricos, sem depender de serviços de nuvem de terceiros.

- **Categoria:** Sistema de Gerenciamento e Streaming de Mídia de Código Aberto
- **Plataforma:** Windows / macOS / Linux / Docker / Android / iOS / Web
- **Palavras-chave:** Jellyfin, Media Server, Código Aberto, Streaming, FOSS, Privacidade, Transcodificação, Auto-hospedagem, Alternativa ao Plex

---

## ✨ Principais Destaques
- **Liberdade Total (Sem "Premium"):** Todos os recursos, incluindo reprodução em múltiplos dispositivos simultâneos, DVR de TV ao vivo e autenticação de dois fatores (2FA), são gratuitos e desbloqueados por padrão.
- **Transcodificação Eficiente:** Suporta aceleração por hardware (VAAPI, NVENC, QuickSync), permitindo converter vídeos em alta resolução (ex: 4K) em tempo real para formatos mais leves, garantindo reprodução fluida em dispositivos móveis ou conexões de internet mais lentas.
- **Ecossistema Rico de Clientes:** Possui aplicativos nativos e bem mantidos para Android, iOS, Android TV, Roku, Kodi, além de uma interface web responsiva e moderna.
- **Organização Automática de Metadados:** Busca automaticamente capas, sinopses, elencos e trilhas sonoras de bancos de dados públicos (como TMDB e TheTVDB), transformando uma pasta de arquivos soltos em uma "Netflix pessoal" visualmente deslumbrante.

---

## 🚀 Instalação e Primeiros Passos

O Jellyfin é altamente flexível, mas a instalação via contêiner é a mais recomendada pela comunidade por facilitar atualizações e isolamento.

**Opção 1: Docker (Recomendado para Linux/NAS/Windows)**
- Crie um arquivo `docker-compose.yml` básico:
  ```yaml
  services:
    jellyfin:
      image: jellyfin/jellyfin:latest
      container_name: jellyfin
      ports:
        - "8096:8096"
      volumes:
        - ./config:/config
        - ./cache:/cache
        - /caminho/para/sua/midia:/media
      restart: unless-stopped
  ```
- Execute `docker-compose up -d`.

**Opção 2: Instalação Nativa**
- **Windows/macOS:** Baixe o instalador direto na [página de downloads](https://jellyfin.org/downloads/server).
- **Linux:** Disponível via repositórios `.deb` (Debian/Ubuntu), `.rpm` (Fedora) ou como AppImage/Flatpak.

**Primeiros Passos:**
1. Acesse `http://localhost:8096` no seu navegador.
2. Siga o assistente de configuração inicial: crie um usuário administrador e defina o idioma para Português.
3. Adicione suas **Bibliotecas de Mídia** (ex: "Filmes", "Séries", "Música"), apontando para as pastas onde seus arquivos estão armazenados.
4. *Dica de fluxo:* Nas configurações de **Reprodução > Transcodificação**, ative a aceleração por hardware da sua GPU (se disponível) para reduzir drasticamente o uso da CPU durante a reprodução.

---

## 📚 Links de Referência

- [Site Oficial](https://jellyfin.org/)
- [Página de Downloads do Servidor](https://jellyfin.org/downloads/server)
- [Repositório Oficial no GitHub](https://github.com/jellyfin/jellyfin)
- [Jellyfin na Wikipédia](https://en.wikipedia.org/wiki/Jellyfin)
- [Aplicativo Oficial para Android (Google Play)](https://play.google.com/store/apps/details?id=org.jellyfin.mobile&hl=pt_BR)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Jellyfin** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Biblioteca Centralizada e a "Fonte Única da Verdade":** O Jellyfin pega arquivos de vídeo soltos e desorganizados e os transforma em uma biblioteca indexada e pesquisável. No estudo, o aluno não deve ter PDFs, anotações e links espalhados aleatoriamente. Ele deve construir sua própria "biblioteca de mídia" do conhecimento (no Obsidian ou em pastas bem estruturadas), onde cada conceito tem seu "cartaz" (resumo), sua "sinopse" (definição) e está fácil de ser encontrado. A organização externa reflete e facilita a organização interna da mente.
2. **Transcodificação e a Adaptação da Complexidade:** O servidor Jellyfin "transcodifica" um vídeo pesado em 4K para uma versão mais leve em 720p se a tela do celular do usuário for pequena ou a internet for lenta, sem perder a essência do filme. Na matemática, quando um aluno se depara com uma demonstração formal "pesada" (4K) que ele não consegue processar, ele deve aprender a "transcodificá-la": criar uma versão simplificada, com números pequenos ou uma analogia visual (720p), para entender a lógica central. Uma vez compreendida a essência, ele pode voltar à versão "4K" do rigor formal.
3. **Software Livre (FOSS) e a Autonomia Intelectual:** O Jellyfin não prende o usuário em um ecossistema fechado; ele dá o controle total dos dados. Da mesma forma, o aluno deve buscar a **autonomia intelectual**. Em vez de depender de "caixas pretas" (aplicativos que resolvem a equação sem mostrar o passo a passo, ou fórmulas decoradas sem compreensão), ele deve buscar entender os mecanismos internos do conhecimento. Quem entende como a "engrenagem" funciona não fica refém de uma única ferramenta ou explicação.
