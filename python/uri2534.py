from sys import stdin
notas = []

for line in stdin:
    if line == '':
        break
    dados = line.split()
    qtd = int(dados[0])
    consultas = int(dados[1])
    for i in range(qtd):
        aux = int(input())
        notas.append(aux)
    notas.sort()
    notas.reverse()
    for i in range(consultas):
        aux = int(input())
        posicao = aux - 1
        print('%d' % notas[posicao])
    notas.clear()
