

cont = 1

while True:
    try:
        sub = input()
        str1 = input()

        if str1.find(sub) == -1:
            print(f'Caso #{cont}')
            print('Nao existe subsequencia')
            cont += 1
        else:
            print(f'Caso #{cont}')
            print(f'Qtd.Subsequencias: {str1.count(sub)}')
            inicio = str1.find(sub)
            while inicio != -1:
                fim = str1.find(sub, inicio)
                inicio = str1.find(sub, (fim + len(sub)))  
            print(f'Pos: {fim+1}')
            cont += 1

    except EOFError:
        break

