qtd = int(input())
for i in range(qtd):
    c = input()
    if c == 'P=NP':
        print('skipped')
    else:
        t = c.split('+')
        r = int(t[0]) + int(t[1])
        print(r)