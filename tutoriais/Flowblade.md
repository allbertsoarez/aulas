# 🎬 Flowblade

## 📌 O que é o Flowblade?
O **Flowblade** é um editor de vídeo não linear (NLE) multitrack, gratuito e de código aberto, desenvolvido especificamente para o ecossistema Linux. Sua filosofia central é a **velocidade, precisão e um fluxo de trabalho enxuto**. Diferente de suítes de edição pesadas e cheias de recursos que a maioria dos usuários nunca utiliza, o Flowblade foca no essencial: oferecer uma linha do tempo robusta, ferramentas de corte precisas e renderização eficiente (via MLT Framework e FFmpeg), mantendo o consumo de recursos do sistema em níveis mínimos.

- **Categoria:** Editor de Vídeo Não Linear (NLE) para Linux
- **Plataforma:** Linux (via Flatpak, DEB, AppImage)
- **Palavras-chave:** Edição de Vídeo, Código Aberto, Multitrack, Linux, MLT Framework, Leveza, Produtividade, Proxy Editing

---

## ✨ Principais Destaques
- **Desempenho e Leveza:** Otimizado nativamente para Linux, consome significativamente menos memória RAM e CPU do que concorrentes mais pesados, sendo ideal para hardware modesto ou laptops.
- **Edição Multitrack Precisa:** Linha do tempo que suporta múltiplas faixas de vídeo e áudio, com ferramentas avançadas de corte (trim, roll, slip, slide) que permitem ajustes finos sem desalinizar o restante do projeto.
- **Fluxo de Trabalho com Proxies:** Permite a criação automática de arquivos de baixa resolução (proxies) para editar vídeos em 4K ou formatos pesados de forma fluida, gerando a versão final em alta qualidade apenas na exportação.
- **Ecossistema Aberto e Estável:** Construído sobre o framework MLT e FFmpeg, garantindo suporte a uma vasta gama de formatos de mídia, transições e filtros de cor sem depender de codecs proprietários.

---

## 🚀 Instalação e Primeiros Passos

Por ser focado no Linux, o Flowblade oferece métodos de instalação que respeitam as diferentes filosofias das distribuições.

**Opção 1: Flatpak (Recomendado para a maioria das distribuições)**
- O Flatpak garante que você tenha todas as dependências necessárias isoladas e atualizadas.
  ```bash
  flatpak install flathub io.github.jliljebl.Flowblade
  flatpak run io.github.jliljebl.Flowblade
  ```

**Opção 2: Pacotes Nativos (DEB/RPM)**
- Distribuições como Ubuntu, Debian e Fedora frequentemente possuem pacotes nativos disponíveis nos repositórios da comunidade ou via PPA, que podem ser instalados via `apt` ou `dnf`.

**Primeiros Passos:**
1. Abra o Flowblade e clique em **"Projeto" > "Novo"** para criar um perfil de projeto (escolha a resolução e taxa de quadros, ex: 1080p 30fps).
2. Na aba **"Browser"** (navegador de mídia), localize e importe seus clipes de vídeo e áudio.
3. Arraste os clipes para a linha do tempo (*timeline*). Use as ferramentas da barra superior (como a ferramenta de corte "Razor" ou a ferramenta de seleção) para organizar sua narrativa.
4. Para exportar, vá em **"Projeto" > "Renderizar"**, escolha o formato de saída (ex: MP4/H.264) e clique em "Renderizar".

---

## 📚 Links de Referência

**Oficiais e Código:**
- [Repositório no GitHub](https://github.com/jliljebl/flowblade)
- [Flowblade no Flathub](https://flathub.org/apps/io.github.jliljebl.Flowblade)
- [Flowblade na Wikipédia](https://en.wikipedia.org/wiki/Flowblade)

**Tutoriais e Análises (Comunidade Brasileira):**
- [Flowblade: Editor de vídeo não linear (LerLinux)](https://lerlinux.blogspot.com/2014/11/flowblade-editor-de-video-nao-linear.html)
- [Flowblade 2.10 Lançado com Alterações, Melhorias e Correções (Edivaldo Brito)](https://www.edivaldobrito.com.br/flowblade-2-10-lancado-com-alteracoes-melhorias-e-correcoes/)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Flowblade** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Edição Não Linear e a Exploração de Hipóteses:** Em um editor não linear, você pode cortar, mover e testar diferentes ordens de clipes sem destruir o arquivo de vídeo original. Na matemática, incentive o aluno a adotar um "pensamento não linear" ao resolver problemas complexos: ele deve se sentir livre para pular etapas, testar uma hipótese no meio do caminho e voltar atrás se não funcionar, sabendo que os "dados originais" (o enunciado e os axiomas) permanecem intactos e seguros.
2. **Proxy Editing (Simplificação Estratégica):** O Flowblade usa *proxies* (cópias de baixa resolução) para editar vídeos pesados com fluidez, renderizando em alta qualidade apenas no final. No estudo, isso é análogo a resolver uma versão "proxy" de um problema difícil. Se um problema tem números complexos (ex: 147 e 289) ou muitas variáveis, o aluno deve primeiro criar um "proxy": substituir por números simples (ex: 2 e 3) ou reduzir a dimensionalidade (resolver em 2D antes de 3D). Uma vez que a lógica (a "edição") esteja correta, ele aplica o mesmo processo aos números originais complexos.
3. **A Linha do Tempo Multitrack (Organização do Raciocínio):** O Flowblade separa vídeo, áudio, títulos e efeitos em faixas (tracks) diferentes para manter a organização. Em uma demonstração matemática longa, o aluno deve aprender a separar suas "faixas" de raciocínio: uma faixa para a manipulação algébrica, outra para as justificativas geométricas ou teoremas usados, e outra para a verificação final. Misturar tudo em um único bloco de texto desorganizado é a principal causa de erros por descuido.
