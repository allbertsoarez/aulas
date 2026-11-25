# 🖥️ RustDesk

## 📌 O que é o RustDesk?
O **RustDesk** é um software de acesso remoto e suporte técnico de código aberto, projetado para ser uma alternativa direta, segura e gratuita a soluções proprietárias como TeamViewer ou AnyDesk. Sua filosofia central é a **soberania dos dados, a privacidade e a simplicidade**: diferentemente de ferramentas que limitam conexões comerciais ou roteiam seus dados por servidores de terceiros sem transparência, o RustDesk prioriza a conexão ponto-a-ponto (P2P) com criptografia de ponta a ponta. Além disso, ele oferece a opção de auto-hospedagem (*self-hosting*), permitindo que você controle totalmente seu próprio servidor de *relay*, garantindo que suas informações nunca saiam do seu ambiente controlado.

- **Categoria:** Software de Acesso Remoto de Código Aberto e Auto-hospedável
- **Plataforma:** Windows / macOS / Linux / Android / iOS / Web
- **Palavras-chave:** RustDesk, Acesso Remoto, Código Aberto, Auto-hospedado, TeamViewer Alternativo, Rust, Privacidade, Segurança, E2E

---

## ✨ Principais Destaques
- **Código Aberto e Transparente:** Totalmente *open-source* (licença AGPL-3.0), permitindo auditoria completa do código pela comunidade e garantindo a ausência de *backdoors* ou telemetria oculta.
- **Auto-hospedagem (*Self-Hosting*):** Possibilidade de configurar seu próprio servidor (usando os componentes `hbbs` e `hbbr`) para gerenciar as conexões. Ideal para escolas, laboratórios de informática ou usuários que exigem privacidade e velocidade máximas na rede local.
- **Leve e Portátil:** Desenvolvido na linguagem Rust, é extremamente rápido, consome poucos recursos do sistema e pode ser executado sem instalação (versão portátil), bastando um clique para iniciar o atendimento.
- **Criptografia de Ponta a Ponta (E2E):** Utiliza criptografia NaCl (Sodium) por padrão, garantindo que apenas as duas pontas da conexão tenham acesso aos dados transmitidos (vídeo, teclado e mouse).

---

## 🚀 Instalação e Primeiros Passos

O RustDesk é famoso por sua facilidade de uso, funcionando imediatamente após o download, sem a necessidade de criar contas obrigatórias.

**Passo 1: Download**
- Acesse [rustdesk.com/pt/](https://rustdesk.com/pt/) e baixe a versão correspondente ao seu sistema operacional (Windows, macOS, Linux, Android ou iOS).

**Passo 2: Primeiros Passos (Conexão Rápida)**
1. Abra o RustDesk em ambos os computadores (o que vai acessar e o que será acessado).
2. Na tela inicial, você verá um **"ID"** e uma **"Senha"** temporária ou permanente.
3. No computador de origem, digite o ID do computador de destino no campo "ID do Parceiro" e clique em "Conectar".
4. Insira a senha quando solicitada. A conexão será estabelecida com baixa latência.

**Passo 3: Configuração Avançada (Opcional - Auto-hospedagem)**
- Para quem deseja controle total, o RustDesk fornece os binários do servidor no GitHub. Você pode instalá-los em um VPS barato ou em um servidor local da sua rede, configurando o arquivo `rustdesk.toml` para apontar para o seu próprio servidor, eliminando totalmente a dependência dos servidores públicos do projeto.

---

## 📚 Links de Referência

- [Site Oficial (Português)](https://rustdesk.com/pt/)
- [Repositório Oficial no GitHub](https://github.com/rustdesk/rustdesk)
- [Documentação de Auto-hospedagem (Wiki)](https://github.com/rustdesk/rustdesk/wiki)
- 📺 [Vídeo: Seu acesso remoto é um LIXO!! Testa isso aqui no lugar (GRÁTIS + Open Source)](https://youtu.be/XLQ0El6V5kE)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **RustDesk** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Auto-hospedagem e a Autonomia do Aprendizado:** Assim como o RustDesk permite que você seja o dono do seu servidor, o aluno deve buscar a "auto-hospedagem" do conhecimento. Isso significa internalizar os fundamentos (tabuada, regras de sinais, identidades básicas) em sua própria "memória local", em vez de depender eternamente de "servidores externos" (calculadora para contas simples, consulta frenética ao livro a cada passo). A autonomia gera velocidade e confiança.
2. **Conexão P2P Direta e a Clareza na Resolução:** O RustDesk tenta estabelecer uma conexão direta entre as máquinas, sem passar por *relays* (intermediários) desnecessários que atrasam o processo. Na matemática, o aluno deve buscar essa "conexão direta" com o problema: ler o enunciado e identificar imediatamente a relação lógica entre os dados e a incógnita, sem se perder em "ruídos" textuais ou etapas de raciocínio redundantes. Ir direto ao ponto, com clareza, é sinal de domínio.
3. **Leveza (Rust) e a Gestão da Carga Cognitiva:** Por ser feito em Rust, o RustDesk é eficiente e não sobrecarrega o computador com "bloatware". A sessão de estudo do aluno deve seguir a mesma lógica de eficiência: um ambiente limpo, sem abas de redes sociais abertas, sem celular ao lado e com o material estritamente necessário sobre a mesa. Reduzir o "peso" do ambiente libera a "memória RAM" mental (memória de trabalho) para focar exclusivamente na complexidade do problema matemático.
