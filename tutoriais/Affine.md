# 🧠 AFFiNE

## 📌 O que é o AFFiNE?
O **AFFiNE** (pronuncia-se *"a-fine"*) é um espaço de trabalho "tudo-em-um" de código aberto, projetado como uma alternativa superior ao Notion e ao Miro. Ele funciona como um sistema operacional para o seu conhecimento, unindo documentos, quadros brancos (telas infinitas), bancos de dados e inteligência artificial em um único ambiente. Sua filosofia é *local-first* (seus dados ficam no seu dispositivo), garantindo privacidade, personalização e prontidão para uso imediato.

---

## ✨ Principais Destaques
- **Canvas Híbrido (Docs + Whiteboard)**: Permite colocar qualquer "bloco" (texto rico, notas adesivas, páginas web, bancos de dados, formas ou slides) em uma tela infinita e sem bordas.
- **Privacidade e Foco Local (*Local-First*)**: Você é o dono dos seus dados. Eles ficam armazenados no seu dispositivo por padrão, mas o sistema também suporta sincronização em tempo real e colaboração entre plataformas.
- **IA Multimodal Integrada**: Assistente de IA capaz de transformar esboços em slides, resumir artigos em mapas mentais estruturados ou organizar planos de tarefas com um único prompt.
- **Auto-hospedagem e Código Aberto**: Total liberdade para gerenciar, fazer *fork* e hospedar sua própria instância do AFFiNE, com uma comunidade ativa desenvolvendo plugins e blocos de terceiros.

---

## 🚀 Opções de Download e Instalação (Clientes Nativos)

O AFFiNE oferece clientes nativos para garantir a melhor performance e experiência *offline*:

- **Desktop**: Aplicativos para **Windows**, **macOS** e **Linux** (disponíveis em formatos `.exe`, `.dmg`, `.AppImage` e `.deb`).
- **Web**: Acesso direto pelo navegador para colaboração rápida sem instalação.
- **Mobile**: Aplicativos para **iOS** e **Android**, permitindo revisão e edição em trânsito.

---

## ⚙️ Configuração e Auto-hospedagem (Docker Compose)

Para equipes, empresas ou usuários avançados que desejam soberania total sobre os dados, o AFFiNE oferece uma stack de auto-hospedagem robusta baseada em Docker. Este método implanta o servidor web, o banco de dados (PostgreSQL com suporte a vetores) e o cache (Redis) de forma isolada e segura.

### 📋 Pré-requisitos
- Um servidor (VPS, NAS ou máquina local) com **Linux**, **Windows** ou **macOS**.
- **Docker** e **Docker Compose v2** instalados e em execução.
- (Opcional, mas recomendado para acesso remoto) Um nome de domínio e um proxy reverso (como Nginx, Traefik ou Cloudflare Tunnel) para habilitar HTTPS.

### 🛠️ Instalação

**Passo 1:** Crie um diretório dedicado para a implantação e acesse-o:
```bash
mkdir affine-selfhost
cd affine-selfhost
mkdir -p config
```
*(Nota: Mantenha este diretório em um local estável. Ele armazenará os dados do PostgreSQL, arquivos de upload e configurações).*

**Passo 2:** Baixe o arquivo oficial `docker-compose.yml` mais recente:
```bash
curl -L -o docker-compose.yml https://github.com/toeverything/AFFiNE/releases/latest/download/docker-compose.yml
```

**Passo 3:** Baixe o modelo de configuração e edite a URL externa:
```bash
curl -L -o config/config.json https://github.com/toeverything/AFFiNE/releases/latest/download/config.json.example
```
Abra o arquivo `config/config.json` em um editor de texto (como `nano` ou `vim`) e altere o campo `server.externalUrl`. Para testes locais, deixe como `http://localhost:3010`. Para um servidor público, use seu domínio com HTTPS (ex: `https://affine.seudominio.com`).

**Passo 4:** Inicie os serviços em segundo plano:
```bash
docker compose up -d
```
*O processo iniciará 4 contêineres: o servidor AFFiNE, o banco de dados PostgreSQL, o cache Redis e um contêiner de migração que prepara o banco de dados automaticamente.*

**Passo 5:** Verifique se todos os serviços estão saudáveis:
```bash
docker compose ps
```
*(Todos devem mostrar o status "healthy" ou "running"). Se houver problemas, use `docker compose logs affine_migration` para depurar.*

**Passo 6:** Acesse a interface web.
Abra o navegador e vá para `http://localhost:3010` (ou a URL que você configurou). Crie a conta de administrador inicial e comece a usar.

> 💡 **Dica de Manutenção**: Para fazer backup, basta copiar as pastas `./data` e `./config`. Para atualizar o sistema no futuro, execute `docker compose pull` seguido de `docker compose up -d`.

---

## 📚 Links de Referência

- [Site Oficial](https://affine.pro/pt-br)
- [Repositório no GitHub](https://github.com/toeverything/affine)
- [Documentação Oficial de Auto-hospedagem](https://docs.affine.pro/self-host-affine/)
- [Página de Download](https://affine.pro/download)
