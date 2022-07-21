while True:
    try: 
        fala = input()
        if fala == 'esquerda':
            print('ingles')
        elif fala == 'direita':
            print('frances')
        elif fala == 'nenhuma':
            print('portugues')
        elif fala == 'as duas':
            print('caiu')
    except EOFError:
        break