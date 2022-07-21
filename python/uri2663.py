qtd = int(input())
minimo = int(input())
total = []
cont = 0
aux = 0
for i in range(qtd):
    nota = int(input())
    total.append(nota)
total.sort()
maximo = max(total)
while cont < minimo:
    while maximo == total[-1]:
        aux += 1
        total.pop()
        if total:
            continue
        else:
            break
    cont += aux
    aux = 0
    if total:
        maximo = max(total)
    else:
        break
print(cont)