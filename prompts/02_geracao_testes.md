# 🧪 Prompt Mestre: Geração de Testes Unitários

## 🎯 Quando usar
Quando você escreveu uma função ou classe e precisa criar testes unitários para garantir que ela funciona corretamente, incluindo casos de borda (edge cases) que você não pensou.

---

## 📋 Template

**[INÍCIO DO PROMPT]**

# Persona
Aja como um Engenheiro de Qualidade de Software (QA) sênior, especialista em testes unitários e TDD (Test-Driven Development) na linguagem [LINGUAGEM, ex: Python com pytest, Java com JUnit, JavaScript com Jest].

# Contexto
Escrevi a função/classe abaixo e preciso de uma suíte de testes unitários completa que cubra:
- Casos felizes (happy path)
- Casos de borda (edge cases)
- Casos de erro (error cases)
- Casos de limite (boundary cases)

# Tarefa
Gere testes unitários completos para o código fornecido, seguindo estas diretrizes:

1. **Identifique os Casos de Teste:** Liste todos os cenários que devem ser testados, organizados por categoria:
   - ✅ Casos válidos (entrada normal)
   - ⚠️ Casos de borda (valores mínimos, máximos, vazios, nulos)
   - ❌ Casos de erro (entradas inválidas, exceções esperadas)
   - 🔢 Casos de limite (ex: 0, -1, MAX_INT, string vazia)

2. **Escreva os Testes:** Para cada caso, crie um teste unitário seguindo o padrão **AAA** (Arrange, Act, Assert):
   - **Arrange:** Preparar os dados de entrada
   - **Act:** Executar a função/método
   - **Assert:** Verificar o resultado esperado

3. **Nomeie os Testes Claramente:** Use nomes descritivos como `test_deve_retornar_erro_quando_idade_for_negativa`.

# Regras e Restrições
1. Use o framework de testes padrão da linguagem ([FRAMEWORK, ex: pytest, JUnit 5, Jest]).
2. Cada teste deve ser **independente** — não dependa da ordem de execução.
3. Use **mocks** quando a função depender de recursos externos (banco de dados, API, arquivo).
4. Teste **comportamento, não implementação** — não teste detalhes internos da função.
5. Inclua comentários explicando o que cada teste verifica.
6. Se a função tiver múltiplos parâmetros, considere usar **testes parametrizados** para cobrir combinações.

# Formato de Saída
```
## 📋 Casos de Teste Identificados
1. [Categoria] Descrição do caso
2. [Categoria] Descrição do caso
...

## 💻 Código dos Testes
[CODIGO DOS TESTES AQUI]

## 🚀 Como Executar
[COMANDO PARA RODAR OS TESTES]

## 📊 Cobertura Esperada
- Happy path: X%
- Edge cases: X%
- Error cases: X%
```

# Entrada de Dados
Aqui está o código que precisa ser testado:

```[LINGUAGEM]
[INSIRA SUA FUNÇÃO OU CLASSE AQUI]
```

**[FIM DO PROMPT]**

---

## 💡 Exemplo de Uso

**Entrada do aluno:**
```python
def dividir(a, b):
    return a / b
```

**Saída esperada da IA:**
```python
import pytest

def test_deve_dividir_dois_numeros_positivos():
    assert dividir(10, 2) == 5

def test_deve_dividir_numeros_negativos():
    assert dividir(-10, 2) == -5

def test_deve_retornar_float_quando_divisao_nao_exata():
    assert dividir(7, 2) == 3.5

def test_deve_lancar_erro_ao_dividir_por_zero():
    with pytest.raises(ZeroDivisionError):
        dividir(10, 0)

def test_deve_funcionar_com_numeros_decimais():
    assert dividir(7.5, 2.5) == 3.0

def test_deve_funcionar_com_zero_no_numerador():
    assert dividir(0, 5) == 0
```

---

## ⚠️ Dicas Importantes

- **Peça para a IA pensar em casos que você não pensou:** Adicione ao prompt: *"Inclua casos de borda que um desenvolvedor júnior provavelmente esqueceria."*
- **Testes de integração são diferentes:** Este prompt é para testes unitários. Para testes de integração (com banco de dados, APIs), use outro prompt.
- **Cobertura ≠ Qualidade:** 100% de cobertura não significa que os testes são bons. Testes mal escritos podem passar e ainda assim ter bugs.
- **Refatore os testes também:** Se a IA gerar testes repetitivos, peça para ela usar fixtures (pytest) ou setUp/tearDown (JUnit).
