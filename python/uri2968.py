import math
dados = input().split()
voltas = int(dados[0])
placas = int(dados[1]) 
cont = 1
perc = cont / 10
total = voltas * placas
while cont < 10:
    result = total * perc
    saida = math.ceil(result)
    if cont == 9:
        print(saida)
    else:
        print(f'{saida} ', end = '')
    cont = cont + 1
    perc = cont / 10