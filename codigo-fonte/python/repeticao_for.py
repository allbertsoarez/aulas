numero = int(input("Digite um número para a tabuada: "))

print(f"\nTabuada do {numero}:")
# O range vai de 1 até 10 (o 11 é exclusivo)
for i in range(1, 11):
    print(f"{numero} x {i} = {numero * i}")