# 🔄 Syncthing

## 📌 O que é o Syncthing?
O **Syncthing** é uma ferramenta de sincronização de arquivos contínua, descentralizada e de código aberto. Sua filosofia central é a **soberania absoluta dos dados, a privacidade e a arquitetura ponto a ponto (P2P)**: diferentemente de serviços de nuvem comerciais (como Google Drive ou Dropbox) que armazenam seus arquivos em servidores de terceiros, o Syncthing sincroniza dados diretamente entre seus dispositivos (computador, celular, servidor NAS). Seus arquivos são criptografados durante a transferência, nunca são armazenados em um servidor central e você mantém controle total sobre onde, quando e como seus dados são replicados.

- **Categoria:** Ferramenta de Sincronização de Arquivos Contínua, Descentralizada e Criptografada
- **Plataforma:** Windows / macOS / Linux / Android / iOS / NAS
- **Palavras-chave:** Syncthing, Sincronização, P2P, Privacidade, Código Aberto, Backup Local, Descentralizado, Criptografia, Sem Nuvem

---

## ✨ Principais Destaques
- **Arquitetura Descentralizada (P2P):** Não há servidor central. Os dispositivos se conectam diretamente entre si (ou via servidores de relé criptografados, se não houver conexão direta), garantindo que apenas você tenha acesso aos seus dados.
- **Sincronização em Tempo Real:** Detecta alterações nos arquivos instantaneamente e as replica para os outros dispositivos conectados, mantendo tudo atualizado sem necessidade de ação manual.
- **Criptografia de Ponta a Ponta:** Toda a comunicação é protegida por TLS, e cada dispositivo é identificado por uma chave criptográfica forte, impedindo interceptações ou acesso não autorizado.
- **Histórico de Versões (File Versioning):** Configuração nativa para manter versões anteriores de arquivos modificados ou apagados (ex: "Lixeira" ou "Versionamento por Tempo"), oferecendo uma rede de segurança contra exclusões acidentais ou corrupção de dados.

---

## 🚀 Instalação e Primeiros Passos

O Syncthing é leve, não requer criação de conta e está disponível para praticamente qualquer plataforma.

**Passo 1: Instalação nos Dispositivos**
- **Windows:** Baixe o instalador ou use o gerenciador de pacotes: `winget install Syncthing.Syncthing`
- **macOS:** Instale via Homebrew: `brew install --cask syncthing`
- **Linux:** Disponível nos repositórios da maioria das distribuições (ex: `sudo apt install syncthing`) ou via Flatpak.
- **Android:** Baixe o aplicativo oficial na [Google Play Store](https://play.google.com/store/apps/details?id=com.nutomic.syncthingandroid) ou, preferencialmente, via [F-Droid](https://f-droid.org/packages/com.nutomic.syncthingandroid/) (versão totalmente livre).

**Passo 2: Primeiros Passos (Conectando Dois Dispositivos)**
1. Inicie o Syncthing no seu computador. Ele abrirá automaticamente uma interface web em `http://127.0.0.1:8384`.
2. Clique em **"Adicionar Dispositivo Remoto"** e insira o "ID do Dispositivo" (um código longo) que você encontrará nas configurações do Syncthing no seu segundo dispositivo (ex: seu celular).
3. No segundo dispositivo, uma notificação aparecerá pedindo para aceitar a conexão do computador. Aceite.
4. Volte ao computador, selecione uma pasta (ex: "Documentos de Estudo"), clique em "Compartilhar" e marque o dispositivo recém-adicionado.
5. No segundo dispositivo, aceite o compartilhamento da pasta e escolha onde salvá-la localmente. A sincronização começará imediatamente.
6. *Dica de fluxo:* Para uso acadêmico, crie uma pasta chamada "Vault Obsidian" ou "Material de Aula" e sincronize-a entre seu PC e seu tablet/celular. Assim, você pode revisar anotações ou ler PDFs em qualquer lugar, sem depender de internet ou serviços de nuvem de terceiros.

---

## 📚 Links de Referência

- [Site Oficial e Downloads](https://syncthing.net/downloads/)
- [Repositório Oficial no GitHub](https://github.com/syncthing/syncthing)
- [Documentação Oficial Completa](https://docs.syncthing.net/)
- [Syncthing no F-Droid (Android)](https://f-droid.org/packages/com.nutomic.syncthingandroid/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Syncthing** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Sincronização Contínua e a Revisão Espaçada:** O Syncthing trabalha em segundo plano para garantir que nenhum dispositivo fique desatualizado. Na aprendizagem, o cérebro funciona de maneira similar: sem uma "sincronização" regular (revisão espaçada), o conhecimento entra em estado de "desync" (esquecimento). Ensine o aluno a configurar "sincronizações mentais" automáticas: revisões breves e frequentes do material antigo, garantindo que o conhecimento esteja sempre atualizado e acessível na memória de longo prazo, sem a necessidade de uma "reinstalação" massiva na véspera da prova.
2. **Arquitetura Descentralizada (P2P) e a Autonomia do Aprendizado:** No Syncthing, não há um "servidor central" ditando a verdade; cada nó é igual e valida os dados diretamente. Na educação, o objetivo é transformar o aluno de um "cliente passivo" (que apenas recebe dados do professor-servidor) em um **nó ativo e autônomo** da rede de conhecimento. Ele deve aprender a cruzar fontes, validar teoremas por conta própria e construir seu entendimento de forma independente, não dependendo exclusivamente de uma única fonte de autoridade.
3. **Histórico de Versões e o Valor do Rascunho Iterativo:** O recurso de versionamento do Syncthing permite recuperar um arquivo exatamente como ele estava antes de uma mudança catastrófica. Na resolução de problemas matemáticos, o aluno deve tratar seu rascunho com a mesma lógica. Em vez de apagar freneticamente um cálculo que deu errado (perdendo a trilha do raciocínio), ele deve riscá-lo levemente ou isolá-lo em uma seção de "tentativas". Manter o "histórico de versões" do seu pensamento permite auditar *onde* a lógica falhou, transformando o erro em um dado valioso de aprendizado, e não em algo a ser escondido ou apagado.
