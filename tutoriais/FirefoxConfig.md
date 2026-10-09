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

# Referências

- https://brunofragax.notion.site/user-js-0b3b6d9505434791bb723e93fd3002ec
- https://teiaxhq.notion.site/note-611fc10221424f41b1fc4e870735d4b7

