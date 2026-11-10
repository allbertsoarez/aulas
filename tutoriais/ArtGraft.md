# 🎨 ArtCraft

## 📌 O que é o Ecossistema ArtCraft?
O **ArtCraft** e seus aplicativos irmãos ("Crafting Apps") representam uma nova geração de software criativo profissional, construído do zero em **Rust**. O objetivo do projeto é oferecer alternativas de código aberto, nativas e de alto desempenho a suítes proprietárias (como Adobe Creative Cloud), com foco absoluto em privacidade, precisão técnica e interoperabilidade com agentes de IA (sendo "agent-ready" via CLI, JSON ou MCP).

---

## ✨ Principais Destaques (Por Ferramenta)

### 🧠 ArtCraft (O Estúdio de IA)
- **O que é:** Um "IDE para artistas" focado em criação interativa de imagens e vídeos com IA.
- **Destaques:** Composição 2D e 3D, bloqueio de cena (scene blocking), pose de personagens e transferência de identidade. Transforma a "engenharia de prompt" em um processo visual e controlável, em vez de apenas texto.

### 🖼️ PhotoCraft (Alternativa ao Photoshop)
- **O que é:** Um editor de imagens baseado em camadas, recriado em "clean-room" (sem código proprietário) em Rust puro.
- **Destaques:** Suporte real a arquivos `.PSD` (abertura e salvamento), camadas de ajuste não destrutivas, motor de pincéis avançado, ferramentas vetoriais e compatibilidade total com atalhos de teclado tradicionais.

### 🎬 FilmCraft (Alternativa ao Premiere/DaVinci)
- **O que é:** Um editor de vídeo não linear (NLE) profissional.
- **Destaques:** Linha do tempo familiar com matemática de tempo exata (sem "drift" de frames), correção de cor em 32-bit float (luz linear), mixagem de áudio precisa e codecs próprios em Rust (H.264, HEVC, ProRes) sem depender do FFmpeg.

### 📷 LightCraft (Alternativa ao Lightroom)
- **O que é:** Um gerenciador de biblioteca de fotos e revelador RAW não destrutivo.
- **Destaques:** Pipeline de cor de alta fidelidade (wide-gamut), máscaras avançadas (incluindo seleção por IA com SAM 3), presets e organização robusta de grandes acervos com metadados pesquisáveis.

---

## 🚀 Opções de Instalação

Todas as ferramentas seguem o mesmo padrão de distribuição, garantindo flexibilidade para diferentes níveis de usuários:

1. **Instaladores Nativos (Recomendado):** Disponíveis para Windows (`.msi` ou `.zip` portátil), macOS (`.dmg` universal) e Linux (`.AppImage`, `.deb`, `.rpm` ou Flatpak). Basta baixar no site oficial.
2. **Compilação a partir do Código-Fonte:** Para desenvolvedores ou usuários avançados, como todos os projetos são em Rust, basta clonar o repositório e executar `cargo run --release`.
3. **Versão Web (WebAssembly):** Algumas ferramentas possuem versões que rodam diretamente no navegador, sem necessidade de instalação.

*(Dica: Para o dia a dia, os instaladores nativos oferecem o melhor desempenho, aproveitando a aceleração por GPU via Vulkan, Metal ou DirectX).*

---

## 📚 Links de Referência

- [ArtCraft (Site Oficial)](https://app.getartcraft.com/)
- [ArtCraft (Repositório no GitHub)](https://github.com/storytold/artcraft)
- [PhotoCraft (Site Oficial)](https://getartcraft.com/apps/photocraft)
- [PhotoCraft (Repositório no GitHub)](https://github.com/storytold/photocraft)
- [FilmCraft (Site Oficial)](https://getartcraft.com/apps/filmcraft)
- [FilmCraft (Repositório no GitHub)](https://github.com/storytold/filmcraft)
- [LightCraft (Site Oficial)](https://getartcraft.com/apps/lightcraft)
- [LightCraft (Repositório no GitHub)](https://github.com/storytold/lightcraft)
