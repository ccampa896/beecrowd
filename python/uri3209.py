qtd = int(input())
for i in range(qtd):
    t = map(int, input().split())
    t = list(t)
    t.pop(0)
    a = 0
    for i in range(len(t)):
        if i == (len(t) - 1):
            a = a + t[i]
        else:
            a = a + t[i] - 1
    print(a)