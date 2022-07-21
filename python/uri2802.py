"""
Solução para divisão de círculo: https://www.youtube.com/watch?v=_gMRRS1wbj4

"""
import math

n = int(input())
res = 1 + math.comb(n, 2) + math.comb(n, 4)
print(res)
