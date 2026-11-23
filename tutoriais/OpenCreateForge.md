# 🎨 OpenCreate Forge

## 📌 O que é o OpenCreate Forge?
O **OpenCreate Forge** é um editor de imagens poderoso, gratuito e de código aberto, projetado para trabalho criativo focado e profissional. Sua filosofia central é a **soberania do criador e o fluxo de trabalho não-destrutivo**: diferentemente de editores que achatam (flatten) o trabalho ou prendem o usuário em ecossistemas de nuvem, o Forge mantém suas camadas, metadados e decisões de edição intactos em seu formato nativo (`.ocfd`). Ele combina um canvas responsivo, ferramentas de precisão e um ambiente local, garantindo que seus arquivos e seu processo criativo permaneçam 100% sob seu controle.

- **Categoria:** Editor de Imagens de Código Aberto com Fluxo de Trabalho Não-Destrutivo
- **Plataforma:** Windows / macOS / Linux
- **Palavras-chave:** OpenCreate Forge, Editor de Imagens, Código Aberto, Camadas, Máscaras, Smart Objects, Privacidade, Design, FOSS

---

## ✨ Principais Destaques
- **Edição Não-Destrutiva:** Organize camadas de raster, texto, grupos, preenchimento e *Smart Objects* sem alterar permanentemente os pixels originais, permitindo ajustes infinitos a qualquer momento.
- **Ferramentas Profissionais:** Inclui pincel, lápis, borracha, mover, seleção, transformar, cortar, balde de tinta, gradiente, conta-gotas e ferramentas de texto com formatação rica (negrito, itálico, subscrito, etc.).
- **Máscaras e Estilos de Camada:** Aplique máscaras editáveis, traços, sombras (drop/inner), modos de mesclagem (blending modes) e controles de opacidade para composições complexas.
- **Smart Objects (Objetos Inteligentes):** Converta camadas em projetos aninhados editáveis. Você pode transformá-los (escalar, rotacionar) sem perder a qualidade ou o estado original, rasterizando apenas quando necessário.
- **Fluxo de Trabalho de Precisão:** Réguas, guias, snapping (imã), zoom de 5% a 5000% e histórico de ações com recuperação de sessão (Session Guard) em caso de fechamento inesperado.

---

## 🚀 Instalação e Primeiros Passos

O OpenCreate Forge é distribuído como um aplicativo nativo, sem necessidade de instaladores complexos ou dependências de nuvem.

**Opção 1: Download Direto (Recomendado)**
- Acesse a [página de releases no GitHub](https://github.com/opencreate-app/forge/releases) e baixe a versão para o seu sistema:
  - **Windows:** `.exe` ou instalador para Windows 10/11 (x86_64).
  - **macOS:** `.dmg` para Apple Silicon (arm64). *(Nota: Por ser software de código aberto sem notorização da Apple, pode ser necessário ir em "Ajustes do Sistema > Privacidade e Segurança > Abrir Mesmo Assim" na primeira execução).*
  - **Linux:** `.AppImage` para x86_64 (torne-o executável com `chmod +x` antes de rodar).

**Primeiros Passos:**
1. Abra o OpenCreate Forge e crie um **Novo Projeto** (defina a resolução e o fundo).
2. Adicione uma camada de texto e uma forma geométrica. Observe como elas permanecem como camadas independentes no painel à direita.
3. Clique com o botão direito na camada de forma e selecione **"Convert to Smart Object"**. Agora, tente redimensioná-la. Você notará que a qualidade se mantém perfeita, pois os dados originais estão protegidos.
4. *Dica de fluxo:* Use o atalho `Ctrl+Z` (ou `Cmd+Z`) para explorar o histórico. O Forge salva o estado do projeto, permitindo que você experimente composições arriscadas sem medo de "estragar" o trabalho base.

---

## 📚 Links de Referência

- [Site Oficial do OpenCreate](https://opencreate.app/forge)
- [Repositório Oficial no GitHub](https://github.com/opencreate-app/forge)
- [Documentação e Guias de Formato de Arquivo (.ocfd)](https://github.com/opencreate-app/forge#file-format-and-exports)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **OpenCreate Forge** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Camadas Não-Destrutivas e o Rascunho Iterativo:** No Forge, você nunca "apaga" permanentemente um pixel se usar máscaras ou camadas; você apenas o oculta ou ajusta. Na matemática, o aluno deve tratar o caderno de rascunho da mesma forma. Em vez de apagar freneticamente um cálculo que deu errado (perdendo a trilha do raciocínio), ele deve riscar suavemente ou usar uma cor diferente e continuar ao lado. Manter as "camadas" do pensamento visíveis permite fazer *debug* do próprio erro: *"Onde exatamente a lógica quebrou?"*
2. **Smart Objects e a Abstração Algébrica:** Um *Smart Object* pode ser girado, esticado ou movido sem perder sua definição original. Isso é uma analogia perfeita para o **trabalho com variáveis e funções** na matemática. O aluno deve aprender a manipular a estrutura abstrata de uma equação (ex: isolar o $x$, fatorar um polinômio) sem se preocupar imediatamente com os valores numéricos específicos. Preservar a "integridade do objeto" até o momento final da substituição evita erros de arredondamento e perda de precisão.
3. **Máscaras de Camada e a Gestão Seletiva da Atenção:** Uma máscara permite esconder partes de uma imagem sem deletá-las, focando apenas no que é relevante no momento. Ao estudar um teorema complexo, o aluno deve aplicar uma "máscara mental": ignorar temporariamente as exceções de borda, os casos patológicos ou a notação mais densa, focando primeiro na intuição central e no caso geral. À medida que a compreensão se solidifica, ele pode "revelar" gradualmente as camadas de complexidade ocultas, sem se sobrecarregar no início.
