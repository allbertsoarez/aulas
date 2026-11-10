# 🌐 Aether P2P

## 📌 O que é o Aether?
O **Aether** é um aplicativo de código aberto e rede ponto a ponto (P2P) que oferece conteúdo novo e atualizado sobre temas de seu interesse. Ele funciona como uma alternativa descentralizada a fóruns e redes sociais tradicionais, com forte foco em privacidade, sem rastreamento e com moderação comunitária.

---

## 🚀 Instalação no Linux

O método mais universal e recomendado para instalar o Aether nas principais distribuições Linux é através do gerenciador de pacotes **Snap**. Siga as instruções de acordo com o seu sistema:

### 🟢 1. Ubuntu, Kubuntu, Xubuntu e Linux Mint
O Snap já vem pré-instalado e configurado na maioria dessas distribuições. Basta abrir o terminal (`Ctrl` + `Alt` + `T`) e executar:

```bash
sudo snap install aetherp2p
```

---

### 🔵 2. Fedora e derivados
No Fedora, é necessário habilitar o suporte ao Snap antes da instalação. Siga os 3 passos abaixo:

**Passo 1:** Instale o gerenciador `snapd`:
```bash
sudo dnf install snapd
```
*(⚠️ **Importante:** Após este passo, reinicie o computador ou encerre a sessão para que as alterações tenham efeito).*

**Passo 2:** Crie um link simbólico para ativar o suporte ao "Snap clássico":
```bash
sudo ln -s /var/lib/snapd/snap /snap
```

**Passo 3:** Instale o Aether P2P:
```bash
sudo snap install aetherp2p
```

---

### 🟠 3. Debian e derivados
Se o Snap ainda não estiver habilitado no seu Debian, siga os dois passos abaixo:

**Passo 1:** Atualize os repositórios e instale o `snapd`:
```bash
sudo apt update
sudo apt install snapd
```

**Passo 2:** Instale o Aether P2P:
```bash
sudo snap install aetherp2p
```
*(Nota: Se você não tiver o `sudo` configurado, remova a palavra `sudo` e execute os comandos diretamente como usuário `root`).*

---

## 💻 Gerenciamento Básico (Pós-Instalação)

| Ação | Comando no Terminal |
| :--- | :--- |
| **Executar o App** | `aetherp2p` (ou busque no menu de aplicativos) |
| **Atualizar o App** | `sudo snap refresh aetherp2p` |
| **Verificar a versão** | `snap info aetherp2p` |
| **Remover o App** | `sudo snap remove aetherp2p` |

---

## 📚 Links de Referência

- [Download Oficial](https://getaether.net/dlstarted/)
- [Documentação Oficial](https://getaether.net/docs/)
- [Repositório no GitHub](https://github.com/aethereans/aether-app)
- [Aether P2P no Snapcraft](https://snapcraft.io/aetherp2p)
- [Tutorial de Instalação (Sempre Update)](https://sempreupdate.com.br/linux/tutoriais/como-instalar-o-aether-p2p-um-uma-rede-ponto-a-ponto-no-ubuntu-linux-mint-fedora-debian/)
- [Discussão no Reddit](https://www.reddit.com/r/RedditAlternatives/comments/143pw2a/aether_an_open_source_p2p_community_board_with/)

---

Essa formatação minimalista nos links facilita ainda mais a varredura visual e a cópia rápida. Se precisar ajustar mais algum detalhe ou adicionar uma nova seção ao seu material, é só avisar!
