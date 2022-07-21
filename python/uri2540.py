from sys import stdin
sim = 0
nao = 0

for line in stdin:
    if line == '':
        break
    qtd = int(line)
    voto = input().split()
    for i in range(qtd):
        valor = int(voto[i])
        if valor == 1:
            sim += 1
        else:
            nao += 1
    aux = qtd * (2/3)
    if sim >= aux:
        print('impeachment')
    else:
        print('acusacao arquivada')
    sim = 0
    nao = 0            