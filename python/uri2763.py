cpf = input()
pedaco = cpf.split('.')
resto = pedaco[2].split('-')

print(pedaco[0])
print(pedaco[1])
print(resto[0])
print(resto[1])