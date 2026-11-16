# 🧹 Czkawka

## 📌 O que é o Czkawka?
O **Czkawka** (pronuncia-se "tch-kav-ka", que significa "soluço" em polonês) é um aplicativo multifuncional, gratuito e de código aberto, projetado para encontrar e remover arquivos desnecessários do seu computador. Sua principal filosofia é a eficiência absoluta e a privacidade: escrito inteiramente em Rust (uma linguagem segura e de altíssima performance), ele não contém anúncios, não coleta telemetria e executa varreduras complexas em segundos. Ele vai muito além de um simples removedor de duplicatas, oferecendo ferramentas para identificar pastas vazias, imagens ou vídeos semelhantes, arquivos corrompidos e metadados ocultos.

- **Categoria:** Utilitário de Limpeza e Organização de Disco
- **Plataforma:** Windows / Linux / macOS / FreeBSD / Android
- **Palavras-chave:** Duplicados, Limpeza de Disco, Rust, Código Aberto, Sem Telemetria, Imagens Semelhantes, Otimização

---

## ✨ Principais Destaques
- **Velocidade e Eficiência em Rust:** Graças ao multithreading e a algoritmos otimizados (como o hash Blake3), o Czkawka processa centenas de milhares de arquivos em segundos, usando uma fração da memória RAM que ferramentas concorrentes (geralmente em Python) exigem.
- **Conjunto Abrangente de Ferramentas:** Inclui 10+ modos de varredura: arquivos duplicados, pastas vazias, arquivos grandes, arquivos temporários, imagens semelhantes (hashing perceptual), vídeos semelhantes, músicas duplicadas, links simbólicos inválidos, arquivos corrompidos e extensões incorretas.
- **Zero Telemetria e Total Privacidade:** O software funciona 100% offline. Nenhum dado, nome de arquivo ou estatística de uso é enviado para servidores externos, garantindo total soberania sobre suas informações.
- **Múltiplas Interfaces:** Oferece uma interface gráfica moderna e leve (Krokiet, baseada em Slint), uma interface GTK4 clássica e uma poderosa interface de linha de comando (CLI) para automação e servidores.

---

## 🚀 Instalação e Primeiros Passos

O Czkawka é altamente portátil e flexível, adaptando-se a qualquer fluxo de trabalho.

**Opção 1: Windows e macOS (Aplicativo Portátil)**
- Baixe o executável ou o arquivo `.zip` mais recente na página de Releases do GitHub. No Windows, basta extrair e executar (o Windows SmartScreen pode emitir um aviso padrão por ser um software open-source sem certificado pago; clique em "Mais informações" e "Executar mesmo assim").

**Opção 2: Linux (Recomendado via Flatpak)**
- A maneira mais fácil de instalar com todas as dependências resolvidas é via Flatpak:
  `flatpak install flathub com.github.qarmin.czkawka`

**Primeiros Passos:**
1. Abra o Czkawka e selecione a aba **Included Directories** (Diretórios Incluídos). Clique em "+" para adicionar a pasta que deseja varrer (ex: `Imagens` ou `Documentos`).
2. Certifique-se de que a opção **Recursive** (Recursivo) esteja marcada para incluir subpastas.
3. Escolha o modo de varredura à esquerda. Para começar, use **Duplicates** (Duplicados) com o método de verificação definido como **Hash** (o mais preciso).
4. Clique no botão verde **Search**. Ao final, o software agrupará os arquivos idênticos. Use as opções de seleção inteligente (ex: "Selecionar todos, exceto o mais antigo") e clique em **Delete** (ou **Move**, para maior segurança) para liberar espaço.

---

## 📚 Links de Referência

- [Site Oficial do Projeto](https://czkawka.net/)
- [Repositório no GitHub](https://github.com/qarmin/czkawka)
- [Página de Releases (Downloads)](https://github.com/qarmin/czkawka/releases)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Czkawka** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Identificação de Duplicatas (Consolidação e Síntese do Conhecimento):** Assim como o Czkawka varre o disco para encontrar arquivos idênticos e liberar espaço, o estudante deve varrer suas anotações de temas longos para identificar conceitos repetidos. Em vez de manter múltiplos "arquivos" mentais desconexos sobre o mesmo tópico (ex: "regra da cadeia" anotada de três formas diferentes em cadernos separados), o aluno deve consolidá-los em um único "resumo mestre". Isso libera "espaço na memória de trabalho" para absorver novos conceitos complexos.
2. **Detecção de Arquivos Quebrados ou com Extensão Errada (Auditoria e Correção de Erros):** O software identifica arquivos corrompidos ou cujos nomes não correspondem ao conteúdo real. Na matemática, isso é análogo à revisão metacognitiva: o aluno deve "auditar" suas próprias resoluções antigas para encontrar "arquivos quebrados" (erros de lógica, sinais trocados ou premissas falsas) que foram ignorados no passado. Corrigir a base impede que o erro se propague em cadeia para problemas mais avançados.
3. **Eficiência e Multithreading em Rust (Otimização do Fluxo de Estudo):** O Czkawka é escrito em Rust para ser incrivelmente rápido, processando múltiplas tarefas em paralelo com mínimo desperdício de recursos. No estudo, o aluno deve otimizar seu "algoritmo" de aprendizado. Em vez de "processamento single-thread" (ler passivamente linha por linha, que é lento e ineficiente), ele deve usar técnicas de "multithreading" cognitivo, como a prática de recuperação ativa e o intercalamento de tópicos (*interleaving*), maximizando a retenção com o menor gasto de tempo e energia mental.
