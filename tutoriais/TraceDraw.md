# ✒️ TraceDraw

## 📌 O que é o TraceDraw?
O **TraceDraw** é um programa de ilustração vetorial, diagramação e impressão de código aberto, reconstruído do zero em linguagem Rust. Sua filosofia central é a **interoperabilidade, a leveza nativa e a privacidade absoluta**: diferentemente de suítes de design pesadas e proprietárias, o TraceDraw é um editor "clean-room" (desenvolvido de forma independente) capaz de ler e salvar arquivos `.cdr` (CorelDRAW) reais. Ele oferece um espaço de trabalho completo com camadas, curvas, texto, efeitos ao vivo e exportação profissional para PDF/X, sem coletar telemetria, sem exigir contas e funcionando de forma fluida até mesmo em computadores mais antigos.

- **Categoria:** Editor de Ilustração Vetorial, Diagramação e Impressão de Código Aberto
- **Plataforma:** Windows / macOS / Linux / Android / Web (WebAssembly)
- **Palavras-chave:** TraceDraw, Vetor, Rust, CorelDRAW, .cdr, Código Aberto, Design, Diagramação, PDF/X, Privacidade

---

## ✨ Principais Destaques
- **Suporte Real a Arquivos `.cdr`:** Um dos poucos softwares de código aberto que abre e salva nativamente no formato CorelDRAW (versões 1 a 27), facilitando a transição de usuários e a colaboração com quem usa ferramentas proprietárias.
- **Motor Vetorial e Efeitos "Ao Vivo":** Trabalhe com curvas, nós, preenchimentos (gradientes, malha, padrões) e efeitos não destrutivos (sombra, extrusão, mesclagem) que permanecem editáveis a qualquer momento.
- **Leveza e Performance (Rust):** Construído em Rust com renderização eficiente, o programa inicia instantaneamente e roda bem até em hardware antigo (com suporte a OpenGL 2.1), sem o peso de frameworks como Electron.
- **Automação e Extensibilidade:** Possui uma interface de linha de comando (CLI), suporte a scripts JavaScript e um servidor MCP (Model Context Protocol), permitindo que agentes de IA ou scripts automatizem tarefas de design de forma segura e controlada.

---

## 🚀 Instalação e Primeiros Passos

O TraceDraw está em fase alfa ativa, mas já oferece instaladores robustos para as principais plataformas.

**Passo 1: Download**
- **Windows:** Baixe o instalador `.exe` ou a versão portátil `.zip` na [página de Releases do GitHub](https://github.com/tracedraw/tracedraw/releases). Também disponível na Microsoft Store (com atualização automática, mas pode estar uma versão atrás).
- **macOS / Linux:** Baixe os arquivos `.dmg`, `.deb` ou `.AppImage` correspondentes na mesma página de releases.
- **Web:** Pode ser testado diretamente no navegador sem instalação, compilado via WebAssembly.

**Passo 2: Primeiros Passos**
1. Abra o TraceDraw e explore a interface familiar: barra de propriedades sensível ao contexto, caixa de ferramentas e painéis encaixáveis (semelhante ao CorelDRAW ou Illustrator).
2. Crie um novo documento e use a **Ferramenta de Forma** para desenhar uma curva. Observe como você pode manipular os nós e alças para moldar o vetor com precisão matemática.
3. *Dica de fluxo:* Se você possui arquivos antigos de design ou material didático em `.cdr`, arraste-os para o TraceDraw. A capacidade de abrir esses arquivos sem conversores intermediários preserva camadas, fontes e efeitos, economizando horas de retrabalho.

---

## 📚 Links de Referência

- [Site Oficial e Demonstração no Navegador](https://tracedraw.github.io/tracedraw/)
- [Repositório Oficial no GitHub](https://github.com/tracedraw/tracedraw)
- [Página de Downloads (Releases)](https://github.com/tracedraw/tracedraw/releases)
- [Documentação de Recursos e Status](https://github.com/tracedraw/tracedraw/blob/main/docs/features.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **TraceDraw** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Gráficos Vetoriais e a Abstração Algébrica:** Diferente de uma imagem rasterizada (feita de pixels fixos que perdem qualidade ao ampliar), um gráfico vetorial é definido por equações matemáticas (pontos, curvas de Bézier, transformações). Isso é a essência da **abstração algébrica**. Ensine o aluno que uma fórmula (ex: $f(x) = ax^2 + bx + c$) não é apenas um conjunto de números, mas uma "regra vetorial" que gera infinitos pontos com precisão perfeita, independentemente da escala. Pensar de forma vetorial é pensar na estrutura geral, não no caso particular.
2. **Camadas e Efeitos "Ao Vivo" e a Resolução Não-Destrutiva:** No TraceDraw, aplicar uma sombra ou mesclagem não altera o objeto original; é um efeito "ao vivo" que pode ser ajustado ou removido. Na resolução de problemas matemáticos, o aluno deve adotar uma postura **não-destrutiva**. Em vez de apagar freneticamente um passo que parece errado (perdendo o raciocínio anterior), ele deve isolar essa tentativa em uma "camada" separada do caderno (um rascunho ao lado). Isso mantém a trilha de pensamento intacta para auditoria, permitindo identificar exatamente onde a lógica falhou sem perder o progresso válido.
3. **Engenharia Reversa "Clean-Room" e os Primeiros Princípios:** O TraceDraw lê arquivos `.cdr` estudando a documentação pública do formato, não copiando código proprietário. Na matemática, isso reflete o aprendizado por **primeiros princípios**. O aluno não deve apenas memorizar uma fórmula complexa como uma "caixa preta". Ele deve ser incentivado a entender sua derivação (de quais axiomas e teoremas mais simples ela surge). Quando se entende a origem de uma regra, ela deixa de ser algo a ser decorado e passa a ser uma ferramenta lógica que o aluno pode reconstruir por conta própria se necessário.
