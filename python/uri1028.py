import math

qtd = int(input())

for n in range(qtd):
    numeros = input()
    vetor = numeros.split()
    a = int(vetor[0])
    b = int(vetor[1])
    MDC = math.gcd(a, b)  # maior divisor comum
    print(MDC)