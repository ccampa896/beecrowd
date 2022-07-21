while True:
    try:
        ang = int(input())
        if(ang >= 0 and ang < 90) or ang == 360:
            print('Bom Dia!!')
        elif ang >= 90 and ang < 180:
            print('Boa Tarde!!')
        elif ang >= 180 and ang < 270:
            print('Boa Noite!!')
        elif ang >= 270 and ang < 360:
            print('De Madrugada!!')
    except EOFError:
        break