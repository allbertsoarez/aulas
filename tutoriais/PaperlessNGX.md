# 📂 Paperless-ngx

## 📌 O que é o Paperless-ngx?
O **Paperless-ngx** é um sistema de gerenciamento de documentos (DMS) de código aberto, mantido pela comunidade, projetado para digitalizar, organizar e tornar pesquisável todo o seu acervo documental. Sua filosofia central é a **soberania dos dados, a automação inteligente e o fim do arquivo físico caótico**: em vez de depender de serviços de nuvem de terceiros que analisam seus dados, o Paperless-ngx roda no seu próprio hardware (via Docker, Podman ou NAS). Ele utiliza OCR (Reconhecimento Óptico de Caracteres) e aprendizado de máquina para ler, indexar e classificar automaticamente seus documentos, transformando pilhas de papel em um banco de dados local, seguro e instantaneamente pesquisável.

- **Categoria:** Sistema de Gerenciamento de Documentos (DMS) Auto-hospedado com OCR e IA
- **Plataforma:** Linux / Windows / macOS (via Docker/Podman) / NAS (TrueNAS)
- **Palavras-chave:** Paperless-ngx, DMS, OCR, Auto-hospedado, Digitalização, Privacidade, Automação, TrueNAS, Podman, Gestão do Conhecimento

---

## ✨ Principais Destaques
- **OCR e Texto Pesquisável:** Extrai texto de PDFs digitalizados e imagens, tornando cada palavra do seu documento pesquisável instantaneamente na interface web.
- **Machine Learning e Correspondência Automática:** O sistema "aprende" com suas ações. Se você sempre classifica um documento com a palavra "Enel" como `#conta_de_luz` e remetente "Enel", o Paperless criará uma regra automática para fazer isso sozinho no futuro.
- **Fluxo de Trabalho Mobile Integrado:** Permite escanear documentos diretamente pelo celular (usando apps como OpenScan ou Paperless Mobile) e enviá-los com um clique para a pasta de "consumo" do seu servidor.
- **Privacidade Total (Self-Hosted):** Seus documentos, dados fiscais e informações pessoais nunca saem do seu controle. Sem telemetria, sem assinaturas e sem risco de vazamento em servidores de terceiros.

---

## 🚀 Instalação e Primeiros Passos

O Paperless-ngx é projetado para ser executado em contêineres, garantindo isolamento e facilidade de atualização.

**Opção 1: Docker ou Podman (Recomendado para Servidor Local/PC)**
- A maneira mais robusta é usar o `docker-compose`. O repositório oficial fornece um arquivo `docker-compose.yml` pronto para uso que configura o banco de dados (PostgreSQL), o broker de tarefas (Redis) e o aplicativo principal.
- *Alternativa leve:* Use o [Podman Desktop](https://podman-desktop.io/) se preferir uma alternativa ao Docker sem daemon root.

**Opção 2: TrueNAS Scale (Para quem possui NAS)**
- Se você tem um servidor NAS, o Paperless-ngx está disponível como um aplicativo oficial no catálogo do TrueNAS, permitindo instalação com alguns cliques e integração direta com seus pools de armazenamento.

**Primeiros Passos:**
1. Acesse a interface web do seu Paperless-ngx recém-instalado.
2. Vá em **Configurações** e configure seus "Correspondentes" (ex: Banco X, Universidade Y) e "Tags" (ex: #impostos, #2024, #estudos).
3. Instale o app **OpenScan** no seu celular, configure-o para enviar digitalizações diretamente para a pasta de `consume` do seu servidor (via WebDAV ou API).
4. *Dica de fluxo:* Digitalize um documento. Após o processamento, classifique-o manualmente uma vez. O Paperless-ngx sugerirá automaticamente a criação de uma "Regra de Correspondência" para nunca mais você precisar fazer isso manualmente para esse tipo de documento.

---

## 📚 Links de Referência

**Oficiais e Documentação:**
- [Repositório Oficial no GitHub](https://github.com/paperless-ngx/paperless-ngx)
- [Documentação Oficial](https://docs.paperless-ngx.com/)

**Aplicativos Complementares (Mobile/Scanner):**
- [Paperless Mobile (Cliente não oficial, mas excelente)](https://play.google.com/store/apps/details?id=de.astubenbord.paperless_mobile)
- [OpenScan (App de digitalização focado em privacidade e envio direto)](https://play.google.com/store/apps/details?id=com.ethereal.openscan)

**Infraestrutura e Tutoriais:**
- [Catálogo Oficial do TrueNAS](https://apps.truenas.com/catalog/paperless-ngx/)
- [Podman Desktop (Alternativa ao Docker)](https://podman-desktop.io/)
- 📺 [Vídeo: Digitalize sua Vida de Modo não Horrível - Paperless NGX](https://youtu.be/8LKF4kgKSTE)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Paperless-ngx** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **OCR (Reconhecimento de Texto) e a "Leitura Ativa" do Enunciado:** O OCR não apenas "tira uma foto" do papel; ele processa a imagem para extrair o *significado* (texto) e torná-lo indexável. Na matemática, o aluno não deve apenas "olhar" passivamente para o enunciado. Ele deve fazer o "OCR mental": traduzir ativamente o texto narrativo do problema em variáveis, equações e restrições matemáticas explícitas no papel. Sem essa extração de significado, o problema permanece uma "imagem" insolúvel.
2. **Tags e Metadados vs. Organização Conceitual:** No Paperless, um documento ganha valor real quando é taggeado (ex: `#imposto_de_renda`, `#2023`, `#comprovante`). No estudo, uma fórmula ou teorema solto no caderno é inútil. O aluno deve aprender a associar "metadados" a cada conceito que aprende: *Em que contexto isso se aplica? Qual é a pré-condição para usá-lo? A qual capítulo ele pertence?* Essa indexação mental é o que permite a recuperação rápida da informação durante uma prova.
3. **Regras de Correspondência (Machine Learning) e a Automatização de Heurísticas:** O Paperless aprende: *"Se o texto contém 'kWh' e 'Enel', classifique como #conta_de_luz"*. O aluno de matemática deve desenvolver suas próprias "regras de correspondência" heurísticas. Exemplo: *"Se o problema menciona 'taxa de variação instantânea' ou 'inclinação da reta tangente', a regra dispara automaticamente o uso do conceito de Derivada"*. Automatizar esse reconhecimento de padrões libera a memória de trabalho para focar na resolução complexa, em vez de perder tempo tentando lembrar qual ferramenta usar.
