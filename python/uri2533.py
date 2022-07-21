from sys import stdin

total_soma = 0
total_horas = 0
soma1 = 0
media = 0

for line in stdin:
    if line == '':
        break
    vezes = int(line)
    for i in range(vezes):
        notas = input().split()
        nota = int(notas[0])
        hora = int(notas[1])
        soma1 = nota * hora
        total_soma += soma1
        total_horas += hora
    media = (total_soma) / (total_horas * 100)
    print('%.4f' % media)
    total_soma = 0
    total_horas = 0
    soma1 = 0
    media = 0