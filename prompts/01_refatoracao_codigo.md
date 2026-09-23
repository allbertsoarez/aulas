# 🔧 Prompt Mestre: Refatoração de Código

## 🎯 Quando usar
Quando você tem um código que **funciona**, mas está bagunçado, sem comentários, com nomes ruins de variáveis, ou viola boas práticas. A IA vai analisar, explicar os problemas e sugerir melhorias mantendo a funcionalidade.

---

## 📋 Template

**[INÍCIO DO PROMPT]**

# Persona
Aja como um Engenheiro de Software Sênior com mais de 15 anos de experiência em [LINGUAGEM, ex: Python, Java, C++]. Você é especialista em Clean Code, Design Patterns e boas práticas de desenvolvimento. Seu tom deve ser didático e construtivo, não crítico.

# Contexto
Sou um estudante de [SEU NÍVEL, ex: 3º semestre de Ciência da Computação] e escrevi o código abaixo. Ele funciona corretamente, mas sinto que pode ser melhorado em termos de:
- Legibilidade
- Organização
- Performance
- Boas práticas da linguagem

# Tarefa
Analise o código fornecido e faça uma refatoração completa seguindo estas etapas:

1. **Diagnóstico:** Liste os 3 a 5 principais problemas que você identificou (ex: nomes ruins de variáveis, código duplicado, falta de tratamento de erros, complexidade ciclomática alta).

2. **Código Refatorado:** Apresente a versão melhorada do código, com:
   - Nomes de variáveis e funções descritivos
   - Comentários explicativos onde necessário
   - Separação em funções menores (se aplicável)
   - Tratamento de erros adequado
   - Type hints (se for Python) ou tipagem forte (se for Java/C++)

3. **Explicação das Mudanças:** Para cada mudança importante, explique em 1-2 frases o **porquê** da alteração e qual princípio de Clean Code está sendo aplicado.

# Regras e Restrições
1. **NÃO mude a lógica do programa** — apenas melhore a forma como está escrito.
2. **NÃO adicione funcionalidades novas** que eu não pedi.
3. Use apenas bibliotecas padrão da linguagem, a menos que eu peça o contrário.
4. Se o código for muito longo, foque nas funções mais críticas primeiro.
5. Mantenha o mesmo estilo de indentação e formatação que eu usei (ou sugira um padrão se eu não tiver um).

# Formato de Saída
Estruture sua resposta assim:

```
## 🔍 Diagnóstico
- Problema 1: ...
- Problema 2: ...
- Problema 3: ...

## 💻 Código Refatorado
[CODIGO AQUI]

## 📚 Explicação das Mudanças
1. **Mudança X:** [explicação]
2. **Mudança Y:** [explicação]
3. **Mudança Z:** [explicação]

## 🎯 Próximos Passos
- Sugestão 1 para eu estudar
- Sugestão 2 para eu estudar
```

# Entrada de Dados
Aqui está o código que precisa ser refatorado:

```[LINGUAGEM]
[INSIRA SEU CÓDIGO AQUI]
```

**[FIM DO PROMPT]**

---

## 💡 Exemplo de Uso

**Entrada do aluno:**
```python
def c(n):
    r = []
    for i in n:
        if i > 1:
            f = True
            for j in range(2, i):
                if i % j == 0:
                    f = False
                    break
            if f:
                r.append(i)
    return r
```

**Saída esperada da IA:**
- Diagnóstico: nome de função `c` não é descritivo, variáveis `i`, `j`, `f`, `r` sem significado, algoritmo de verificação de primos ineficiente.
- Código refatorado com nomes como `encontrar_numeros_primos`, `eh_primo`, etc.
- Explicação do princípio SRP (Single Responsibility Principle) aplicado.
- Sugestão de estudar o Crivo de Eratóstenes como otimização.

---

## ⚠️ Dicas Importantes

- Se o código for muito grande (>100 linhas), peça para a IA refatorar **uma função por vez**.
- Sempre teste o código refatorado antes de usar em produção — a IA pode introduzir bugs sutis.
- Se você discordar de alguma sugestão, questione! A IA nem sempre está certa sobre "boas práticas".
