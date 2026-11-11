# 📡 Bitchat

## 📌 O que é o Bitchat?
O **Bitchat** é um aplicativo de mensagens peer-to-peer (P2P), seguro e descentralizado, concebido por Jack Dorsey e desenvolvido pela Permissionless Tech. Sua principal inovação é operar em **redes mesh (malha) via Bluetooth LE**, permitindo comunicação criptografada entre dispositivos próximos **sem necessidade de internet, servidores centrais ou números de telefone**. Além do modo offline, ele também suporta canais "geohash" via internet para conectar usuários na mesma área geográfica, combinando o melhor da privacidade local com a descoberta comunitária.

---

## ✨ Principais Destaques
- **Comunicação 100% Offline (Mesh Bluetooth):** Os dispositivos atuam como nós de uma rede, encaminhando mensagens criptografadas de um aparelho para outro, ampliando o alcance da comunicação para até 300 metros (ou mais, em cadeia) sem depender de torres de celular ou Wi-Fi.
- **Privacidade e Soberania de Dados:** Não requer criação de contas, números de telefone, e-mails ou verificação de identidade (KYC). As chaves de criptografia são geradas e mantidas localmente no dispositivo.
- **Arquitetura Híbrida:** Alterna suavemente entre o modo *mesh* local (quando não há internet) e canais baseados em localização (geohash) via protocolos descentralizados (como Nostr) quando a conexão está disponível.
- **Leve e Open-Source:** O código é totalmente aberto, auditável pela comunidade e projetado para ser extremamente leve, consumindo pouca bateria e funcionando bem até em dispositivos Android mais antigos (API 26+).

---

## 🚀 Instalação e Primeiros Passos

O Bitchat está disponível para as principais plataformas móveis e seu código-fonte pode ser compilado para desktop:

**1. Android (Recomendado para testes de campo):**
- Baixe diretamente pela [Google Play Store](https://play.google.com/store/apps/details?id=com.bitchat.droid) para atualizações automáticas.
- Ou baixe o APK mais recente diretamente na página de [Releases do GitHub](https://github.com/permissionlesstech/bitchat-android/releases) para instalação manual (sideload).

**2. iOS:**
- Disponível na Apple App Store como "Bitchat mesh".

**3. Primeiros Passos:**
- Ao abrir o app pela primeira vez, ele gerará automaticamente seu perfil anônimo e suas chaves criptográficas locais.
- Ative o Bluetooth do seu dispositivo.
- Aproxime-se de outra pessoa que também tenha o Bitchat instalado para estabelecer a conexão *mesh* e começar a trocar mensagens criptografadas instantaneamente.

---

## 📚 Links de Referência

- [Site Oficial do Projeto](https://bitchat.free/)
- [Repositório Principal (Protocolo/Core)](https://github.com/permissionlesstech/bitchat)
- [Repositório Android (Implementação)](https://github.com/permissionlesstech/bitchat-android)
- [Google Play Store (Android)](https://play.google.com/store/apps/details?id=com.bitchat.droid)
- [Artigo na Wikipedia](https://en.wikipedia.org/wiki/BitChat)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura do **Bitchat** oferece analogias brilhantes para a sua metodologia de estudo de temas complexos, especialmente em matemática:

1. **Rede Mesh = Aprendizagem Colaborativa (Peer-to-Peer):** Em uma rede mesh, não há um "servidor central"; cada dispositivo recebe e repassa a informação, fortalecendo toda a rede. Na sala de aula, isso se traduz no aprendizado entre pares. Quando um aluno explica um conceito matemático para outro, ele não está apenas "repassando a mensagem"; ele está consolidando seu próprio entendimento (o famoso *Protégé Effect*). O conhecimento se torna resiliente porque está distribuído, não centralizado apenas no professor.
2. **Funcionamento Offline = Conhecimento Internalizado:** O Bitchat brilha quando a internet cai, porque tudo o que ele precisa já está "localmente" no dispositivo. Da mesma forma, o objetivo final do estudo de matemática não é que o aluno saiba *pesquisar* a fórmula, mas que ele a tenha internalizado ("armazenada localmente" na memória de longo prazo). Sua metodologia deve focar em exercícios de *active recall* (recordação ativa) para garantir que o aluno consiga "operar offline" em uma prova, sem depender de "sinal" externo.
3. **Canais Geohash = Contextualização:** O recurso que conecta pessoas pela localização geográfica nos lembra que a matemática deve fazer sentido no "mundo real" do aluno. Contextualizar problemas (ex: calcular a trajetória de um objeto no pátio da escola) cria um "canal de conexão" muito mais forte do que exercícios abstratos e descontextualizados.
dispositivos próximos==. Desenvolvido por [Jack Dorsey](https://www.google.com/search?sca_esv=a67f889c4de23fbe&sxsrf=AE3TifMSAKXLl018RAxNAZMtnHWFmjg-iw%3A1760409769934&q=Jack+Dorsey&sa=X&ved=2ahUKEwi23Pu31aKQAxWHjpUCHYQ_G9QQxccNegQIIhAB&mstk=AUtExfAivyA-B6qtKhVZcWTiqXFTY9EL28SBAXWqYzfkpF6xXWR-idS0yRMIgr6MAiNjG1Zs5Ff37X1zx6Z2gyrIjDZDkPyPDwlBEwxWqiGf82nLjH4uodsnfX5a9ieOEyqXXMOy-KkpEot13aA2yVdypMuQjHgxinwVz4k2yF3oHLx1luNKjH12FWsa_r-506BqJ2HASqPVmBXuJGVtKC9wJww0xUFw3ZzWOVhPgvg69urkY-p5j6S88fS6TTXto0VroAVRuHIP42BZQ9SzWRQ6l0mP&csui=3), o app permite a comunicação mesmo em locais sem sinal ou em situações de falha na rede. A rede mesh funciona como uma cadeia, onde cada dispositivo encaminha mensagens para os próximos, ampliando o alcance para até 300 metros.
