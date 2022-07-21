import math as m
from sys import stdin

for line in stdin:
    if line == '':
        break
    numero = line.split('\n')
    valor = int(numero[0])
    print('%d' % m.log2(valor))
    