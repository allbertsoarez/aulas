# 🦊 Hardening do Firefox (via user.js)

## 📌 O que é o Hardening do Firefox?
O **Hardening do Firefox** é o processo de transformar o navegador padrão em uma ferramenta de privacidade e segurança de nível empresarial. Sua filosofia central é o "princípio do menor privilégio": desativar qualquer funcionalidade que colete dados (telemetria), rastreie o usuário ou aumente a superfície de ataque, sem a necessidade de instalar dezenas de extensões pesadas. Isso é feito principalmente através da implementação de um arquivo `user.js` (como o criado por Bruno Fraga, baseado em recomendações como as do projeto *Arkenfox*), que sobrescreve as configurações padrão do Firefox no momento da inicialização.

- **Categoria:** Hardening e Privacidade em Navegadores
- **Plataforma:** Windows / macOS / Linux / Android
- **Palavras-chave:** Firefox, user.js, about:config, Privacidade, Anti-Fingerprinting, Arkenfox, Segurança Digital, Telemetria

---

## ✨ Principais Destaques (Categorias de Configuração)

O arquivo `user.js` e os ajustes no `about:config` atuam em quatro frentes principais:

1. **Bloqueio de Telemetria e "Phone Home":** Desativa o envio de dados de saúde do navegador (`datareporting`), estudos da Mozilla (`app.shield`), experimentos (`app.normandy`) e relatórios de falhas, garantindo que sua atividade não saia da sua máquina.
2. **Proteção Avançada contra Fingerprinting:** Configurações como `privacy.resistFingerprinting` e `webgl.disabled` dificultam que sites criem uma "impressão digital" única do seu hardware e navegador para rastreamento persistente.
3. **Isolamento de Rede e Conexões:** Força o modo apenas HTTPS (`dom.security.https_only_mode`), desativa o WebRTC (evitando vazamento de IP local), desativa IPv6 e configura DNS-over-HTTPS (DoH) com provedores focados em privacidade (como Mullvad).
4. **Higiene de Dados e Autonomia:** Desativa o preenchimento automático de formulários e senhas (`signon.*`, `extensions.formautofill`), limpa cookies ao fechar o navegador e remove integrações proprietárias como o Pocket e a sincronização de contas Firefox (`identity.fxaccounts`).

---

## 🚀 Instalação e Primeiros Passos

Aplicar o hardening é um processo manual, mas rápido, que transforma permanentemente o comportamento do navegador.

**Opção 1: Aplicação do Arquivo `user.js` (Recomendado)**
1. Baixe o arquivo `user.js` (ex: o modelo disponibilizado por Bruno Fraga ou o repositório *Arkenfox*).
2. No Firefox, digite `about:support` na barra de endereços e clique no botão **"Abrir pasta"** (ou "Show in Finder" no macOS) ao lado de "Pasta do Perfil".
3. Se houver um arquivo `user.js` existente, faça um backup dele.
4. Cole o novo arquivo `user.js` baixado diretamente nesta pasta do perfil.
5. **Reinicie o Firefox.** O navegador lerá o arquivo e aplicará todas as centenas de configurações de segurança automaticamente.

**Opção 2: Complementação com Extensões Essenciais**
O `user.js` cuida do motor do navegador, mas estas extensões adicionam camadas vitais de controle:
- **[Multi-Account Containers](https://addons.mozilla.org/en-US/firefox/addon/multi-account-containers/):** Isola cookies e sessões por contexto (ex: Trabalho, Pessoal, Compras), impedindo que sites de redes sociais rastreiem sua navegação em outros abas.
- **[Privacy Badger](https://addons.mozilla.org/en-US/firefox/addon/privacy-badger17/):** Bloqueia rastreadores invisíveis de terceiros que aprendem e bloqueiam domínios que parecem estar rastreando você.

---

## 📚 Links de Referência

- [Modelo user.js por Bruno Fraga (Notion)](https://brunofragax.notion.site/user-js-0b3b6d9505434791bb723e93fd3002ec)
- [Guia de Hardening Teiaxhq (Notion)](https://teiaxhq.notion.site/note-611fc10221424f41b1fc4e870735d4b7)
- [Projeto Arkenfox user.js (Referência Gold Standard)](https://github.com/arkenfox/user.js)
- [Extensão: Multi-Account Containers](https://addons.mozilla.org/en-US/firefox/addon/multi-account-containers/)
- [Extensão: Privacy Badger](https://addons.mozilla.org/en-US/firefox/addon/privacy-badger17/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Hardening do Firefox** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Arquivo `user.js` e a Criação de "Axiomas" de Estudo:** Assim como o `user.js` impõe regras rígidas ao navegador antes mesmo dele abrir (desativando distrações e vazamentos), o aluno deve estabelecer "axiomas" ou regras não negociáveis para sua sessão de estudo. Exemplo: "Celular em outro cômodo", "Sem abas de redes sociais abertas", "Técnica Pomodoro". Blindar o ambiente de estudo previne "vazamentos de foco" da mesma forma que o hardening previne vazamentos de dados.
2. **Multi-Account Containers e a Compartimentalização Cognitiva:** Os Containers do Firefox impedem que o Facebook rastreie o que você faz na aba do seu banco. Na matemática, temas complexos exigem "compartimentalização cognitiva". O aluno não deve tentar estudar Trigonometria, Probabilidade e Geometria Analítica na mesma hora. Criar "containers" de tempo (ex: 50 minutos focados exclusivamente em um único conceito) evita a contaminação mental, a fadiga de decisão e a sobrecarga da memória de trabalho.
3. **Anti-Fingerprinting e a Quebra de Padrões de Erro:** O *fingerprinting* funciona identificando os padrões únicos e repetitivos do seu navegador. Na resolução de problemas matemáticos, os alunos muitas vezes desenvolvem "padrões de erro" recorrentes (ex: sempre esquecer o sinal negativo na regra de sinais, ou sempre errar a expansão do quadrado da soma). O "anti-fingerprinting" do aluno consiste em identificar ativamente esses padrões viciosos e quebrá-los, variando a forma como pratica (fazendo a conta de trás para frente, estimando o resultado antes de calcular) para que o erro não seja mais uma "impressão digital" previsível nas suas provas.

---


# Saiba como deixar seu Firefox mais seguro

## Arquivo - user.js
IMPORTANTE: Para usar, é só importar o arquivo zip. 
Arquivo criado por Bruno Fraga, o arquivo encontra-se na pasta Arquivos de Programas, Navegadores, Firefox

- `app.normandy.first_run`: Desativa a execução inicial de experimentos da Mozilla (false).
- `app.shield.optoutstudies.enabled`: Desativa estudos de shield (false).
- `app.update.auto`: Desativa atualizações automáticas do Firefox (false).
- `browser.contentblocking.category`: Define o bloqueio de conteúdo para personalizado (custom).
- `browser.download.useDownloadDir`: Desativa o uso de diretório de download padrão (false).
- `browser.formfill.enable`: Desativa o preenchimento automático de formulários (false).
- `browser.newtabpage.activity-stream.*`: Desativa várias funcionalidades da nova aba, incluindo sugestões de addons e recursos (false).
- `browser.search.suggest.enabled`: Desativa sugestões de busca (false).
- `browser.urlbar.placeholderName`: Define DuckDuckGo como buscador padrão na barra de endereço.
- `datareporting.healthreport.uploadEnabled`: Desativa o envio de relatórios de saúde do dispositivo (false).
- `doh-rollout.disable-heuristics`: Desativa heurísticas do DNS-over-HTTPS (true).
- `dom.security.https_only_mode`: Ativa o modo apenas HTTPS (true).

## Desativação de Recursos para Privacidade

- `extensions.formautofill.*`: Desativa o preenchimento automático de endereços e cartões de crédito (false).
- `extensions.pocket.enabled`: Desativa a integração com o Pocket (false).
- `identity.fxaccounts.enabled`: Desativa a integração com contas Firefox (false).
- `media.peerconnection.enabled`: Desativa WebRTC para mitigar vazamentos (false).
- `network.cookie.*`: Configura comportamento de cookies, incluindo a exclusão ao fechar o Firefox.
- `network.trr.*`: Configura o DNS sobre HTTPS, usando o Mullvad como provedor.
- `privacy.*`: Várias configurações para habilitar proteção contra rastreamento e apagar dados ao sair.
- `signon.*`: Desativa alertas de violação de dados e memorização de senhas (false).

## Hardening Avançado usando about:config (recomendações arkenfox/user.js)

- `accessibility.force_disabled`: Desativa recursos de acessibilidade (1).
- `beacon.enabled`: Desativa o envio de dados de 'beacon' (false).
- `browser.ssl_override_behavior`: Configura comportamento de superação de SSL (1).
- `geo.provider.use_corelocation`: Desativa localização geográfica (false).
- `network.dns.disableIPv6`: Desativa IPv6 (true).
- `network.http.speculative-parallel-limit`: Desativa limites de conexões especulativas (0).
- `security.*`: Várias configurações para fortalecer a segurança, incluindo pinning de certificados e OCSP.

## Fortalecimento Contra Fingerprinting

- `privacy.resistFingerprinting`: Ajuda a resistir ao fingerprinting, mas pode quebrar o modo escuro e capturas de tela (false por padrão, setar como true para aumentar privacidade).
- `privacy.resistFingerprinting.letterboxing`: Ajuda a resistir ao fingerprinting usando letterboxing (true).
- `webgl.disabled`: Desativa WebGL (true).

## Criando container

**Multiaccount Container**
- https://addons.mozilla.org/en-US/firefox/addon/multi-account-containers/

## Privacy Badger

- https://addons.mozilla.org/en-US/firefox/addon/privacy-badger17/
