# 🗑️ Eraser

## 📌 O que é o Eraser?
O **Eraser** é uma ferramenta avançada de segurança para Windows projetada para eliminar dados sensíveis do disco rígido de forma definitiva e irreversível. Sua filosofia central é que "apagar" um arquivo no sistema operacional tradicional apenas remove o ponteiro para ele, deixando os dados reais recuperáveis. O Eraser resolve isso sobrescrevendo (*overwriting*) o espaço físico do disco com padrões de dados aleatórios ou específicos (como o rigoroso método **DoD 5220.22-M**), garantindo que nenhuma ferramenta de recuperação forense possa reconstruir a informação original.

- **Categoria:** Ferramenta de Exclusão Segura e Limpeza de Dados
- **Plataforma:** Windows
- **Palavras-chave:** Exclusão Segura, DoD 5220.22-M, Privacidade, Overwriting, Limpeza de Espaço Livre, Segurança Digital

---

## ✨ Principais Destaques
- **Múltiplos Algoritmos de Exclusão:** Suporta diversos padrões de segurança, incluindo o famoso **DoD 5220.22-M** (padrão do Departamento de Defesa dos EUA), o método Gutmann (35 passadas) e a norma HMG IS5, permitindo escolher o nível de paranoia necessário.
- **Agendamento de Tarefas (Scheduler):** Permite configurar a exclusão segura de arquivos ou pastas específicas para ocorrer automaticamente na próxima reinicialização do sistema, no logoff ou em horários programados.
- **Limpeza de Espaço Livre (Unused Space):** Capacidade de varrer e sobrescrever todo o espaço "livre" do disco, eliminando os resíduos de arquivos que foram apagados normalmente no passado, mas que ainda residem fisicamente no HD/SSD.
- **Integração com o Shell do Windows:** Adiciona uma opção "Erase" no menu de contexto (clique com o botão direito), tornando a destruição segura de arquivos tão simples quanto apagá-los normalmente.

---

## 🚀 Instalação e Primeiros Passos

O Eraser é leve, gratuito e de código aberto, projetado para integração perfeita com o ambiente Windows.

**Opção 1: Instalação Padrão no Windows**
- Baixe o instalador mais recente diretamente da [página de download oficial](https://eraser.heidi.ie/download/) e siga o assistente de instalação.

**Primeiros Passos:**
1. Após a instalação, localize qualquer arquivo ou pasta que contenha dados sensíveis.
2. Clique com o botão direito do mouse sobre o item e selecione **Eraser** > **Erase**.
3. Uma janela de confirmação aparecerá, perguntando qual método de exclusão usar (o padrão geralmente é o DoD 5220.22-M ou o padrão do sistema). Confirme a ação.
4. O Eraser executará o processo de sobrescrita. *Nota:* Para unidades SSD modernas, o Eraser utiliza comandos TRIM seguros, pois a sobrescrita tradicional pode reduzir a vida útil do SSD sem garantir a mesma eficácia que em HDs mecânicos.
5. *Dica avançada:* Abra o painel principal do Eraser para configurar tarefas agendadas, como a limpeza automática da Lixeira ou de pastas de *downloads* toda sexta-feira à noite.

---

## 📚 Links de Referência

- [Site Oficial do Projeto](https://eraser.heidi.ie/)
- [Página de Download](https://eraser.heidi.ie/download/)
- 📺 [Tutorial em Vídeo: Como Apagar Arquivos (Método do FBI)](https://youtu.be/NHhzfdvxVdk)
- 🔍 [Referência: Método DoD 5220.22-M](https://www.google.com/search?q=m%C3%A9todo+dod+5220.22+m)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Eraser** oferecem analogias excepcionais para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Overwriting vs. Exclusão Simples (Revisão Profunda):** Quando você "apaga" um arquivo no Windows, ele continua lá, apenas invisível. Da mesma forma, quando um aluno erra uma questão e apenas "apaga" a resposta com a borracha para escrever a nova, o erro cognitivo permanece. O Eraser ensina o conceito de *overwriting* (sobrescrita): o aluno deve identificar ativamente *por que* errou e escrever a explicação do erro ao lado da correção. Isso "sobrescreve" a conexão neural falha com uma nova, correta e robusta.
2. **Limpeza de Espaço Livre (Eliminação de Ruído Cognitivo):** O Eraser pode limpar o espaço livre do disco, removendo fragmentos de dados antigos que ocupam lugar sem propósito. No estudo, isso equivale a revisar e descartar "macetes" incorretos, fórmulas mal memorizadas ou conceitos vagos que o aluno carrega e que causam interferência (ruído) na hora de resolver um problema novo. Fazer uma "limpeza de espaço livre" mental é essencial antes de introduzir um tópico avançado.
3. **Agendamento e Automação (Disciplina da Repetição Espaçada):** O recurso de agendamento do Eraser garante que a manutenção da segurança ocorra sem depender da memória do usuário. No aprendizado, a consolidação da matemática depende da **repetição espaçada**. O aluno não deve revisar um tema apenas quando "sente vontade" ou na véspera da prova; ele deve "agendar" revisões sistemáticas (ex: flashcards no Anki ou exercícios de revisão semanais) para garantir que o conhecimento não seja "recuperado" de forma corrompida com o passar do tempo.
