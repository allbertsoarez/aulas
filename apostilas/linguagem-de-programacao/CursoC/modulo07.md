# TIPOS DE DADOS DEFINIDOS PELO USUÁRIO

## 1. STRUCTS (REGISTROS)

### 1.1 - O que é uma Struct? (Agrupando dados heterogêneos)
Na matemática, é comum trabalharmos com tuplas ou vetores que agrupam informações de naturezas distintas (ex: um ponto no espaço 3D com coordenadas $x, y, z$, ou o registro de um aluno com nome, idade e nota). Em C, os arrays que vimos no Módulo 5 só guardam dados do **mesmo tipo**. Para agrupar dados de tipos diferentes sob um único "nome" lógico, usamos a `struct` (structure).

### 1.2 - Declaração e Inicialização
A sintaxe para declarar uma `struct` exige a palavra-chave `struct`, seguida do nome da estrutura e dos seus membros entre chaves.

```c
#include <stdio.h>

// Declaração da struct
struct Ponto {
    float x;
    float y;
};

int main() {
    // Inicializando na declaração
    struct Ponto p1 = {3.5, 7.2};
    
    // Inicializando membro a membro
    struct Ponto p2;
    p2.x = 1.0;
    p2.y = 4.0;
    
    printf("P1: (%.1f, %.1f)\n", p1.x, p1.y);
    printf("P2: (%.1f, %.1f)\n", p2.x, p2.y);
    
    return 0;
}
```

### 1.3 - Acessando membros (o operador [`.`](https://en.cppreference.com/w/c/language/operator_member_access))
Para acessar ou modificar um campo específico de uma `struct`, usamos o operador ponto (`.`). É como dizer: "Dada a variável `p1`, acesse o seu membro `x`".

### 1.4 - Structs e Funções (Passagem por valor)
Como vimos no Módulo 4, o C passa parâmetros por valor (cópia). Quando você passa uma `struct` para uma função, o C **copia a struct inteira** (todos os seus bytes) para a pilha de execução. Para structs pequenas (como o `Ponto` acima), isso é irrelevante. Para structs gigantes, isso é péssimo para a performance. Nesses casos, passamos um **ponteiro** para a struct.

### 1.5 - O operador seta ([`->`](https://en.cppreference.com/w/c/language/operator_member_access)) para ponteiros de structs
Quando temos um ponteiro para uma `struct`, poderíamos acessar os membros fazendo `(*p).x`. Porém, como isso é visualmente poluído e propenso a erros de precedência, o C criou o operador seta (`->`). A expressão `p->x` é apenas um "açúcar sintático" para `(*p).x`.

```c
#include <stdio.h>

struct Ponto {
    float x;
    float y;
};

// Função que recebe um PONTEIRO para a struct (mais eficiente)
void imprimir_ponto(struct Ponto *p) {
    // Usando o operador ->
    printf("Coordenadas: (%.1f, %.1f)\n", p->x, p->y);
}

int main() {
    struct Ponto meu_ponto = {10.0, 20.0};
    
    // Passamos o ENDEREÇO da struct
    imprimir_ponto(&meu_ponto); 
    
    return 0;
}
```

---

## 2. UNIONS (UNIÕES)

### 2.1 - O que é uma Union? (Compartilhando memória)
**[CONCEITO FUNDAMENTAL]** Enquanto na `struct` cada membro tem o seu próprio espaço na memória (um ao lado do outro), na `union` **todos os membros compartilham o mesmo espaço de memória**. 

Pense na `struct` como um armário com várias gavetas separadas. A `union` é uma gaveta única onde você guarda OU um objeto grande OU um objeto pequeno, mas nunca os dois ao mesmo tempo. O tamanho da `union` na memória será sempre o tamanho do seu **maior membro**.

### 2.2 - Struct vs Union na memória
Vamos provar isso usando o operador `sizeof` que aprendemos no Módulo 2:

```c
#include <stdio.h>

struct MinhaStruct {
    char letra;   // 1 byte
    int numero;   // 4 bytes
    float decimal;// 4 bytes
};

union MinhaUnion {
    char letra;   // 1 byte
    int numero;   // 4 bytes
    float decimal;// 4 bytes
};

int main() {
    printf("Tamanho da Struct: %zu bytes\n", sizeof(struct MinhaStruct));
    printf("Tamanho da Union: %zu bytes\n", sizeof(union MinhaUnion));
    
    return 0;
}
```
*Saída esperada: A Struct terá cerca de 12 bytes (devido ao alinhamento de memória), enquanto a Union terá apenas 4 bytes (o tamanho do maior membro).*

### 2.3 - Casos de uso reais
Unions são raramente usadas em programação de alto nível, mas são **essenciais** em sistemas embarcados, drivers e redes, onde a memória é escassa e precisamos criar "variantes" (ex: um pacote de dados que pode ser OU um inteiro OU um float, dependendo de uma flag).

---

## 3. ENUMS (ENUMERAÇÕES)

### 3.1 - O que é um Enum? (Deixando o código legível)
Usar "números mágicos" no código (ex: `0` para vermelho, `1` para verde, `2` para azul) é uma péssima prática, pois destrói a legibilidade. O `enum` permite criar um tipo de dado com nomes amigáveis (identificadores) que, por baixo do capô, são apenas inteiros.

```c
#include <stdio.h>

// Definindo a enumeração
enum Cor {
    VERMELHO, // Vale 0
    VERDE,    // Vale 1
    AZUL      // Vale 2
};

int main() {
    enum Cor cor_favorita = VERDE;
    
    if (cor_favorita == VERDE) {
        printf("Sua cor eh verde!\n");
    }
    
    printf("O valor inteiro de VERDE eh: %d\n", cor_favorita);
    
    return 0;
}
```

### 3.2 - Valores inteiros subjacentes
Você pode atribuir valores específicos aos membros do `enum`. Se você atribuir um valor a um membro, os seguintes serão incrementados automaticamente a partir dele.

```c
enum Status {
    ERRO = 1,
    SUCESSO,    // Vale 2
    PENDENTE    // Vale 3
};
```

---

## 4. O QUALIFICADOR `TYPEDEF`

### 4.1 - Criando apelidos para tipos
O `typedef` não cria um tipo novo, mas sim um **apelido** (sinônimo) para um tipo existente. Isso é muito útil para simplificar sintaxes longas ou tornar o código mais legível.

```c
#include <stdio.h>

typedef unsigned long ulong; // ulong agora é um apelido para unsigned long

int main() {
    ulong numero_grande = 1000000;
    printf("%lu\n", numero_grande);
    return 0;
}
```

### 4.2 - O padrão ouro: `typedef` com `struct`
A combinação de `typedef` com `struct` é onipresente em códigos C profissionais. Ela elimina a necessidade de escrever a palavra `struct` toda vez que você declara uma variável.

```c
#include <stdio.h>

// Sem typedef:
// struct Ponto { float x; float y; };
// struct Ponto p1; // Precisa da palavra 'struct'

// Com typedef:
typedef struct {
    float x;
    float y;
} Ponto; // 'Ponto' agora é um tipo de dado por si só!

int main() {
    Ponto p1 = {5.0, 10.0}; // Muito mais limpo!
    printf("P1: (%.1f, %.1f)\n", p1.x, p1.y);
    return 0;
}
```

---

## 5. RECURSOS E PRÓXIMOS PASSOS

### Leitura Complementar
- 📖 [Struct (cppreference)](https://en.cppreference.com/w/c/language/struct)
- 📖 [Union (cppreference)](https://en.cppreference.com/w/c/language/union)
- 📖 [Enum (cppreference)](https://en.cppreference.com/w/c/language/enum)
- 📖 [Typedef (cppreference)](https://en.cppreference.com/w/c/language/typedef)

### 🚀 DESAFIO PRÁTICO DO MÓDULO 7
**Objetivo:** Criar um "Calculador de Áreas de Formas Geométricas" usando Structs.

**Requisitos:**
1. Crie uma `struct Retangulo` com os campos `base` e `altura` (tipo `float`).
2. Crie uma `struct Circulo` com o campo `raio` (tipo `float`).
3. Crie duas funções: `float area_retangulo(struct Retangulo r)` e `float area_circulo(struct Circulo c)`. (Use `PI = 3.14159` para o círculo).
4. No `main`, instancie um retângulo e um círculo, inicialize seus valores e chame as funções, imprimindo os resultados formatados com 2 casas decimais.

**Exemplo de Saída Esperada:**
```text
Area do Retangulo (base 5.0, altura 4.0): 20.00
Area do Circulo (raio 3.0): 28.27
```

*Dica: Lembre-se de usar o operador `.` para acessar os membros da struct dentro das funções de cálculo.*

### 🔗 [Retornar ao Sumário](SUMARIO.md)
