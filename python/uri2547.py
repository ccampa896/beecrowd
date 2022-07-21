from sys import stdin
cont = 0

for line in stdin:
    if line == '':
        break
    valores = line.split()
    qtd = int(valores[0])
    min = int(valores[1])
    max = int(valores[2])
    for i in range(qtd):
        altura = int(input())
        if (altura <= max) and (altura >= min):
            cont += 1
    print(cont)
    cont = 0