qtd = int(input())
for i in range(qtd):
    tipo = input()
    valor = input().split()
    dados = []
    for y in range(3):
        dados.append(int(valor[y]))
    if tipo == 'eye':
        x = int((0.3 * dados[0]) + (0.59 * dados[1]) + (0.11 * dados[2]))
    elif tipo == 'mean':
        x = int((dados[0] + dados[1] + dados[2]) / 3)
    elif tipo == 'max':
        x = int(max(dados))
    elif tipo == 'min':
        x = int(min(dados))
    print('Caso #%d: %d' % ((i+1), x))
    