# 1. Fundamentos da Programação Orientada a Objetos (POO)

## 1.1. Conceitos e Paradigmas de Programação
A **Programação Orientada a Objetos (POO)** é um paradigma de desenvolvimento de software que organiza o design de programas em torno de "objetos" e "dados", em vez de "ações" e "lógica" sequenciais. Diferentemente do paradigma estruturado, a POO busca modelar o software de forma mais próxima ao mundo real, promovendo **reutilização de código**, **manutenibilidade** e **escalabilidade**. Para aprofundamento teórico, consulte a [documentação oficial do Python sobre classes e orientação a objetos](https://docs.python.org/pt-br/3/tutorial/classes.html).

## 1.2. Os Quatro Pilares da Orientação a Objetos

### 1.2.1. Encapsulamento
O **encapsulamento** é o mecanismo de restringir o acesso direto a alguns dos componentes de um objeto, protegendo seus dados internos (atributos) e expondo apenas comportamentos controlados (métodos). Em Python, essa convenção de proteção é indicada pelo uso de underlines (ex: `_atributo` para protegido ou `__atributo` para privado).

### 1.2.2. Herança
A **herança** permite que uma nova classe (subclasse) derive de uma classe existente (superclasse), herdando seus atributos e métodos. Isso facilita a criação de hierarquias lógicas e a reutilização de código, evitando redundâncias e facilitando a manutenção do projeto.

### 1.2.3. Polimorfismo
O **polimorfismo** (do grego "muitas formas") é a capacidade de diferentes objetos responderem à mesma chamada de método de maneiras distintas. Isso permite que interfaces comuns sejam aplicadas a diferentes tipos de dados, aumentando a flexibilidade e a extensibilidade do sistema.

### 1.2.4. Abstração
A **abstração** consiste em expor apenas os detalhes essenciais de um objeto, ocultando sua complexidade de implementação. Em Python, isso é frequentemente alcançado por meio de [Classes de Base Abstrata (ABC)](https://docs.python.org/pt-br/3/library/abc.html), que definem contratos rigorosos que as subclasses devem obrigatoriamente implementar.

## 1.3. Prática Introdutória em Python (Foco da Aula de 50 Minutos)
*Nota Curricular:* Considerando o escopo de uma única aula de 50 minutos dentro de um curso técnico de 40h, é pedagogicamente inviável cobrir todos os tópicos em profundidade. Portanto, esta sessão foca na consolidação dos conceitos de Classe, Objeto e Coleções, servindo como alicerce para as aulas seguintes.

### 1.3.1. Criação de Projeto e Definição de Classes
A estrutura básica de uma **classe** em Python é definida pela palavra-chave `class`, contendo um método construtor `__init__` para inicializar o estado do objeto. O foco prático deve ser a modelagem de uma entidade simples (ex: classe `Aluno` com atributos como `nome` e `matricula`).

### 1.3.2. Instanciação de Objetos e Uso de Coleções
A **instanciação** é o processo de criar um objeto real a partir do molde da classe. Esses objetos podem ser armazenados e gerenciados em **coleções** (como listas ou dicionários), permitindo a iteração e o processamento em lote. Consulte o [guia oficial de estruturas de dados e coleções em Python](https://docs.python.org/pt-br/3/tutorial/datastructures.html) para referência.

## 1.4. Roteiro de Expansão para o Curso Técnico (40h)
Os tópicos abaixo complementam a ementa base e devem ser abordados nas aulas subsequentes para atingir a carga horária total e a proficiência técnica esperada, preenchendo a lacuna entre a introdução e o domínio da linguagem.

### 1.4.1. Tratamento de Exceções
O uso de blocos `try`, `except`, `else` e `finally` é essencial para garantir a robustez da aplicação, lidando graciosamente com erros em tempo de execução sem interromper o fluxo do programa. Veja o [tutorial oficial de tratamento de erros em Python](https://docs.python.org/pt-br/3/tutorial/errors.html).

### 1.4.2. Aprofundamento em Herança e Polimorfismo
Implementação prática de sobrescrita de métodos e uso da função `super()` para estender comportamentos da classe pai, aplicando polimorfismo em listas de objetos heterogêneos.

### 1.4.3. Classes e Métodos Abstratos na Prática
Desenvolvimento de interfaces obrigatórias utilizando o módulo `abc`, garantindo que subclasses implementem métodos críticos para o funcionamento do sistema, elevando a qualidade arquitetural do código.

---

*A estrutura hierárquica equilibra com excelência a teoria dos pilares da POO com a restrição de uma aula de 50 minutos, mapeando claramente o caminho para as 40h do curso. Como gancho pedagógico, inicie com a analogia de uma "fábrica de carros" (classe) e os "veículos" (objetos), desafiando os alunos a identificar quais atributos seriam encapsulados (ex: motor) versus públicos (ex: cor).*
