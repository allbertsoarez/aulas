# Python é dinamicamente tipado (não precisa declarar o tipo)
idade = 25
altura = 1.75
inicial = 'A'
nome = "Python"
eh_legal = True

print(f"Idade: {idade} (Tipo: {type(idade).__name__})")
print(f"Altura: {altura:.2f} (Tipo: {type(altura).__name__})")
print(f"Inicial: {inicial} (Tipo: {type(inicial).__name__})")
print(f"Nome: {nome} (Tipo: {type(nome).__name__})")
print(f"É legal? {eh_legal} (Tipo: {type(eh_legal).__name__})")