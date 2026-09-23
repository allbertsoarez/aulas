nota = float(input("Digite a nota do aluno (0 a 100): "))

if nota >= 70:
    print("Aluno APROVADO!")
elif nota >= 50:
    print("Aluno em RECUPERAÇÃO.")
else:
    print("Aluno REPROVADO.")