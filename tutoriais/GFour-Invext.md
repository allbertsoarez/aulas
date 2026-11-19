# 📈 GFour-Invext

## 📌 O que é o GFour-Invext?
O **GFour-Invext** é uma plataforma web gratuita e de código aberto (*open source*), desenvolvida com foco na educação e transparência financeira. Sua filosofia central é a **democratização da gestão de investimentos**: ele oferece ferramentas para gerenciar carteiras de ações e ativos, transformando dados brutos e complexos do mercado financeiro em visualizações claras e intuitivas (gráficos e tabelas). Por ser um projeto acadêmico de código aberto, ele prioriza a acessibilidade e a compreensão do usuário, sem as barreiras ou custos de plataformas comerciais tradicionais.

- **Categoria:** Plataforma de Gerenciamento de Carteira de Investimentos
- **Plataforma:** Web (Frontend em React) / Servidor (Node.js e MySQL)
- **Palavras-chave:** Finanças, Investimentos, Código Aberto, Visualização de Dados, Gráficos, Gestão de Portfólio, React, Node.js

---

## ✨ Principais Destaques
- **Visualização Intuitiva de Dados:** Converte números complexos de rentabilidade e alocação de ativos em gráficos visuais e tabelas organizadas, facilitando a tomada de decisão e o entendimento do desempenho da carteira.
- **100% Gratuito e Open Source:** Sem taxas de administração, sem *paywalls* e com código disponível para auditoria, garantindo transparência total sobre como os cálculos de rentabilidade e projeções são realizados.
- **Arquitetura Web Moderna:** Construído com uma stack robusta e amplamente utilizada no mercado (React no frontend, Node.js no backend e MySQL no banco de dados), garantindo uma experiência de usuário fluida e responsiva.
- **Foco Educacional:** Ideal para estudantes e iniciantes no mercado financeiro que desejam aprender a monitorar seus ativos sem a complexidade excessiva de terminais profissionais.

---

## 🚀 Instalação e Primeiros Passos

Por ser um projeto de código aberto hospedado no GitHub, a instalação requer a configuração de um ambiente de desenvolvimento local (ou a utilização de uma instância hospedada pela comunidade, se disponível).

**Opção 1: Execução Local (Para desenvolvedores ou usuários avançados)**
1. Certifique-se de ter o **Node.js** (v16+ LTS) e o **MySQL Server** instalados no seu sistema (o guia oficial foca no Ubuntu 22.04, mas funciona em Windows/macOS com adaptações).
2. Clone o repositório:
   ```bash
   git clone https://github.com/fga-eps-mds/GFour-Invext.git
   cd GFour-Invext
   ```
3. **Configure o Banco de Dados:** Acesse o MySQL e crie o banco: `CREATE DATABASE usuario;`
4. **Instale e rode o Backend:**
   ```bash
   cd Back
   npm install
   npm start
   ```
5. **Instale e rode o Frontend:**
   ```bash
   cd ../Front
   npm install
   npm run dev
   ```
6. Acesse o link fornecido no terminal (geralmente `http://localhost:5173` ou similar) para usar a aplicação.

**Opção 2: Uso da Versão Web (Se hospedada)**
- Verifique no repositório ou na documentação do projeto se há um link de *deploy* ativo (ex: Vercel, Netlify ou servidor da universidade) para uso direto no navegador, sem necessidade de instalação.

---

## 📚 Links de Referência

- [Documentação e Site do Projeto](https://fga-eps-mds.github.io/GFour-Invext/#/)
- [Repositório Principal no GitHub](https://github.com/fga-eps-mds/GFour-Invext)
- [Guia de Contribuição (CONTRIBUTING.md)](https://github.com/fga-eps-mds/GFour-Invext/blob/main/CONTRIBUTING.md)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **GFour-Invext** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Visualização de Dados (Gráficos e Tabelas) e Representação Múltipla:** O grande valor do Invext é transformar uma planilha chata de números em um gráfico de pizza ou de evolução temporal que o cérebro processa instantaneamente. Na matemática, incentive seus alunos a praticar a "tradução de representações". Um problema algébrico complexo muitas vezes se torna óbvio quando desenhado no plano cartesiano. Ensinar o aluno a alternar entre a linguagem simbólica (fórmulas), tabular (dados) e geométrica (gráficos) é uma das habilidades mais poderosas para a resolução de problemas.
2. **Código Aberto e a Auditoria do Raciocínio:** Por ser *open source*, qualquer um pode verificar como o Invext calcula a rentabilidade. Na sala de aula, combata a mentalidade da "fórmula mágica". O aluno deve ser incentivado a "olhar o código-fonte" da matemática: entender a demonstração de um teorema ou a lógica por trás de um algoritmo. Quando o aluno sabe *por que* uma regra funciona, ele não precisa memorizá-la cegamente; ele consegue reconstruí-la logicamente se a esquecer.
3. **Gestão de Carteira e o "Rebalanceamento" do Conhecimento:** Um investidor monitora sua carteira para ver quais ativos estão rendendo bem e quais estão prejudicando o todo, fazendo ajustes (rebalanceamento). O aluno deve tratar seu conhecimento da mesma forma. Através de autoavaliações ou simulados, ele deve identificar quais tópicos (ex: "Funções do 2º Grau") estão "rendendo pouco" e realocar seu tempo de estudo para equilibrar a "carteira de conhecimento", em vez de apenas revisar o que já sabe (os ativos que já estão valorizados).
