# 🏗️ Forgejo

## 📌 O que é o Forgejo?
O **Forgejo** (pronuncia-se "for-je-io") é uma plataforma de hospedagem de código Git auto-hospedada, leve e focada na comunidade. Nascido como um *soft fork* do Gitea, sua filosofia central é a **simplicidade, eficiência e soberania de dados**. Diferente de plataformas corporativas pesadas e cheias de recursos que a maioria dos usuários nunca utiliza, o Forgejo "simplesmente cumpre sua função": oferece um ambiente robusto para versionamento de código, rastreamento de issues e CI/CD, com consumo mínimo de recursos e facilidade extrema de instalação e manutenção.

- **Categoria:** Plataforma de Hospedagem de Código e Colaboração (Git)
- **Plataforma:** Linux / Windows / macOS (via Docker ou Binário)
- **Palavras-chave:** Git, Auto-hospedado, Leve, Código Aberto, CI/CD, Privacidade, Forgejo, Gitea, Colaboração

---

## ✨ Principais Destaques
- **Extrema Leveza e Baixo Consumo:** Projetado para rodar de forma fluida até mesmo em hardware modesto, como um Raspberry Pi ou um VPS barato, consumindo uma fração da memória e CPU exigida por alternativas como o GitLab.
- **Soberania de Dados e Privacidade:** Sendo auto-hospedado, você tem controle total sobre seus repositórios, dados de usuários e histórico. Não há telemetria oculta, bloqueios de conta arbitrários ou dependência de grandes empresas de tecnologia.
- **Curva de Aprendizado Nula:** A interface é intencionalmente familiar para quem já utilizou GitHub ou Gitea, tornando a transição e a adoção por equipes ou indivíduos algo imediato e sem atrito.
- **Funcionalidades Completas:** Apesar da leveza, inclui tudo o que é essencial: gestão de repositórios Git, rastreamento de tarefas (issues), wikis, revisões de código (pull requests) e suporte nativo a Actions (CI/CD) para automação.

---

## 🚀 Instalação e Primeiros Passos

O Forgejo é famoso por sua facilidade de implantação. A versão Docker é a mais recomendada pela comunidade devido à facilidade de atualização e isolamento.

**Opção 1: Docker (Recomendado)**
- Com o Docker instalado, basta executar um comando simples para subir a instância:
  ```bash
  docker run -d --name=forgejo -p 3000:3000 -p 222:22 -v /caminho/para/dados:/data codeberg.org/forgejo/forgejo:1
  ```
- Acesse `http://localhost:3000` no seu navegador para finalizar a configuração inicial.

**Opção 2: Binário Direto (Linux / Windows)**
- Baixe o executável único na página de Releases do Codeberg. No Linux, basta torná-lo executável (`chmod +x`) e rodá-lo. No Windows, basta executar o `.exe`. O Forgejo configura seu próprio servidor web e banco de dados SQLite embutido por padrão.

**Primeiros Passos:**
1. Ao acessar a interface web pela primeira vez, crie a conta de Administrador.
2. Clique em **"Novo Repositório"**, dê um nome e marque a opção "Inicializar com um README".
3. Faça seu primeiro *commit* diretamente pela interface web para testar.
4. Explore a aba **"Ações" (Actions)** para ver como o Forgejo pode automatizar tarefas (como testes de código) a cada novo *push*.

---

## 📚 Links de Referência

- [Site Oficial](https://forgejo.org/)
- [Repositório Principal no Codeberg](https://codeberg.org/forgejo/forgejo)
- [Forgejo na Wikipédia](https://en.wikipedia.org/wiki/Forgejo)
- [Artigo: Forgejo, uma excelente alternativa ao GitHub e Gitea (DesdeLinux)](https://blog.desdelinux.net/pt/forgejo-uma-excelente-alternativa-ao-github-e-gitea/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Forgejo** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Leveza e "Baixa Manutenção" (Essencialismo no Estudo):** O Forgejo brilha porque remove a "gordura" (bloatware) e foca apenas no que é essencial para o versionamento. No estudo, o aluno deve aplicar o mesmo essencialismo: em vez de usar cinco aplicativos diferentes, cadernos coloridos excessivos e sistemas de organização complexos que demandam mais tempo de "manutenção" do que de estudo real, ele deve adotar um sistema leve e direto (ex: um único caderno ou o Obsidian) que simplesmente "cumpra sua função" de registrar e revisar o conhecimento.
2. **Versionamento (Git) e o Histórico de Aprendizado:** O Forgejo salva cada *commit* (alteração), permitindo voltar a qualquer ponto anterior sem perder o progresso. Na matemática, incentive o aluno a tratar seus rascunhos como um repositório Git. Não apagar a conta errada, mas sim riscá-la e fazer a nova ao lado. Esse "histórico de commits" permite que o professor e o próprio aluno façam o *debug* do raciocínio, identificando exatamente em qual passo a lógica se perdeu, transformando o erro em um dado valioso, não em um fracasso.
3. **Auto-hospedagem e Autonomia Intelectual:** Hospedar seu próprio Forgejo significa não depender de servidores de terceiros para validar seu trabalho. Na educação, isso se traduz em desenvolver a **autonomia intelectual**. O aluno não deve depender eternamente do professor ou do gabarito para dizer "está certo". Ele deve internalizar métodos de verificação (como substituir o resultado na equação original ou estimar a grandeza da resposta) para ser o próprio "servidor" que valida a correção do seu conhecimento.
