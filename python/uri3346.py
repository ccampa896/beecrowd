t1, t2 = map(float, input().split())
t1 = t1 / 100
t2 = t2 / 100

res = 1 + t1
var = res * t2
res = res + var
res = (res - 1) * 100


print('%.6f' % res)
