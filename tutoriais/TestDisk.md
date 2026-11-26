# 💾 TestDisk & PhotoRec

## 📌 O que são o TestDisk e o PhotoRec?
O **TestDisk** e o **PhotoRec** são ferramentas companheiras, gratuitas e de código aberto, desenvolvidas pela CGSecurity para recuperação de dados e reparo de discos. Sua filosofia central é a **soberania dos dados, o poder de baixo nível e o acesso universal**: diferentemente de softwares comerciais caros que prometem "recuperação mágica", esta dupla oferece ferramentas forenses reais. O **TestDisk** é especializado em recuperar partições perdidas e tornar discos não inicializáveis bootáveis novamente. O **PhotoRec** ignora o sistema de arquivos e vai direto aos dados subjacentes, recuperando arquivos (fotos, vídeos, documentos) a partir de suas assinaturas digitais (file carving), mesmo em mídias severamente corrompidas.

- **Categoria:** Software de Recuperação de Partições e Dados de Código Aberto
- **Plataforma:** Windows / macOS / Linux / DOS
- **Palavras-chave:** TestDisk, PhotoRec, Recuperação de Dados, Partições, Código Aberto, CGSecurity, QPhotoRec, Forense Digital, File Carving

---

## ✨ Principais Destaques
- **Recuperação de Partições (TestDisk):** Capacidade de reconstruir tabelas de partição (MBR/GPT) danificadas, recuperar setores de boot e corrigir tabelas FAT/NTFS/ext4, salvando discos inteiros que o sistema operacional não consegue mais ler.
- **File Carving Robusto (PhotoRec):** Recupera arquivos procurando por cabeçalhos e rodapés de dados (assinaturas), funcionando mesmo quando o sistema de arquivos está completamente destruído ou formatado. Suporta mais de 480 extensões de arquivos.
- **Interface Dupla (CLI e GUI):** O TestDisk é tradicionalmente baseado em terminal (CLI), o que o torna poderoso e leve. O PhotoRec possui o **QPhotoRec**, uma interface gráfica amigável que simplifica o processo de seleção de disco e tipo de arquivo para usuários menos técnicos.
- **Totalmente Gratuito e Multiplataforma:** Sem versões "premium", sem marcas d'água e sem telemetria. Funciona nativamente em quase qualquer sistema operacional, incluindo ambientes de resgate via Live USB.

---

## 🚀 Instalação e Primeiros Passos

⚠️ **Regra de Ouro da Recuperação:** *Nunca* salve os arquivos recuperados na mesma unidade de disco que está sendo recuperada. Isso pode sobrescrever os dados que você está tentando salvar. Use sempre um HD externo ou pen drive.

**Passo 1: Download e Preparação**
1. Acesse [cgsecurity.org](https://www.cgsecurity.org/) e baixe a versão apropriada para o seu sistema operacional (ex: `testdisk-7.2.win64.zip` para Windows).
2. Extraia o arquivo `.zip` para uma pasta no seu computador (ou diretamente em um pen drive, para torná-lo portátil).

**Passo 2: Usando o QPhotoRec (Interface Gráfica - Recomendado para Arquivos)**
1. Dentro da pasta extraída, execute `qphotorec_win.exe` (no Windows) ou o equivalente no seu sistema.
2. No topo, selecione o **disco** ou partição que contém os dados perdidos.
3. Escolha o sistema de arquivos (geralmente "Other" para FAT/NTFS/ext4, ou "None" se o disco estiver completamente sem formatação).
4. Em "Destination", escolha uma pasta em um **disco diferente** para salvar os arquivos recuperados.
5. Clique no botão "File Formats" para marcar apenas as extensões que você precisa (ex: `jpg`, `pdf`, `doc`), acelerando a busca.
6. Clique em "Search" e aguarde. Os arquivos serão salvos em pastas numeradas (`recup_dir.1`, `recup_dir.2`, etc.).

**Passo 3: Usando o TestDisk (Para Partições Perdidas)**
1. Execute `testdisk_win.exe`.
2. Selecione "Create" para o arquivo de log, escolha o disco afetado e selecione o tipo de partição (geralmente "Intel" para PCs modernos).
3. Escolha "Analyse" e depois "Quick Search". Se a partição perdida aparecer (geralmente em verde), pressione `P` para listar os arquivos e confirmar que são os seus.
4. Pressione `Enter`, depois "Write" para salvar a nova tabela de partição no disco.

---

## 📚 Links de Referência

- [Site Oficial da CGSecurity](https://www.cgsecurity.org/)
- [Repositório Oficial no GitHub](https://github.com/cgsecurity/testdisk)
- [Documentação Oficial e Passo a Passo do TestDisk](https://www.cgsecurity.org/wiki/TestDisk_Step_By_Step)
- [Documentação Oficial do PhotoRec](https://www.cgsecurity.org/wiki/PhotoRec_Step_By_Step)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **TestDisk & PhotoRec** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **TestDisk (Reconstrução de Partição) e a Base Fundacional:** O TestDisk reconstrói a "tabela de partição", que é o mapa que diz ao computador onde cada coisa começa e termina. Sem ela, os dados existem, mas são inacessíveis. Na matemática, quando um aluno se perde em um tópico avançado (ex: Cálculo), o problema raramente está no tópico em si, mas na "tabela de partição" corrompida: falhas na base (Álgebra, Frações, Funções). Ensine o aluno a não tentar forçar a leitura de dados complexos; em vez disso, ele deve rodar um "TestDisk mental" e reconstruir os fundamentos antes de prosseguir.
2. **PhotoRec (File Carving) e o Reconhecimento de Padrões:** O PhotoRec ignora o sistema de arquivos (a "organização" esperada) e busca diretamente pelas assinaturas brutas dos dados (cabeçalhos e rodapés). Na resolução de problemas, isso é análogo ao **reconhecimento de padrões profundos**. Quando a estrutura óbvia do problema está "corrompida" ou disfarçada, o aluno não deve desistir. Ele deve aprender a ignorar a "formatação" superficial do enunciado e procurar as "assinaturas" matemáticas subjacentes (ex: reconhecer que uma expressão complexa é, na verdade, uma identidade trigonométrica disfarçada ou uma equação do segundo grau em disguise).
3. **Recuperação em Disco Externo e o Princípio da "Folha em Branco":** A regra de ouro do PhotoRec é nunca gravar sobre o disco original para evitar corrupção. Na aprendizagem, isso se traduz no **princípio da "folha em branco" para correção de erros**. Quando um aluno erra uma questão, ele não deve apenas apagar e tentar de novo no mesmo lugar (o que "sobrescreve" a memória do erro). Ele deve isolar o erro (analisar *por que* errou) e refazer o problema do zero, em um espaço limpo, preservando o rastro original para auditoria metacognitiva futura.
