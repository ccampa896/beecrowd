qtd = int(input())
t = 0
r = [0, 0, 0, 0]
for i in range(qtd):
    d = input().split()
    if d[1] == 'bonecos':
        p = int(d[2])
        t = t + (p // 8)
        r[0] = r[0] + (p % 8)
    elif d[1] == 'arquitetos':
        p = int(d[2])
        t = t + (p // 4)
        r[1] = r[1] + (p % 4)
    elif d[1] == 'musicos':
        p = int(d[2])
        t = t + (p // 6)
        r[2] = r[2] + (p % 6)
    else:
        p = int(d[2])
        t = t + (p // 12)
        r[3] = r[3] + (p % 12)
for i in range(len(r)):
    if i == 0:
        t = t + (r[i] // 8)
    elif i == 1:
        t = t + (r[i] // 4)
    elif i == 2:
        t = t + (r[i] // 6)
    else:
        t = t + (r[i] // 12)
print(t)