# 🧅 DeepOnion

## 📌 O que é o DeepOnion?
O **DeepOnion** (ONION) é uma criptomoeda e carteira digital focada em anonimato absoluto e privacidade. Sua principal filosofia é garantir que todas as transações sejam privadas e não rastreáveis, roteando automaticamente toda a comunicação do software através da rede TOR. Diferente de outras carteiras que exigem configurações complexas de proxy, o DeepOnion integra o TOR nativamente, ocultando o endereço IP do usuário e utilizando tecnologias como *Stealth Addresses* para que o histórico de transações permaneça invisível para terceiros.

- **Categoria:** Carteira de Criptomoedas e Privacidade
- **Plataforma:** Windows / macOS / Linux / Android
- **Palavras-chave:** Criptomoedas, Privacidade, Rede TOR, Anonimato, Código Aberto, DeepSend, Stealth Addresses

---

## ✨ Principais Destaques
- **Privacidade por Padrão (TOR Integrado):** Toda a comunicação da carteira passa automaticamente pela rede TOR. Não há necessidade de configurar clientes externos; o software gerencia a conexão de forma transparente, protegendo o IP do usuário desde o primeiro clique.
- **DeepSend e Stealth Addresses:** Utiliza tecnologias proprietárias que enviam pagamentos a partir de carteiras aleatórias e ocultas, sem depender de *mixing pools* (pools de mistura) centralizados e vulneráveis. As *Stealth Addresses* garantem que o saldo e o destinatário real permaneçam invisíveis na blockchain pública.
- **Consenso Híbrido (PoW e PoS):** Combina Proof of Work (algoritmo X13) para segurança inicial da rede com Proof of Stake para validação contínua e sustentável, com recompensas que se ajustam ao longo do tempo para evitar a inflação descontrolada.
- **Governança Comunitária (VoteCentral):** Um sistema de votação baseado em blockchain que permite à comunidade decidir sobre o uso do fundo de desenvolvimento, projetado especificamente para evitar que grandes detentores ("whales") manipulem as decisões em seu próprio benefício.

---

## 🚀 Instalação e Primeiros Passos

O DeepOnion prioriza a segurança, e sua instalação deve ser feita sempre através dos canais oficiais para evitar versões modificadas.

**Opção 1: Aplicativo Desktop (Recomendado para uso principal)**
- Baixe o instalador oficial para **Windows**, **macOS** ou **Linux** diretamente do site do projeto. O software inclui todas as dependências necessárias, incluindo os binários do TOR.

**Opção 2: Dispositivos Móveis**
- Disponível para **Android** via APK oficial no site ou através de versões compatíveis com Electrum para maior controle sobre as chaves privadas.

**Primeiros Passos:**
1. Instale e abra o DeepOnion. Na primeira execução, selecione **"Create New Wallet"** (Criar Nova Carteira).
2. **Etapa Crucial:** Anote a *seed phrase* (frase de recuperação) de 12 ou 24 palavras em um local físico e seguro. O software não armazena essa informação.
3. Aguarde a sincronização. O ícone de conexão no canto inferior direito deve indicar que você está conectado à rede TOR (geralmente representado por um endereço `.onion` ou ícone de cebola).
4. Para testar a privacidade, envie uma pequena quantia para outro endereço e utilize a função **DeepSend** nas opções de envio para ofuscar a origem dos fundos.

---

## 📚 Links de Referência

- [Site Oficial](https://deeponion.org/pt/)
- [Repositório no GitHub](https://github.com/deeponion/deeponion)
- [Documentação e Guias de Instalação](https://deeponion.org/pt/guides)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **DeepOnion** oferecem analogias poderosas para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Camadas de Abstração (TOR e Criptografia):** Assim como o DeepOnion usa múltiplas camadas (rede TOR, *Stealth Addresses*, criptografia de carteira) para proteger os dados, a matemática é construída em camadas de abstração (números $\rightarrow$ álgebra $\rightarrow$ cálculo). Ensine o aluno a respeitar cada camada: ele não pode tentar resolver uma equação diferencial (camada superior) sem dominar as regras de derivação (camada inferior). Entender como as camadas se conectam é a chave para desvendar problemas complexos.
2. **Validação e Consenso (PoW/PoS):** A rede DeepOnion exige que múltiplos nós validem um bloco antes que ele seja aceito como verdadeiro (consenso). Na matemática, uma solução só é válida se passar pelo "consenso" das regras lógicas e axiomas. Incentive o aluno a criar seu próprio "mecanismo de validação": após encontrar uma resposta, ele deve substituí-la na equação original, verificar as unidades de medida ou estimar se o resultado é plausível. A autoconfiança vem da verificação, não do palpite.
3. **Transparência do Processo vs. Anonimato do Resultado:** Embora a transação final seja anônima na rede, o *código* da carteira é 100% aberto e auditável. No estudo, isso se traduz em uma regra de ouro: o *raciocínio* do aluno deve ser totalmente transparente e auditável (passo a passo escrito com clareza), mesmo que o problema em si pareça um "enigma". Um processo bem documentado permite que o professor (ou o próprio aluno) faça o *debug* do erro exatamente na linha onde a lógica falhou.
