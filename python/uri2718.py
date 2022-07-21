qtd = int(input())
max = 0
cont = 0
for i in range(qtd):
    lam = int(input())
    binario = format(lam, "b")
    tam = len(binario)
    for j in range(tam):
        if binario[j] == '1':
            cont += 1
            if cont > max:
                max = cont
        else:
            cont = 0
    print(max)
    max = 0
    cont = 0
    