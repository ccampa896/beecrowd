import math
n = int(input())
q = n * n

if (n % 2) == 0:
    a = q / 2
    print('%d casas brancas e %d casas pretas' % (a, a))
else:
    x = q / 2
    a = math.ceil(x)
    b = math.floor(x)
    print('%d casas brancas e %d casas pretas' % (a, b))