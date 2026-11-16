# 💻 Dev-C++

## 📌 O que é o Dev-C++?
O **Dev-C++** (mantido atualmente pela Embarcadero) é um Ambiente de Desenvolvimento Integrado (IDE) gratuito, portátil e extremamente leve para as linguagens C e C++. Sua filosofia central é a **simplicidade e a acessibilidade**: ele fornece uma interface direta e sem distrações, acoplada ao compilador MinGW-w64 (GCC), sendo a ferramenta ideal para estudantes, educadores e iniciantes que desejam aprender os fundamentos da programação e da lógica computacional sem a sobrecarga e a complexidade de IDEs industriais pesadas.

- **Categoria:** Ambiente de Desenvolvimento Integrado (IDE) para C/C++
- **Plataforma:** Windows
- **Palavras-chave:** C, C++, Programação, IDE Leve, Código Aberto, Compilador MinGW, Educação

---

## ✨ Principais Destaques
- **Leveza e Desempenho:** Consome pouquíssima memória RAM e inicia em segundos, sendo ideal para hardware modesto ou para manter o foco total no código, sem atrasos de carregamento de interfaces complexas.
- **Compilador Integrado (MinGW-w64):** Já vem pronto para uso com o compilador GCC atualizado, suportando os padrões modernos de C e C++ (como C11 e C++17) sem necessidade de configurações manuais complicadas.
- **Modo Portátil:** Pode ser executado diretamente de um pen drive ou pasta local sem necessidade de instalação no sistema operacional, mantendo todas as configurações e histórico do usuário contidos na própria pasta.
- **Ferramentas de Depuração (Debugging):** Integração nativa com o GDB (GNU Debugger), permitindo que o usuário execute o código passo a passo, inspecione variáveis e encontre erros lógicos de forma visual e controlada.

---

## 🚀 Instalação e Primeiros Passos

O Dev-C++ é projetado para ser configurado em menos de dois minutos.

**Opção 1: Instalador Padrão (Recomendado)**
- Baixe o instalador mais recente (ex: `Dev-Cpp-x.x.x-Setup.exe`) na página de Releases do GitHub ou no site oficial e siga o assistente de instalação.

**Opção 2: Versão Portátil (Ideal para laboratórios ou pen drives)**
- Baixe a versão `Portable` (geralmente um arquivo `.zip` ou `.7z`). Extraia o conteúdo para qualquer pasta ou pen drive e execute o `devcpp.exe`. Nenhuma permissão de administrador é necessária.

**Primeiros Passos:**
1. Abra o Dev-C++ e vá em **Arquivo > Novo > Arquivo Fonte** (ou pressione `Ctrl + N`).
2. Digite um código simples, como o clássico "Hello World":
   ```c
   #include <stdio.h>
   int main() {
       printf("Ola, mundo!\n");
       return 0;
   }
   ```
3. Salve o arquivo com a extensão correta (ex: `teste.c` para C ou `teste.cpp` para C++).
4. Pressione **F11** (Compilar e Executar). O Dev-C++ compilará o código e abrirá uma janela de terminal mostrando o resultado.

---

## 📚 Links de Referência

- [Site Oficial](https://www.dev-cpp.com/)
- [Repositório Oficial no GitHub (Embarcadero)](https://github.com/Embarcadero/Dev-Cpp)
- [Página de Releases para Download](https://github.com/Embarcadero/Dev-Cpp/releases)

---

### 💡 Nota sobre a Metodologia de Estudo
A arquitetura e a filosofia do **Dev-C++** oferecem analogias poderosas para a sua metodologia de estudo de temas complexos ou longos, especialmente no ensino da matemática:

1. **Simplicidade e Foco (Redução da Carga Cognitiva):** Assim como o Dev-C++ remove recursos desnecessários para que o iniciante foque apenas na lógica do código, o estudo de matemática deve começar com ferramentas simples (papel, caneta e raciocínio puro). Introduzir softwares complexos ou calculadoras avançadas antes que o aluno domine a lógica fundamental apenas aumenta a "carga cognitiva" e mascara a falta de compreensão real do conceito.
2. **Depuração Passo a Passo (Debugging do Raciocínio):** O debugger do Dev-C++ permite parar a execução em cada linha e ver o valor exato de cada variável. Na matemática, incentive o aluno a usar essa mesma técnica de "debugging" ao revisar um erro: não olhe apenas para a resposta final errada. Volte linha por linha da resolução, verificando o "valor" (a validade lógica) de cada passo até encontrar exatamente onde o sinal foi trocado ou a regra foi mal aplicada.
3. **Portabilidade (Internalização do Conhecimento):** A versão portátil do Dev-C++ roda em qualquer lugar, sem depender de instalações no sistema. Da mesma forma, o verdadeiro conhecimento matemático é "portátil": ele não depende de um aplicativo específico, de uma fórmula colada na parede ou da internet. Quando o aluno internaliza os fundamentos, ele carrega essa lógica consigo e pode aplicá-la em qualquer contexto, a qualquer momento.
