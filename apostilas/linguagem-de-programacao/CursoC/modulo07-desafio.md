# 🚀 DESAFIO PRÁTICO DO MÓDULO 7

## 🎯 Objetivo
Criar um "Calculador de Áreas de Formas Geométricas" utilizando `structs` e `typedef`.

## 📋 Requisitos
1. Crie uma `struct Retangulo` com os campos `base` e `altura` (tipo `float`).
2. Crie uma `struct Circulo` com o campo `raio` (tipo `float`).
3. Crie duas funções que recebam **ponteiros** para essas structs e retornem a área:
   - `float area_retangulo(Retangulo *r)`
   - `float area_circulo(Circulo *c)` (Use `PI = 3.14159`).
4. No `main`, instancie as structs, inicialize seus valores e chame as funções, imprimindo os resultados com 2 casas decimais.

## 🖥️ Exemplo de Saída Esperada
```text
Area do Retangulo (base 5.0, altura 4.0): 20.00
Area do Circulo (raio 3.0): 28.27
```

## 💡 Dicas
- Ao receber um ponteiro de struct na função, use o operador seta `->` para acessar os membros (ex: `r->base`).

---
🔗 [Retornar ao Sumário](SUMARIO.md)
