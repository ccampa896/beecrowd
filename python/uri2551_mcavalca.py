while True:
    try:
        n = int(input())
        treino = []
        recorde = []
        while n:
            n -= 1
            aux = input().split()
            if aux == []:
                continue
            else:
                aux1 = int(aux[0])
                aux2 = int(aux[1])
                treino.append([aux1, aux2])
                if len(treino) == 1:
                    media = treino[0][1]/treino[0][0]
                    recorde.append(1)
                else:
                    if treino[-1][1] / treino[-1][0] > media:
                        media = treino[-1][1] / treino[-1][0]
                        recorde.append(1)
                    else:
                        recorde.append(0)
        for i in range(len(recorde)):
            if recorde[i] == 1:
                print(i + 1)
    except EOFError:
        break