qtd = int(input())

for i in range(qtd):
    d = list(map(list, input().split()))
    t = len(d[1])
    if d[0][-t:] == d[1]:
        print('encaixa')
    else:
        print('nao encaixa')