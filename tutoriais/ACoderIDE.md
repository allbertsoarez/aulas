# 💻 A-Coder IDE

## 📌 O que é o A-Coder IDE?
O **A-Coder IDE** é um editor de código de código aberto e nativo de IA, construído sobre a base sólida do VS Code. Desenvolvido pela *The A-Tech Corporation*, ele transforma o ambiente de desenvolvimento de um editor passivo em um parceiro de codificação inteligente e autônomo. O projeto tem forte foco em privacidade ("local-first"), suporte a modelos de IA locais (como Ollama e vLLM) e integração avançada via Model Context Protocol (MCP).

---

## ✨ Principais Destaques
- **4 Modos de IA**: Chat (assistência equilibrada), Plan (pesquisa profunda), Agent (autonomia para tarefas complexas) e Learn (tutoria interativa com exercícios).
- **Privacidade Total**: Suporte a modelos locais e conexão direta com provedores de nuvem, sem intermediários retendo seus dados.
- **Aplicação de Código Precisa**: Sistema de "Fast Apply" que garante que as alterações sugeridas pela IA sejam aplicadas no arquivo exato, com visualização de *diff* antes da confirmação.
- **Migração Sem Atrito**: Importação fácil de configurações, atalhos e extensões vindos do VS Code, Cursor ou Windsurf.

---

## 🚀 Instalação

O projeto oferece scripts oficiais de instalação que baixam a versão mais recente, verificam a integridade do arquivo (via checksum SHA-256) e configuram o ambiente automaticamente.

### 🟠 1. Linux
Você pode usar o comando de instalação rápida ou baixar o pacote manualmente.

**Opção A: Instalação Rápida (Recomendada)**
Abra o terminal e execute o script de instalação oficial:
```bash
curl -fsSL https://raw.githubusercontent.com/hamishfromatech/A-Coder/main/install.sh | bash
```

**Opção B: Instalação Local (Com opções avançadas)**
Baixe o script `install.sh` do repositório e execute com permissões:
```bash
# Instalação padrão (requer sudo, instala em /opt/a-coder)
chmod +x install.sh
sudo ./install.sh

# Instalação sem privilégios de root (instala em ~/.local/share/a-coder)
./install.sh --user

# Instalar uma versão específica
./install.sh --version 1.9.15
```
*(Dica: Execute `./install.sh --help` para ver todas as opções, como `--tarball` ou `--dry-run`)*

**Opção C: Instalação Manual**
Baixe os pacotes `.deb`, `.rpm` ou `.tar.gz` diretamente na [página de Releases do GitHub](https://github.com/hamishfromatech/A-Coder/releases).

---

### 🔵 2. Windows
A instalação no Windows pode ser feita via PowerShell ou por instaladores tradicionais.

**Opção A: Instalação Rápida via PowerShell (Recomendada)**
Abra o PowerShell como Administrador e execute:
```powershell
irm https://raw.githubusercontent.com/hamishfromatech/A-Coder/main/install.ps1 | iex
```

**Opção B: Instalação Local via PowerShell (Com opções avançadas)**
Baixe o script `install.ps1` e execute:
```powershell
# Instalação para o usuário atual (sem necessidade de admin)
.\install.ps1 -UserSetup

# Instalação silenciosa (Silent install)
.\install.ps1 -Quiet

# Instalar uma versão específica
.\install.ps1 -Version 1.9.15
```
*(Dica: Execute `Get-Help .\install.ps1` para ver todas as opções, como `-Portable` ou `-Msi`)*

**Opção C: Instalação Manual**
Baixe os instaladores `.exe` (System ou User), `.msi` ou a versão portátil `.zip` diretamente na [página de Releases do GitHub](https://github.com/hamishfromatech/A-Coder/releases).

---

## 💻 Gerenciamento Básico (Pós-Instalação)
- **Primeira Execução**: Abra o A-Coder IDE, vá nas configurações de IA e adicione sua chave de API (OpenAI, Anthropic, etc.) ou configure a conexão com um modelo local (Ollama, LM Studio).
- **Migração**: Na primeira inicialização, o IDE geralmente oferece a opção de importar configurações e extensões do seu editor anterior (VS Code, Cursor, etc.).

---

## 📚 Links de Referência

- [Repositório Oficial no GitHub](https://github.com/hamishfromatech/A-Coder)
- [Documentação do Projeto](https://github.com/hamishfromatech/A-Coder/tree/main/docs)
- [Comunidade: Open Source AI Builders Club](https://www.skool.com/open-source-ai-builders-club/about?ref=da946a67c5c646e991b96ea9ce7ad9e4)
- [The A-Tech Corporation (Desenvolvedor)](https://theatechcorporation.com/)
