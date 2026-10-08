# SUMÁRIO
## 1. FUNDAMENTOS E PARADIGMAS DE PROGRAMAÇÃO
### 1.1. DIFERENÇA ENTRE PROGRAMAÇÃO ESTRUTURADA E ORIENTAÇÃO A OBJETOS (POO)
A **programação estruturada** organiza o código em blocos lógicos, funções e procedimentos sequenciais, sendo a base de linguagens como C. Em contraste, a **Programação Orientada a Objetos (POO)** estrutura o software em torno de "objetos" que encapsulam dados e comportamentos. Em um curso de C, esse tópico serve como contextualização teórica para que o aluno compreenda a evolução dos paradigmas, sem implementar POO na prática nesta etapa.
- Fonte de referência: [Programação Estruturada](https://pt.wikipedia.org/wiki/Programa%C3%A7%C3%A3o_estruturada) e [Conceitos de Orientação a Objetos](https://pt.wikipedia.org/wiki/Orienta%C3%A7%C3%A3o_a_objetos).

### 1.2. CONCEITOS FUNDAMENTAIS: VARIÁVEIS, TIPOS DE DADOS E A NOÇÃO DE CLASSES
Uma **variável** é um espaço nomeado na memória destinado a armazenar dados manipuláveis. Em C, trabalhamos com **tipos de dados** primitivos (como `int`, `float`, `char`). O conceito de **classe**, embora mencionado na ementa original, pertence à POO; no contexto de C, o equivalente estrutural mais próximo para agrupar dados é a `struct`, devendo-se evitar a confusão conceitual entre classes (comportamento + estado) e tipos primitivos ou estruturados da linguagem C.
- Fonte de referência: [Tipos de Dados em C](https://learn.microsoft.com/pt-br/cpp/c-language/c-data-types?view=msvc-170).

---

## 2. PREPARAÇÃO DO AMBIENTE DE DESENVOLVIMENTO
### 2.1. INSTALAÇÃO E CONFIGURAÇÃO DO COMPILADOR E DA IDE GEANY
*(Nota de Correção Curricular: O termo "Geny" na ementa original é uma imprecisão comum para **Geany**, uma IDE leve, rápida e amplamente adotada no ensino técnico).*
Para desenvolver em C, é necessário um **compilador** (como o GCC - GNU Compiler Collection) que traduz o código-fonte em linguagem de máquina. O **Geany** atua como o Ambiente de Desenvolvimento Integrado (IDE) que unifica a edição, compilação e execução do código, simplificando o fluxo de trabalho no ambiente desktop.
- Fonte de referência: [Site Oficial do Geany](https://www.geany.org/) e [Documentação do GCC](https://gcc.gnu.org/).

### 2.2. CRIAÇÃO DE PROJETO E ORGANIZAÇÃO DO AMBIENTE DESKTOP
A criação de um projeto envolve a organização lógica de diretórios, a configuração dos comandos de build nas preferências da IDE e a garantia de que os arquivos de código-fonte utilizem a extensão correta (`.c`). Um ambiente bem configurado previne erros de caminho (path) e facilita a manutenção do código.

---

## 3. SINTAXE E ESTRUTURA BÁSICA DA LINGUAGEM C
### 3.1. ESTRUTURA DE UM PROGRAMA E O MÉTODO `MAIN`
Todo programa executável em C deve conter uma função principal chamada **`main`**, que é o ponto de entrada da execução. A estrutura básica inclui diretivas de pré-processamento (ex: `#include <stdio.h>`), a assinatura da função `main` e o retorno de um valor inteiro (`return 0`) ao sistema operacional, indicando término bem-sucedido.
- Fonte de referência: [Estrutura de um Programa em C](https://www.inf.pucrs.br/~pinho/TEP/topico02/topico02.html).

### 3.2. ENTRADA E SAÍDA DE DADOS (I/O) *(Tópico Essencial Adicionado)*
A interação com o usuário é fundamental. O uso das funções **`printf`** (para saída formatada) e **`scanf`** (para leitura de dados) é indispensável para que o programa receba variáveis do mundo externo e exiba resultados, tornando a execução tangível para o aluno.
- Fonte de referência: [Funções de Entrada e Saída em C](https://www.cprogressivo.net/2012/11/Curso-de-C-Entrada-e-Saida-printf-e-scanf.html).

### 3.3. DECLARAÇÃO, UTILIZAÇÃO E ESCOPO DE VARIÁVEIS
O **escopo** determina a região do código onde uma variável é visível. Variáveis declaradas dentro de blocos `{}` possuem escopo local e são destruídas ao final do bloco, enquanto variáveis globais (declaradas fora de funções) persistem durante toda a execução. Dominar o escopo é vital para evitar conflitos de nomes e bugs de memória.
- Fonte de referência: [Escopo e Visibilidade em C](https://learn.microsoft.com/pt-br/cpp/c-language/scope-and-visibility?view=msvc-170).

### 3.4. OPERADORES ARITMÉTICOS, RELACIONAIS E LÓGICOS
Os **operadores** permitem a manipulação de dados e a avaliação de condições. Operadores aritméticos (`+`, `-`, `*`, `/`, `%`), relacionais (`>`, `<`, `==`) e lógicos (`&&`, `||`, `!`) formam a base para a tomada de decisões algorítmicas.

---

## 4. CONTROLE DE FLUXO E ESTRUTURAS DE REPETIÇÃO
### 4.1. ESTRUTURAS CONDICIONAIS (`IF`, `ELSE`, `SWITCH`)
As estruturas condicionais permitem que o programa altere seu fluxo de execução com base em avaliações booleanas. O uso correto de **`if-else`** para bifurcações simples e **`switch`** para múltiplas escolhas discretas é essencial para a lógica de negócios do software.
- Fonte de referência: [Estruturas Condicionais em C](https://www.cprogressivo.net/p/estruturas-condicionais.html).

### 4.2. ESTRUTURAS DE REPETIÇÃO (`FOR`, `WHILE`, `DO-WHILE`)
Laços de repetição automatizam tarefas iterativas. O **`for`** é ideal quando o número de iterações é conhecido, enquanto o **`while`** e **`do-while`** são utilizados quando a repetição depende de uma condição dinâmica avaliada em tempo de execução.

---

## 5. ESTRUTURAS DE DADOS E MODULARIZAÇÃO *(Tópicos Essenciais Adicionados)*
### 5.1. VETORES E MATRIZES (ARRAYS)
Um curso técnico de 40h não está completo sem a introdução a **estruturas de dados homogêneas**. Vetores (arrays unidimensionais) e matrizes (bidimensionais) permitem armazenar e processar coleções de dados do mesmo tipo sob um único nome de variável, sendo pré-requisito para qualquer algoritmo de busca ou ordenação.
- Fonte de referência: [Vetores e Matrizes em C](https://www.cprogressivo.net/p/vetores-e-matrizes.html).

### 5.2. CRIAÇÃO E CHAMADA DE FUNÇÕES (MODULARIZAÇÃO)
A decomposição de problemas complexos em **funções** menores e reutilizáveis é o cerne da programação estruturada. Ensinar a declarar, chamar e passar parâmetros para funções (incluindo a diferença entre passagem por valor e por referência) eleva a qualidade do código produzido pelo aluno.
- Fonte de referência: [Funções e Modularização em C](https://www.inf.pucrs.br/~pinho/TEP/topico06/topico06.html).

---

## 6. TÓPICOS COMPLEMENTARES E BOAS PRÁTICAS
### 6.1. VARIÁVEIS ESTÁTICAS E TEMPO DE VIDA *(Ajuste Conceitual)*
Na linguagem C, o termo "atributos estáticos" da ementa original deve ser reinterpretado como **variáveis estáticas** (usando o modificador `static`). Diferente da POO, onde um atributo estático pertence à classe, em C, uma variável local `static` mantém seu valor entre as chamadas da função, alterando seu tempo de vida, mas não seu escopo de visibilidade.
- Fonte de referência: [Especificador `static` em C](https://en.cppreference.com/w/c/language/storage_duration).

### 6.2. DEPURAÇÃO (DEBUGGING) E COMENTÁRIOS NO CÓDIGO *(Tópico Essencial Adicionado)*
A capacidade de identificar e corrigir erros utilizando ferramentas de **depuração** (breakpoints, inspeção de variáveis) e a prática de escrever **comentários** claros e código legível são competências profissionais tão importantes quanto a sintaxe da linguagem em si.
