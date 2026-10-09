# yt-dlp
Um downloader de áudio/vídeo de linha de comando rico em recursos<br>
Fork do [youtube-dl](https://github.com/ytdl-org/youtube-dl)

### Variavas de Ambiente
Adicione a pasta onde o yt-dlp está instalado nas variáveis de ambiente para que o software possa ficar disponível em todo o sistema.
Exemplo: Se o yt-dlp estiver na pasta Arsenal ou Ferramentas, adicione esta pasta as variáveis de ambiente.

### Criando arquivo de configuração

O yt-dlp oferece várias flags/parâmetros para personalizar o download. Eles podem ser adicionados em um arquivo de configuração para serem sempre invocados, automaticamente, dispensando ter que digitá-los toda vez.

Caso não exista, crie um arquivo `config` (sem extensão) no seu diretório, em `~/.config/yt-dlp/`.<br>
Depois, abra-o com um editor de textos simples, como o nano, e coloque os parâmetros que quiser. Um exemplo:

```
-P ~/Movies/YouTube/
--embed-thumbnail
--write-thumbnail
--convert-thumbnails jpg
--embed-metadata
--embed-info-json
--sub-langs en,pt-BR,pt
--write-subs
``````

- A primeira linha aponta um diretório específico para todos os vídeos baixados.
- As três linhas seguintes baixam a imagem do vídeo, incorporada ao arquivo de vídeo e em um arquivo à parte, no formato `jpg`.
- As seguintes baixam meta dados, úteis para que serviços como Jellyfin exibam corretamente informações dos vídeos.
- As duas últimas baixam legendas (se disponíveis) nos idiomas inglês e português, e salvam-nas em arquivos à parte.

## Prompts

Baixa live desde o início
- yt-dlp --live-from-start URL

## Mais Informações

- https://github.com/yt-dlp/yt-dlp
- https://github.com/yt-dlp/yt-dlp?tab=readme-ov-file#installation
- https://discord.gg/H5MNcFW63r
- https://www.gyan.dev/ffmpeg/builds/
- https://www.rapidseedbox.com/pt/blog/guia-completo-yt-dlp
- https://www.reddit.com/r/youtubedl/comments/15xqg3t/ytdlp_for_dummies
- https://plus.diolinux.com.br/t/interface-grafica-para-yt-dlp-youtube-downloder/59674
- https://manualdousuario.net/baixar-videos-youtube-gratis-cli/
- https://github.com/kannagi0303/yt-dlp-gui
- https://oleksis.github.io/youtube-dl-gui/

