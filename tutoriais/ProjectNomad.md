# 🏕️ Project NOMAD

## 📌 O que é o Project NOMAD?
O **Project NOMAD** é um servidor de conhecimento e educação de código aberto, projetado com a filosofia "offline-first" (prioridade ao modo offline). Sua filosofia central é a **soberania digital, a resiliência e o aprendizado contínuo sem dependência de infraestrutura externa**. Ele transforma qualquer computador em uma "internet pessoal", empacotando a Wikipédia, milhares de livros, cursos da Khan Academy, mapas e até um assistente de Inteligência Artificial local (com RAG), tudo rodando no seu próprio hardware, sem telemetria e sem necessidade de conexão com a nuvem.

- **Categoria:** Servidor de Conhecimento e Educação Offline-First com IA Local
- **Plataforma:** Linux (Debian/Ubuntu recomendado) / Windows (via WSL2)
- **Palavras-chave:** Project NOMAD, Offline-First, Kiwix, Ollama, Kolibri, Educação, Privacidade, Auto-hospedado, RAG, Soberania Digital

---

## ✨ Principais Destaques
- **Biblioteca de Informação (Kiwix):** Acesso instantâneo e offline à Wikipédia completa, referências médicas, guias de sobrevivência e acervos do Projeto Gutenberg, compactados em arquivos ZIM de alta eficiência.
- **Plataforma Educacional (Kolibri):** Integração nativa com os cursos da Khan Academy e outros recursos didáticos, incluindo rastreamento de progresso e suporte a múltiplos usuários, tudo sem internet.
- **Assistente de IA Local e Privado (Ollama + Qdrant):** Um chat com IA que roda 100% no seu hardware. Possui capacidade de RAG (Retrieval-Augmented Generation), permitindo que você faça upload de documentos PDF ou textos e faça perguntas sobre eles, com busca semântica, sem que nenhum dado saia da sua máquina.
- **Ferramentas Complementares:** Inclui mapas offline regionais (ProtoMaps), ferramentas de criptografia e análise de dados (CyberChef), bloco de notas em Markdown (FlatNotes) e um "Supply Depot" (Depósito) para instalar facilmente outros aplicativos úteis (como gerenciadores de senhas ou visualizadores de PDF).

---

## 🚀 Instalação e Primeiros Passos

O Project NOMAD é projetado para ser instalado via terminal em sistemas baseados em Debian, configurando automaticamente o Docker e todas as dependências.

**Passo 1: Pré-requisitos**
- Um sistema Ubuntu (22.04 LTS ou 24.04 LTS recomendados) ou Debian 12+.
- *Para Windows:* É possível rodar via WSL2 (Windows Subsystem for Linux), seguindo o guia específico da comunidade.
- *Hardware:* O sistema base exige apenas ~5GB de disco e <1GB de RAM. Porém, para rodar o Assistente de IA local com fluidez, recomenda-se um hardware mais robusto (ex: 16GB+ de RAM e, idealmente, uma GPU dedicada).

**Passo 2: Instalação Rápida**
1. Abra o terminal e execute o script de instalação oficial (requer privilégios `sudo`):
   ```bash
   sudo apt-get update && sudo apt-get install -y curl
   curl -fsSL https://raw.githubusercontent.com/Crosstalk-Solutions/project-nomad/refs/heads/main/install/install_nomad.sh -o install_nomad.sh
   sudo bash install_nomad.sh
   ```
2. O script instalará o Docker, configurará os contêineres e iniciará o "Command Center" (Painel de Controle).

**Passo 3: Primeiros Passos**
1. Abra seu navegador e acesse: `http://localhost:8080` (ou o endereço IP da máquina na sua rede local).
2. Siga o assistente de configuração inicial.
3. *Dica de fluxo:* Vá até a "Information Library" e baixe o pacote "Wikipedia em Português". Em seguida, explore o "Supply Depot" para instalar o FlatNotes e começar a criar seus próprios materiais de estudo integrados ao servidor.

---

## 📚 Links de Referência

- [Site Oficial](https://www.projectnomad.us/)
- [Repositório Oficial no GitHub](https://github.com/Crosstalk-Solutions/project-nomad)
- [Guia de Instalação Detalhado (incluindo WSL2)](https://github.com/Crosstalk-Solutions/project-nomad/blob/main/docs/getting-started.md)
- [Guia de Hardware Recomendado](https://github.com/Crosstalk-Solutions/project-nomad/blob/main/docs/hardware-guide.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Project NOMAD** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Offline-First e a Internalização do Conhecimento:** O NOMAD brilha porque não depende da internet para entregar conhecimento. Na aprendizagem, isso é uma analogia direta para a **internalização**. O aluno não deve depender eternamente de "consultar a nuvem" (o livro aberto, a fórmula na parede ou o celular) para resolver um problema. Ele precisa transferir os fundamentos (axiomas, regras de sinais, identidades trigonométricas) para sua "rede local" (memória de longo prazo), garantindo que a informação esteja disponível de forma rápida e autônoma, especialmente em situações de avaliação.
2. **RAG (Busca Semântica) e a Conexão de Conceitos:** O assistente de IA do NOMAD usa o Qdrant para buscar contexto relevante nos documentos antes de responder. Na matemática, o aluno não deve memorizar fatos isolados. Ele deve construir seu próprio "banco de dados vetorial" mental, aprendendo a conectar um novo problema a teoremas previamente aprendidos. Por exemplo, ao ver um problema de otimização, o "RAG mental" do aluno deve recuperar automaticamente os conceitos de "Derivada" e "Pontos Críticos". A aprendizagem profunda é sobre indexação e recuperação de conexões, não sobre armazenamento bruto.
3. **O "Supply Depot" e a Curadoria do Ambiente de Estudo:** O NOMAD permite que você instale apenas as ferramentas que precisa, evitando a sobrecarga de um sistema inchado. O aluno deve aplicar essa mesma lógica de **curadoria** ao seu ambiente de estudo. Em vez de ter um caderno caótico com todas as matérias misturadas, ele deve criar "módulos" dedicados: um bloco exclusivo para demonstrações de geometria, outro para tabelas de derivadas, e outro para registro de erros frequentes. Um ambiente organizado e intencional reduz a fricção cognitiva e aumenta o foco.
