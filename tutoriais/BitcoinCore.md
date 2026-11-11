# ₿ Bitcoin Core

## 📌 O que é o Bitcoin Core?
O **Bitcoin Core** é a implementação de referência oficial do protocolo Bitcoin. Mais do que uma simples carteira, ele é um **nó completo (full node)** da rede. Isso significa que ele baixa, valida e armazena de forma independente todo o histórico de transações do Bitcoin, garantindo que todas as regras de consenso (como o limite de 21 milhões de moedas e a validade das assinaturas criptográficas) sejam rigorosamente respeitadas. É a forma mais soberana e segura de interagir com a rede Bitcoin.

---

## ✨ Principais Destaques
- **Validação Independente (Trustless):** Você não precisa confiar em terceiros (como corretoras ou "light wallets"). O Bitcoin Core verifica matematicamente cada bloco e transação, garantindo que nenhuma regra do protocolo seja violada.
- **Privacidade e Soberania:** Ao usar seu próprio nó, você não vaza o saldo da sua carteira para servidores de terceiros. Suas transações são transmitidas diretamente pela sua conexão, e você é o único detentor das suas chaves privadas.
- **Modo "Pruning" (Otimização de Espaço):** Embora a blockchain completa exija mais de 600 GB de armazenamento, o Bitcoin Core possui um modo de "poda" (pruning) que permite rodar um nó validador completo armazenando apenas os últimos blocos, reduzindo o requisito de disco para cerca de 10 a 20 GB, sem sacrificar a segurança.
- **Código Aberto e Auditável:** Desenvolvido de forma colaborativa por centenas de contribuidores sob a licença MIT, com um processo rigoroso de revisão de código e testes automatizados.

---

## 🚀 Instalação e Primeiros Passos

A execução de um nó completo exige atenção à segurança no download e paciência na sincronização inicial.

**1. Download e Verificação (Crítico para Segurança):**
- Baixe o instalador para seu sistema operacional (Windows, macOS ou Linux) diretamente do [site oficial](https://bitcoincore.org/en/download/).
- **Verificação Criptográfica:** É altamente recomendado verificar a assinatura PGP e o hash SHA-256 do arquivo baixado para garantir que ele não foi adulterado. O site oficial fornece instruções detalhadas passo a passo para Windows, macOS e Linux usando a ferramenta `gpg`.

**2. Instalação e Primeira Execução:**
- Instale o software como qualquer outro aplicativo.
- Ao abrir pela primeira vez, escolha o diretório de dados. Se tiver pouco espaço em disco, vá em *Settings > Options* e ative a opção **"Prune block storage to"** (definindo, por exemplo, 20000 MB).

**3. Sincronização Inicial:**
- O software começará a baixar e validar a blockchain desde o bloco gênesis (2009).
- **Requisitos:** Conexão estável com a internet e, dependendo do modo, espaço em disco adequado. A sincronização inicial pode levar de algumas horas a alguns dias, dependendo do desempenho do seu hardware (um SSD é fortemente recomendado para acelerar a validação).

---

## 📚 Links de Referência

- [Site Oficial e Download](https://bitcoincore.org/en/download/)
- [Repositório no GitHub](https://github.com/bitcoin/bitcoin)
- [Documentação para Desenvolvedores e Usuários](https://github.com/bitcoin/bitcoin/tree/master/doc)

---

### 💡 Nota sobre a Metodologia de Estudo
A filosofia do **Bitcoin Core** é a materialização digital do **pensamento matemático rigoroso**. 

1. **Validação Independente vs. Confiança Cega:** Um nó completo não "acredita" que uma transação é válida porque outro nó disse que era. Ele **verifica** a prova criptográfica por conta própria. Na matemática, isso é a essência de uma demonstração (prova). Ensine seus alunos a não aceitar uma fórmula ou teorema apenas porque "está no livro". Incentive-os a "rodar o próprio nó": verificar a lógica, testar com exemplos e entender a demonstração por trás do resultado.
2. **O Custo da Soberania (Sincronização):** Rodar um nó completo exige tempo de sincronização e recursos (HD/SSD). Da mesma forma, construir um conhecimento matemático sólido e "soberano" (que ninguém pode tirar de você) exige tempo, esforço cognitivo e prática deliberada. Não existe "sincronização instantânea" de conhecimento profundo; o processo é parte fundamental do aprendizado.
3. **Modo Pruning (Foco no Essencial):** Assim como o modo *pruning* descarta dados antigos da blockchain para economizar espaço, mantendo apenas a "ponta" válida para continuar validando o futuro, uma boa metodologia de estudo deve ensinar o aluno a "podar" o excesso de informação. Foque nos conceitos fundamentais e nas regras de inferência, em vez de tentar memorizar cada detalhe histórico ou exceção irrelevante.
