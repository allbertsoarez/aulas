# ⚙️ REDasm

## 📌 O que é o REDasm?
O **REDasm** é um desmontador (disassembler) e ferramenta de análise binária multiplataforma, de código aberto e construído em C/C++ com interface Qt6. Sua filosofia central é a **transparência, a extensibilidade e a preservação do software**: diferentemente de ferramentas comerciais fechadas, o REDasm oferece uma API em C pública e uma arquitetura baseada em plugins, permitindo que a comunidade adicione suporte a novas arquiteturas e formatos. Ele é projetado tanto para engenheiros reversos profissionais quanto para entusiastas, com um foco especial e admirável no suporte a formatos legados e de retrocomputação (como DOS, OS/2, GameBoy e ZX Spectrum), garantindo que o conhecimento sobre softwares antigos não se perca.

- **Categoria:** Desmontador e Ferramenta de Análise Binária de Código Aberto
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** REDasm, Desmontador, Análise Binária, Engenharia Reversa, Código Aberto, Qt6, x86, ARM, Retrocomputação, RDIL

---

## ✨ Principais Destaques
- **Listagem Interativa e Gráfico de Fluxo de Controle (CFG):** Permite navegar pelo código e dados com referências cruzadas (cross-references), renomear símbolos, adicionar comentários e visualizar o fluxo do programa em um gráfico sincronizado com a listagem.
- **RDIL (REDasm Intermediate Language):** Uma linguagem intermediária minimalista e independente de arquitetura, usada para análise e "lifting" de código, servindo como base para futuras funcionalidades de descompilação de alto nível.
- **Suporte Amplo a Arquiteturas e Formatos:** Suporte de produção para PE/ELF (Windows/Linux) e x86/x64, além de suporte funcional a arquiteturas retrô como Z80, MOS6502, MIPS, ARM e formatos como MZ (DOS) e ROMs de GameBoy.
- **Sistema de Tipos e Análise Automática:** Detecta strings automaticamente, permite definir structs, unions e enums diretamente na listagem, e possui analisadores específicos (como recuperação de RTTI e tratamento de exceções do MSVC).

---

## 🚀 Instalação e Primeiros Passos

O REDasm é distribuído como binários pré-compilados portáteis, tornando o início do uso extremamente simples, sem necessidade de instalação complexa.

**Opção 1: Download de Binários Pré-compilados (Recomendado)**
- Acesse a [página de Releases no GitHub](https://github.com/redasm-dev/redasm/releases) e baixe a versão mais recente (ex: `v4.0.0-beta4`):
  - **Windows:** Arquivo `.zip` portátil (basta extrair e executar).
  - **Linux:** Arquivo `.AppImage` (torne-o executável com `chmod +x` e execute).
  - **macOS:** Arquivo `.dmg` (Universal, Apple Silicon ou Intel).

**Opção 2: Gerenciadores de Pacotes**
- **Windows (Scoop):** `scoop bucket add redasm https://github.com/redasm-dev/scoop-redasm && scoop install redasm`
- **Linux (AUR):** `yay -S redasm-beta`

**Primeiros Passos:**
1. Abra o REDasm e arraste um arquivo executável simples (como um pequeno programa em C que você mesmo compilou, ou um desafio de CTF) para a janela.
2. O painel principal mostrará a listagem em assembly. Clique com o botão direito em um endereço de memória e selecione "Add Comment" para documentar sua descoberta.
3. Pressione `Space` ou clique no botão de gráfico para visualizar o **Control Flow Graph (CFG)** da função selecionada, entendendo visualmente os desvios condicionais (`if/else`) e loops.
4. *Dica de fluxo:* Use o painel "Strings" para localizar textos legíveis no binário. Clicar duas vezes em uma string levará você diretamente aonde ela é usada no código, um dos primeiros passos mais eficazes na análise de qualquer programa.

---

## 📚 Links de Referência

- [Site Oficial](https://redasm.dev/)
- [Repositório Oficial no GitHub](https://github.com/redasm-dev/redasm)
- [Documentação e Guia de Compilação](https://github.com/redasm-dev/redasm#building-from-source)
- [Repositório de Issues e Contribuições](https://github.com/redasm-dev/redasm/issues)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **REDasm** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Desmontagem e a Decomposição Atômica de Problemas:** O REDasm pega um bloco de código compilado e o quebra em instruções de assembly individuais e compreensíveis. Na matemática, o aluno deve aplicar essa mesma "desmontagem" a problemas complexos. Em vez de encarar uma equação gigante com pavor, ele deve isolá-la instrução por instrução: *"Primeiro, isolo o termo com a incógnita. Segundo, aplico a raiz quadrada em ambos os lados"*. Tratar a resolução como uma sequência de micro-passos atômicos elimina a ansiedade e o erro por sobrecarga.
2. **Referências Cruzadas (Cross-References) e a Teia de Conhecimento:** No REDasm, você pode ver exatamente de onde uma função é chamada e para onde ela salta. O conhecimento matemático não é linear; é uma rede. Incentive o aluno a mapear as "referências cruzadas" dos conceitos: *"Onde mais eu usei a Fatoração? Como o conceito de Derivada se conecta ao de Coeficiente Angular?"*. Quando o aluno vê as conexões, ele para de memorizar tópicos isolados e começa a entender a estrutura unificada da disciplina.
3. **Linguagem Intermediária (RDIL) e a Abstração Algébrica:** O REDasm traduz o código de máquina específico (x86, ARM) para uma Linguagem Intermediária (RDIL) neutra, para analisar a lógica sem se distrair com os detalhes do hardware. Na matemática, isso é a essência da **abstração algébrica**. O aluno deve aprender a elevar um problema numérico específico para uma forma intermediária abstrata (usando variáveis como $x$, $y$ ou $f(x)$). Ao focar na estrutura lógica (a "RDIL" do problema) em vez de se perder nos cálculos aritméticos prematuros, a solução se torna clara e independente dos números específicos do enunciado.
