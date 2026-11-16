# 💬 Convos

## 📌 O que é o Convos?
O **Convos** é um cliente de IRC (Internet Relay Chat) multiusuário que roda diretamente no seu navegador web, trazendo a experiência clássica do IRC para o século 21 com extrema simplicidade. Sua principal filosofia é ser "sempre online" e focado na privacidade: ele atua como um *bouncer* (rebatedor) persistente no servidor, mantendo você conectado e registrando todo o histórico de conversas, mesmo quando você fecha a janela do navegador. Tudo é auto-hospedado, garantindo que você tenha controle total sobre seus dados, logs e arquivos, sem depender de servidores de terceiros.

- **Categoria:** Cliente de Chat IRC e Comunicação Auto-hospedada
- **Plataforma:** Web (Navegador) / Linux (Snap, Docker, Binário) / macOS / Windows (via Docker)
- **Palavras-chave:** IRC, Chat, Auto-hospedado (Self-hosted), Bouncer, Código Aberto, Privacidade, Simplicidade

---

## ✨ Principais Destaques
- **Sempre Online (Persistent Bouncer):** O servidor mantém a conexão com as redes IRC ativa 24/7. Você nunca perde mensagens, menções ou o histórico do canal, podendo retomar a conversa exatamente de onde parou, em qualquer dispositivo.
- **Privacidade e Propriedade dos Dados:** Diferente de plataformas de chat proprietárias, no Convos você é o dono do servidor. Todos os logs, configurações e arquivos enviados ficam armazenados localmente na sua máquina ou servidor, sob seu total controle.
- **Interface Moderna e Responsiva:** Apesar de usar um protocolo antigo (IRC), a interface é construída com tecnologias modernas (Svelte), oferecendo formatação rica, suporte a emojis, exibição inline de mídias e adaptação perfeita a telas de celulares e desktops.
- **Instalação Descomplicada:** Projetado para ser colocado no ar em minutos, seja via um script de instalação local, um contêiner Docker ou pacotes Snap, sem a necessidade de configurações complexas ou bancos de dados externos.

---

## 🚀 Instalação e Primeiros Passos

O Convos é flexível e pode ser executado desde um servidor doméstico (como um Raspberry Pi) até em um contêiner Docker na sua máquina local.

**Opção 1: Instalação Local via Script (Linux/macOS)**
- A maneira mais rápida de testar. Abra o terminal e execute:
  `curl https://convos.chat/install.sh | sh -`
  Em seguida, inicie o serviço com: `./convos/script/convos daemon`
- Acesse `http://localhost:3000` no seu navegador.

**Opção 2: Docker (Recomendado para isolamento e facilidade)**
- Execute os seguintes comandos para baixar e rodar o contêiner, mapeando uma pasta local para persistência dos dados:
  ```bash
  mkdir -p $HOME/convos/data
  docker run -it -p 8080:3000 -v $HOME/convos/data:/data ghcr.io/convos-chat/convos:alpha
  ```
- Acesse `http://localhost:8080` no seu navegador.

**Primeiros Passos:**
1. Ao abrir o Convos pela primeira vez, crie uma conta de administrador local.
2. Vá em **Configurações** e adicione sua rede IRC preferida (ex: Libera.Chat, OFTC).
3. Conecte-se a um canal (ex: `#linux` ou `#math`) e observe como o Convos mantém o histórico visível e organizado, mesmo que você feche e reabra a aba do navegador.

---

## 📚 Links de Referência

- [Site Oficial e Documentação](https://convos.chat/)
- [Repositório no GitHub](https://github.com/convos-chat/convos/)
- [Pacote Snap (Linux)](https://snapcraft.io/convos)
- [Discussão na Comunidade: Convos vs The Lounge](https://www.reddit.com/r/selfhosted/comments/ldb3jm/convos_vs_theloungechat_vs_for_webbased_irc/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Convos** oferecem analogias poderosas para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **O "Bouncer" Persistente (Continuidade do Processo de Aprendizado):** Assim como o Convos mantém a conexão ativa e salva o histórico para que você não perca o contexto ao fechar o navegador, o estudo da matemática exige "persistência de estado". Incentive seus alunos a manter um "log de estudo" (um caderno de erros ou um arquivo no Obsidian) que registre não apenas a resposta, mas o raciocínio e as dúvidas do dia. Quando o aluno retoma o estudo dias depois, ele não começa do zero; ele "reconecta" exatamente de onde parou, preservando o contexto cognitivo.
2. **Simplicidade Intencional (Redução de Carga Cognitiva):** O Convos é elogiado na comunidade por fazer *uma* coisa (chat IRC) de forma extremamente simples e eficaz, sem recursos inchados (*bloatware*). No estudo de temas longos, a "paralisia por análise" é um inimigo comum. Ensine o aluno a escolher a ferramenta mais simples possível para a tarefa atual (ex: papel e caneta para rascunhar uma ideia, em vez de tentar configurar um software complexo de imediato). Menos ruído na ferramenta significa mais foco na lógica do problema.
3. **Auto-hospedagem e Propriedade dos Dados (Autonomia e Responsabilidade):** No Convos, você é o dono dos seus logs e dados. Na educação, isso se traduz em formar alunos que sejam "donos" do seu próprio processo de aprendizado. Eles não devem depender passivamente da plataforma da escola, do livro didático ou do professor como única fonte de verdade. Ao construir seu próprio repositório de conhecimento (seu "servidor" mental de anotações e resumos), o aluno desenvolve independência, curadoria crítica e resiliência acadêmica.
