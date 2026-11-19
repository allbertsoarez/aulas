# 📺 FreeTube

## 📌 O que é o FreeTube?
O **FreeTube** é um aplicativo de desktop de código aberto projetado para reproduzir vídeos do YouTube com a privacidade como prioridade absoluta. Sua filosofia central é devolver o controle ao usuário: ele permite assistir ao conteúdo da plataforma sem anúncios, impedindo que o Google rastreie suas visualizações por meio de cookies e JavaScript. Diferente do site oficial, o FreeTube armazena suas inscrições, histórico e playlists localmente no seu dispositivo, eliminando a necessidade de criar ou fazer login em uma conta do Google.

- **Categoria:** Cliente de Vídeo Desktop com Foco em Privacidade
- **Plataforma:** Windows (10+) / macOS (10.15+) / Linux
- **Palavras-chave:** YouTube, Privacidade, Código Aberto, Sem Anúncios, Anti-Rastreamento, Electron, Invidious, Piped

---

## ✨ Principais Destaques
- **Privacidade e Anonimato Total:** Não envia dados de telemetria, não usa cookies de rastreamento e não requer login. Suas preferências de visualização nunca são usadas para treinar algoritmos de recomendação.
- **Experiência Livre de Anúncios:** Bloqueia nativamente todos os anúncios de vídeo e banner, proporcionando uma reprodução contínua e sem interrupções.
- **Gerenciamento Local de Dados:** Inscrições, histórico de visualização e playlists são salvos em um banco de dados local no seu computador, garantindo que seus interesses permaneçam seus.
- **Backends Alternativos (Invidious/Piped):** Por padrão, o FreeTube pode ser configurado para buscar os dados de vídeo através de instâncias do Invidious ou Piped, adicionando uma camada extra de anonimato ao ocultar seu endereço IP dos servidores diretos do YouTube.

---

## 🚀 Instalação e Primeiros Passos

O FreeTube é construído com Electron, o que garante uma experiência consistente e fácil de instalar em qualquer sistema operacional moderno.

**Opção 1: Aplicativo Desktop (Recomendado)**
- **Windows / macOS:** Baixe o instalador oficial (`.exe` ou `.dmg`) diretamente do site.
- **Linux:** A instalação via **Flatpak** é a mais recomendada para garantir todas as dependências:
  `flatpak install flathub io.freetubeapp.FreeTube`

**Opção 2: Extensão para Navegador (Complementar)**
- Disponível na Chrome Web Store para quem prefere não instalar um aplicativo separado, aplicando filtros de privacidade diretamente na aba do YouTube.

**Primeiros Passos:**
1. Abra o FreeTube após a instalação. A interface será limpa e sem anúncios.
2. Use a barra de pesquisa no topo para encontrar um canal ou vídeo de seu interesse (ex: "aula de matemática").
3. Ao abrir um vídeo, clique no botão **"Subscribe"** (Inscrever-se). O FreeTube salvará isso localmente, sem notificar o YouTube.
4. *Dica de privacidade:* Vá em **Configurações > Geral** e altere o "Backend" de "YouTube" para "Invidious" ou "Piped" se desejar um nível máximo de anonimato na rede.

---

## 📚 Links de Referência

**Oficiais e Código:**
- [Site Oficial](https://freetubeapp.io/)
- [Repositório no GitHub](https://github.com/FreeTubeApp/FreeTube)
- [FreeTube no Flathub (Linux)](https://flathub.org/apps/io.freetubeapp.FreeTube)

**Extensões e Mobile:**
- [Extensão para Chrome/Edge](https://chromewebstore.google.com/detail/freetube/conbeomgbdgkeepaghdmfogjbnchnpkb?hl=pt-BR)
- [Aplicativo Relacionado na Google Play](https://play.google.com/store/apps/details?id=com.freetube.live&hl=pt_BR)

**Análises da Comunidade:**
- [YouTube com Privacidade: FreeTube (Edivaldo Brito)](https://www.edivaldobrito.com.br/youtube-com-privacidade-freetube/)
- [Conheça o FreeTube: um cliente do YouTube com foco em privacidade (Sempre Update)](https://sempreupdate.com.br/linux/conheca-o-freetube-um-cliente-do-youtube-com-foco-em-privacidade/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **FreeTube** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Armazenamento Local vs. Nuvem (Internalização do Conhecimento):** O FreeTube mantém suas inscrições e histórico no dispositivo, sem depender dos servidores do Google. Na matemática, isso é uma analogia perfeita para a internalização. O aluno não deve depender eternamente da "nuvem" (o livro aberto, a fórmula colada na mesa ou o professor ditando o passo a passo). Ele precisa construir seu próprio "banco de dados local" mental de conceitos e procedimentos para ter autonomia real na resolução de problemas.
2. **Bloqueio de Rastreadores e Anúncios (Ambiente de Foco Profundo):** O FreeTube remove o ruído visual e as interrupções comerciais. Para estudar matemática de alto nível, o aluno precisa criar seu próprio "FreeTube mental": um ambiente de estudo livre de "anúncios" (notificações de celular, abas de redes sociais, música com letra). A eliminação dessas distrações é pré-requisito para atingir o estado de fluxo (*deep work*) necessário para absorver lógica complexa.
3. **Backends Alternativos (Múltiplas Perspectivas de Resolução):** O FreeTube permite trocar o backend (YouTube, Invidious, Piped) para obter o mesmo vídeo de fontes diferentes. Na matemática, incentive o aluno a não ficar preso a um único método de resolução. Se a abordagem algébrica (Backend A) estiver muito confusa ou "travando", ele deve ter a flexibilidade de trocar para uma abordagem geométrica ou numérica (Backend B) para atingir o mesmo resultado. A versatilidade é um sinal de domínio.
