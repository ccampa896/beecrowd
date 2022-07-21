import math 
from sys import stdin

for line in stdin:
    if line == '':
        break
    vetor = line.split()
    a = int(vetor[0])
    b = int(vetor[1])
    soma = math.factorial(a) + math.factorial(b)
    print(soma)