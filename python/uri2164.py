import math

def fib_fast(n):
    return (((1 + math.sqrt(5)) / 2)**n - ((1 - math.sqrt(5)) / 2)**n) / math.sqrt(5)
    
numero = int(input())

print('%.1f' % fib_fast(numero))
