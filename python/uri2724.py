qtd = int(input())
for i in range(qtd):
    sim = True
    danger = int(input())
    perigo = []
    for w in range(danger):
        perigo.append(input())
    tent = int(input())
    exp = []
    for j in range(tent):
        exp.append(input())
    for y in range(tent):
        for z in range(danger):
            if perigo[z] in exp[y]:
                sim = False
        if sim:
                print('Prossiga')
        else:
                print('Abortar')
                sim = True
    print()
    perigo.clear()
    exp.clear()    