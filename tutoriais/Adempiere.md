# 🏢 Adempiere

## 📌 O que é o Adempiere?
O **Adempiere** é uma suíte empresarial de código aberto que integra **ERP, CRM, Manufatura (MFG), Cadeia de Suprimentos (SCM) e Ponto de Venda (POS)**. Desenvolvido "à maneira do Bazar" (de forma aberta, colaborativa e transparente), o projeto tem como missão eliminar a dependência de fornecedores de software únicos, evitar custos elevados de licenciamento e permitir que empresas instalem, estendam e personalizem suas soluções sem compromissos de longo prazo com terceiros.

---

## ✨ Principais Destaques
- **Suíte Empresarial Completa**: Cobre todas as áreas essenciais de um negócio, do chão de fábrica ao relacionamento com o cliente.
- **Filosofia 100% Comunidade**: Desenvolvimento guiado por uma rede global de especialistas técnicos, funcionais, implementadores e usuários finais.
- **Liberdade e Flexibilidade**: Código aberto (GPL) que permite customizações profundas sem *vendor lock-in* (aprisionamento a fornecedores).
- **Evolução Contínua**: Projeto ativo com atualizações constantes, incluindo iniciativas modernas como uma nova interface de usuário baseada em Vue.js e canais de suporte direto (Discord).

---

## ⚙️ Requisitos de Sistema

O Adempiere pode ser instalado em uma única máquina para avaliação, mas em ambientes de produção é altamente recomendado separar o servidor de aplicação do servidor de banco de dados.

### 🖥️ Hardware
| Perfil | Processador | Memória RAM | Armazenamento |
| :--- | :--- | :--- | :--- |
| **Avaliação / Pequeno Porte** | Dual-core 2.0 GHz ou superior | 4 GB | 80 GB (HDD ou SSD) |
| **Produção (Recomendado)** | Multi-core 2.8 GHz ou superior | 8 GB ou mais | 160 GB+ (SSD obrigatório para o banco de dados) |

### 💾 Software (Método Docker - Recomendado)
- **Sistema Operacional**: Linux (Ubuntu, Debian, CentOS, Red Hat), Windows 10/11 ou macOS.
- **Pré-requisitos**: [Docker](https://www.docker.com/) e [Docker Compose](https://docs.docker.com/compose/) instalados e em execução.
- **Navegador**: Google Chrome, Firefox ou Edge (versões atualizadas) para acessar a interface web.

*(Nota: Para instalações manuais sem Docker, são necessários Java 11+ e PostgreSQL 12+ ou Oracle XE).*

---

## 🚀 Instalação Rápida com Docker

O uso de contêineres é o método mais confiável, pois já inclui o banco de dados PostgreSQL e o servidor de aplicação configurados e otimizados pela comunidade.

**Passo 1:** Abra o terminal (ou PowerShell no Windows) e clone o repositório oficial de Docker do Adempiere:
```bash
git clone https://github.com/adempiere/adempiere-docker.git
cd adempiere-docker
```

**Passo 2:** (Opcional) Ajuste as configurações padrão, como senhas e portas, editando o arquivo de ambiente:
```bash
# No Linux/macOS
nano .env
# No Windows (PowerShell)
notepad .env
```
*(Dica: As variáveis principais são `ADEMPIERE_DB_PASSWORD`, `ADEMPIERE_WEB_PORT` e `ADEMPIERE_VERSION`)*

**Passo 3:** Inicie a implantação. O script oficial baixará as imagens, configurará o banco de dados e iniciará os serviços em segundo plano:
```bash
./application.sh adempiere up -d --build
```
*(No Windows, se o script `.sh` não for reconhecido, você pode usar diretamente: `docker compose up -d --build`)*

**Passo 4:** Aguarde alguns minutos para a inicialização completa. Você pode verificar o status dos contêineres com:
```bash
docker ps
```

**Passo 5:** Acesse o sistema pelo seu navegador:
- **URL**: `http://localhost:8274/webui/`
- **Usuário padrão**: `GardenAdmin`
- **Senha padrão**: `GardenAdmin`

> ⚠️ **Atenção**: A instalação via Docker é perfeita para avaliação, desenvolvimento e pequenos ambientes. Para produção em larga escala, ajustes específicos de tuning no PostgreSQL e alocação de memória JVM são recomendados.

---

## 📚 Links de Referência

- [Site Oficial do Projeto](https://www.adempiere.io/)
- [Repositório Oficial no GitHub](https://github.com/adempiere/adempiere)
- [Documentação Oficial de Instalação](https://adempiere.gitbook.io/docs/system-administration/installation)
- [Repositório Oficial Docker (Adempiere)](https://github.com/adempiere/adempiere-docker)
