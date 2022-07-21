from sys import stdin

cs = 0
qtd_cs = 0

for line in stdin:
    if line == '':
        break
    dados = line.split()
    qtd = int(dados[0])
    id = int(dados[1])

    for i in range(qtd):
        dado = input().split()
        aux = int(dado[0])
        aux1 = int(dado[1])
        if aux == id:
            if aux1 == cs:
                qtd_cs += 1
    print(qtd_cs)
    qtd_cs = 0
    