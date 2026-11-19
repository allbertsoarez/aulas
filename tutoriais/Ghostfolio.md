# 📊 Ghostfolio

## 📌 O que é o Ghostfolio?
O **Ghostfolio** é um software de gerenciamento de riqueza (*wealth management*) de código aberto, projetado para ajudar indivíduos a acompanhar e analisar seus ativos financeiros (ações, criptomoedas, ETFs, caixa) em um único lugar. Sua filosofia central é a **privacidade, a transparência e a soberania dos dados**. Diferente de aplicativos bancários tradicionais que monetizam seus dados ou o prendem em seu ecossistema, o Ghostfolio é construído com uma stack tecnológica moderna e robusta (Angular, NestJS, Prisma, Nx, TypeScript) e pode ser usado na nuvem ou, preferencialmente, auto-hospedado (*self-hosted*), garantindo que você seja o único dono das suas informações financeiras.

- **Categoria:** Software de Gerenciamento de Riqueza e Finanças Pessoais
- **Plataforma:** Web (Self-hosted / Cloud) / Android
- **Palavras-chave:** Finanças Pessoais, Código Aberto, Wealth Management, Angular, TypeScript, Privacidade, Dashboard, Auto-hospedado

---

## ✨ Principais Destaques
- **Privacidade e Soberania de Dados (Self-Hosting):** A possibilidade de hospedar o software no seu próprio servidor (via Docker) garante que seus dados financeiros sensíveis nunca saiam do seu controle, sem rastreamento ou venda de dados.
- **Dashboard Unificado e Visual:** Consolida diferentes classes de ativos em uma visão clara de patrimônio líquido, alocação percentual e desempenho histórico, eliminando a necessidade de planilhas manuais complexas.
- **Stack Tecnológica Moderna:** Construído com Angular (frontend), NestJS (backend), Prisma (ORM) e TypeScript, o que garante uma aplicação rápida, tipada, segura e com contribuições ativas da comunidade open-source.
- **Suporte Multi-moeda e Multi-plataforma:** Gerencia ativos em diversas moedas com conversão automática e oferece uma experiência fluida tanto no navegador desktop quanto em dispositivos móveis (via PWA/TWA no Android).

---

## 🚀 Instalação e Primeiros Passos

O Ghostfolio oferece flexibilidade total, desde uma conta na nuvem para testes rápidos até uma instalação robusta em servidor próprio.

**Opção 1: Versão Cloud (SaaS - Para iniciantes)**
- Acesse [ghostfol.io/pt/start](https://ghostfol.io/pt/start), crie uma conta gratuita e comece a adicionar seus ativos manualmente. É a maneira mais rápida de testar a ferramenta.

**Opção 2: Self-Hosted via Docker (Recomendado para privacidade máxima)**
- Se você possui um servidor (ou um NAS/Raspberry Pi), a instalação via Docker é a mais indicada:
  ```bash
  # Exemplo simplificado de docker-compose.yml
  # Consulte a documentação oficial no GitHub para o arquivo completo e variáveis de ambiente
  docker-compose up -d
  ```

**Primeiros Passos:**
1. Ao acessar o Ghostfolio, vá para a seção **"Portfolio"** e clique em **"Add Position"** (Adicionar Posição).
2. Insira os detalhes do ativo (ex: nome, símbolo da ação/ETF, quantidade, preço de compra e data). O sistema buscará automaticamente os dados de mercado.
3. Navegue até a aba **"Analytics"** para visualizar gráficos de alocação de ativos e a evolução do seu patrimônio ao longo do tempo.
4. *Dica de fluxo:* Use a funcionalidade de "Tags" ou "Contas" para separar visualmente seus objetivos (ex: "Aposentadoria", "Reserva de Emergência", "Especulação").

---

## 📚 Links de Referência

- [Site Oficial (Português)](https://ghostfol.io/pt/start)
- [Repositório Oficial no GitHub](https://github.com/ghostfolio/ghostfolio)
- [Aplicativo Android (TWA/PWA)](https://play.google.com/store/apps/details?id=ch.dotsilver.ghostfolio.twa&hl=pt_BR)
- [Documentação de Instalação (Docker)](https://github.com/ghostfolio/ghostfolio/tree/main/docker)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Ghostfolio** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Dashboard Unificado e a "Visão Macro" do Conhecimento:** Assim como o Ghostfolio agrega todos os ativos para mostrar o patrimônio líquido real, o aluno precisa de um "dashboard" do seu próprio aprendizado. Muitas vezes, o aluno acha que sabe um tópico porque acertou um exercício, mas ignora lacunas em outros. Criar um mapa visual (no caderno ou no Obsidian) do que foi "dominado", "em revisão" e "não estudado" elimina a ilusão de competência e direciona o esforço para onde ele é realmente necessário.
2. **Self-Hosting e a Internalização do Conhecimento:** Optar por auto-hospedar o Ghostfolio significa não depender de servidores de terceiros para guardar seus dados. Na matemática, isso equivale à **internalização**. O aluno não deve depender eternamente da "nuvem" (o livro aberto, a fórmula colada na mesa ou o professor ditando o passo a passo). Ele precisa construir seu próprio "servidor local" mental de conceitos e procedimentos para ter autonomia real na resolução de problemas, sem travar quando o "servidor externo" não está disponível (como na hora da prova).
3. **Diversificação de Ativos e Múltiplas Estratégias de Resolução:** Um portfólio saudável não coloca todo o dinheiro em um único ativo de risco; ele diversifica. Da mesma forma, um aluno proficiente em matemática não depende de um único método de resolução. Se a abordagem algébrica (Ativo A) estiver muito complexa ou travada, ele deve ter a flexibilidade de diversificar e tentar uma abordagem geométrica, numérica ou gráfica (Ativos B e C) para chegar à mesma resposta. A versatilidade é um sinal de domínio.
