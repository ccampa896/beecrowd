from sys import stdin

for line in stdin:
    if line == '':
        break
    atributos = int(line)
    cartas = input().split()
    qtd_marcos = int(cartas[0])
    qtd_leo = int(cartas[1])
    baralho_m = []
    baralho_l = []
    carta = []
    for i in range(qtd_marcos):
        dados = input().split()
        for i in range(atributos):
            valor = int(dados[i])
            carta.append(valor)
            copia = carta.copy()
        baralho_m.append(copia)
        carta.clear()
    for i in range(qtd_leo):
        dados = input().split()
        for i in range(atributos):
            valor = int(dados[i])
            carta.append(valor)
            copia = carta.copy()
        baralho_l.append(copia)
        carta.clear()
    escolha = input().split()
    m = int(escolha[0])
    l = int(escolha[1])
    escolha_m = m - 1
    escolha_l = l - 1
    s = int(input())
    sorte = s - 1
    if baralho_m[escolha_m][sorte] > baralho_l[escolha_l][sorte]:
        print('Marcos')
    elif baralho_l[escolha_l][sorte] > baralho_m[escolha_m][sorte]:
        print('Leonardo')
    else:
        print('Empate')
    