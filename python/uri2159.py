import math

valor = int(input())

menor = valor / math.log(valor)
maior = 1.25506 * (valor / math.log(valor))

print('%.1f %.1f' % (menor, maior))