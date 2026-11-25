Aqui está o tutorial do **Pi-hole** formatado com o mesmo padrão estrutural, tom de voz e analogias metodológicas, pronto para ser copiado diretamente para o seu template no Obsidian.
# 🕳️ Pi-hole

## 📌 O que é o Pi-hole?
O **Pi-hole** é uma aplicação de código aberto que atua como um bloqueador de anúncios e rastreadores em nível de rede, funcionando como um "buraco negro" (DNS Sinkhole) para tráfego indesejado. Sua filosofia central é a **soberania da rede e a privacidade proativa**: em vez de instalar extensões de navegador em cada dispositivo individualmente, o Pi-hole intercepta as requisições de DNS de *toda* a rede (incluindo celulares, Smart TVs e dispositivos IoT) e bloqueia a conexão com domínios conhecidos de publicidade e telemetria antes mesmo que o dado seja baixado.

- **Categoria:** Bloqueador de Anúncios e Rastreadores em Nível de Rede (DNS Sinkhole)
- **Plataforma:** Linux / Raspberry Pi / Docker / Máquina Virtual
- **Palavras-chave:** Pi-hole, DNS Sinkhole, Bloqueio de Anúncios, Privacidade, Rede Local, Open Source, Raspberry Pi, DHCP, Blocklists

---

## ✨ Principais Destaques
- **Proteção em Nível de Rede:** Bloqueia anúncios e rastreadores em todos os dispositivos conectados à rede Wi-Fi ou cabeada, sem necessidade de instalar software ou aplicativos em cada um deles.
- **DNS Sinkhole Eficiente:** Quando um dispositivo solicita o endereço de um domínio de anúncio, o Pi-hole responde com um endereço inválido (0.0.0.0), "engolindo" a requisição e economizando largura de banda e tempo de carregamento.
- **Dashboard de Estatísticas Detalhado:** Uma interface web elegante que mostra em tempo real o volume de consultas DNS, os domínios mais bloqueados, os dispositivos mais ativos na rede e o histórico de consultas.
- **Servidor DHCP Integrado:** Pode assumir o controle da atribuição de endereços IP na rede local, facilitando a identificação de dispositivos por nome e a aplicação de regras de bloqueio específicas por dispositivo.

---

## 🚀 Instalação e Primeiros Passos

O Pi-hole é famoso por seu script de instalação automatizada, embora também possa ser executado facilmente via Docker.

**Opção 1: Instalação Direta (Linux / Raspberry Pi)**
1. Conecte-se ao seu servidor ou Raspberry Pi via terminal.
2. Execute o comando de instalação oficial (o script guiará você pelas configurações):
   ```bash
   curl -sSL https://install.pi-hole.net | bash
   ```
3. Siga as instruções na tela para escolher seu provedor de DNS upstream (ex: Cloudflare, Quad9) e definir uma senha para o painel administrativo.

**Opção 2: Docker (Recomendado para quem já usa contêineres)**
- Utilize a imagem oficial `pihole/pihole` via `docker-compose`, mapeando as portas 53 (DNS), 67 (DHCP, opcional) e 80/443 (Interface Web).

**Primeiros Passos:**
1. Após a instalação, anote o endereço IP estático atribuído ao seu Pi-hole.
2. Acesse o painel administrativo no navegador: `http://<IP_DO_PI_HOLE>/admin`.
3. *Dica de fluxo crucial:* Acesse as configurações do seu roteador principal e altere o servidor DNS da rede (DHCP) para o endereço IP do Pi-hole. Isso garantirá que todos os novos dispositivos na rede sejam protegidos automaticamente.

---

## 📚 Links de Referência

- [Site Oficial](https://pi-hole.net/)
- [Repositório Oficial no GitHub](https://github.com/pi-hole/pi-hole)
- [Documentação Oficial e Guias de Instalação](https://docs.pi-hole.net/)
- [Listas de Bloqueio Recomendadas (ex: OISD, Hagezi)](https://github.com/hagezi/dns-blocklists)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Pi-hole** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **DNS Sinkhole e a Filtragem Proativa do Ruído Cognitivo:** O Pi-hole bloqueia distrações *antes* que elas cheguem ao dispositivo, economizando recursos. Na aprendizagem, o aluno não deve depender apenas da "força de vontade" para ignorar distrações (celular, ruído) enquanto estuda. Ele deve criar um "sinkhole mental" ou ambiental: desligar notificações, deixar o celular em outro cômodo e preparar o ambiente *antes* de começar. A filtragem proativa é infinitamente mais eficiente do que a reação tardia.
2. **Listas de Bloqueio (Blocklists) e as "Regras de Não-Fazer":** O Pi-hole usa listas para saber quais domínios rejeitar instantaneamente. Na matemática, o aluno deve desenvolver sua própria "lista de bloqueio" de armadilhas comuns. Exemplos: *"Nunca distribuir expoente sobre soma: $(a+b)^2 \neq a^2 + b^2$"*, *"Nunca dividir por zero"*, *"Nunca cancelar termos em uma adição de frações"*. Internalizar essas regras de rejeição automática previne erros em cascata que comprometem toda a resolução.
3. **O Dashboard de Estatísticas e a Metacognição Quantificada:** O painel do Pi-hole mostra exatamente o que está acontecendo na rede. O aluno deve adotar uma postura semelhante de "dashboard pessoal". Em vez de apenas "estudar", ele deve quantificar e analisar seu desempenho: *"Quantos erros cometi por distração versus erro de conceito?", "Quanto tempo gastei neste tópico?"*. Transformar o estudo em dados observáveis permite ajustes estratégicos reais, não apenas intenções vagas de "estudar mais".
