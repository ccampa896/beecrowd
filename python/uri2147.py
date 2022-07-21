n = int(input())

for vezes in range(n):
    canta = input()
    tamanho = len(canta)
    tempo = tamanho * 0.01
    print('%.2f' % tempo)