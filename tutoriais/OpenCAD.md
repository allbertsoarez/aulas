# 📐 Open CAD Studio

## 📌 O que é o Open CAD Studio?
O **Open CAD Studio** é uma aplicação de desenho técnico 2D e modelagem 3D de código aberto, construída com a linguagem Rust. Sua filosofia central é a **independência de fornecedor, a precisão e a acessibilidade**: diferentemente de softwares CAD proprietários que prendem o usuário a assinaturas caras e formatos fechados, o Open CAD Studio lê e grava arquivos DWG e DXF nativamente, sem conversores externos. Ele oferece um fluxo de trabalho profissional completo (do esboço à plotagem) em qualquer computador, com a garantia de que seus dados permanecem sob seu controle, sem telemetria ou bloqueios artificiais.

- **Categoria:** Software de Desenho Técnico e Modelagem 3D de Código Aberto (CAD)
- **Plataforma:** Windows / macOS / Linux / Web
- **Palavras-chave:** Open CAD Studio, CAD, DWG, DXF, Código Aberto, Rust, Desenho Técnico, Geometria, Modelagem 3D, Educação

---

## ✨ Principais Destaques
- **Compatibilidade Nativa com DWG/DXF:** Abre, edita e salva arquivos nos formatos padrão da indústria (de R14 até 2018), incluindo suporte a referências externas (XREFs), blocos com atributos e arquivos de backup.
- **Ferramentas de Precisão 2D:** Comandos clássicos de desenho (linhas, polilinhas, arcos, splines), edição (offset, trim, fillet), com *object snaps* (osnaps), rastreamento polar e gerenciamento avançado de camadas (layers).
- **Modelagem 3D Baseada em Kernel:** Criação de sólidos primitivos, extrusão, revolução, varredura (sweep), loft e operações booleanas, com renderização acelerada por GPU (via `wgpu`).
- **Automação e Extensibilidade:** Suporte a plugins nativos, scripts de comando, conversão em lote (headless) e um servidor MCP (Model Context Protocol) integrado, permitindo que assistentes de IA leiam e interajam com o desenho de forma controlada.

---

## 🚀 Instalação e Primeiros Passos

O Open CAD Studio oferece instaladores nativos leves e uma versão web para acesso imediato.

**Opção 1: Aplicativo Desktop (Recomendado para uso profissional)**
- **Windows:** Baixe o instalador `.msi` (x64 ou ARM64) ou use o Winget: `winget install HakanSeven.OpenCADStudio`
- **Linux:** Baixe o AppImage, torne-o executável (`chmod +x`) e execute, ou instale via Flatpak.
- **macOS:** Baixe o arquivo `.dmg` correspondente ao seu processador (Apple Silicon ou Intel) e arraste para a pasta Aplicativos.

**Opção 2: Versão Web (Para testes rápidos)**
- Acesse a versão web diretamente pelo navegador em [open-aec.com](https://open-aec.com/en/open-cad-studio/). Os arquivos são processados localmente no navegador e salvos como download, sem enviar dados para servidores.

**Primeiros Passos:**
1. Abra o Open CAD Studio e crie um "Novo Desenho".
2. Na barra inferior, ative os *Object Snaps* (F3) como "Endpoint", "Midpoint" e "Center".
3. Use o comando `LINE` (ou `L`) para desenhar uma forma geométrica, observando como o cursor "imanta" nos pontos exatos.
4. *Dica de fluxo pedagógico:* Use o comando `LAYER` para criar camadas separadas para "Construção", "Cotas" e "Texto". Isso ensina a importância da organização visual e lógica em projetos técnicos.

---

## 📚 Links de Referência

- [Site Oficial e Downloads](https://open-aec.com/en/open-cad-studio/)
- [Repositório Oficial no GitHub](https://github.com/HakanSeven12/OpenCADStudio)
- [Documentação do Projeto e API de Automação](https://github.com/HakanSeven12/OpenCADStudio/tree/main/docs)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Open CAD Studio** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Object Snaps (Osnap) e o Rigor das Conexões Lógicas:** No CAD, um erro de alguns pixels pode arruinar um projeto inteiro. Os *Object Snaps* garantem que as linhas se conectem exatamente nos vértices, pontos médios ou centros. Na matemática, isso é análogo ao **rigor das conexões lógicas** em uma demonstração. O aluno não deve "aproximar" o raciocínio ou pular etapas assumindo que "dá na mesma". Cada passo deve "snapar" (conectar-se) perfeitamente ao anterior, com justificativa clara, garantindo a integridade de toda a estrutura do argumento.
2. **Camadas (Layers) e a Gestão da Carga Cognitiva:** Um desenho CAD profissional separa geometria, cotas, texto e hachuras em camadas diferentes, que podem ser ligadas ou desligadas conforme a necessidade. O estudo de um tópico complexo (como Geometria Analítica) deve seguir a mesma lógica. O aluno deve organizar suas anotações em "camadas" mentais ou no papel: *Camada 1: Definições e Axiomas*, *Camada 2: Teoremas Principais*, *Camada 3: Exemplos Resolvidos*. Isolar essas camadas durante a revisão evita a sobrecarga cognitiva e facilita a identificação de lacunas no conhecimento.
3. **Blocos Dinâmicos e o Pensamento Funcional (Variáveis):** No CAD, um "bloco dinâmico" pode ter seus parâmetros (como comprimento ou ângulo) alterados, e todo o desenho se atualiza automaticamente para manter as restrições geométricas. Isso é a materialização visual do **pensamento funcional** em matemática. Ensine o aluno a ver equações e fórmulas não como números estáticos, mas como "blocos dinâmicos": *"Se eu alterar o valor de $x$, como isso afeta $y$? Quais restrições (domínio) mantêm a figura válida?"*. Essa mentalidade transforma a álgebra de um cálculo mecânico em uma exploração de relações.
