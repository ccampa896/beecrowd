while True:
    try:
        dados = input().split()
        qtd = int(dados[0])
        datas = int(dados[1])
        primeiro = True
        nenhum = True
        for i in range(datas):
            inf = input().split()
            sim = True
            for j in range(1,(qtd+1)):
                if inf[j] != '1':
                    sim = False
            if sim:
                if primeiro:
                    print(inf[0])
                    primeiro = False
                    nenhum = False
        if nenhum:
            print('Pizza antes de FdI')
    except EOFError:
        break