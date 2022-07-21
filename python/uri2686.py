while True:
    try:
        hr = 0
        mn = 0
        sg = 0
        hora = 15
        minuto = 0.25
        segundo = minuto / 60
        seg = round(segundo, 6)
        ang = float(input())
        if(ang >= 0 and ang < 90) or ang == 360:
            print('Bom Dia!!')
            if ang == 0 or ang == 360:
                print('06:00:00')
            else:
                hr = ang // 15
                aux = ang - (hr * 15)
                mn = aux // minuto
                aux1 = round(aux - (mn * minuto), 3)
                sg = round(aux1 / seg)
                print('%02d:%02d:%02d' % ((hr+6), mn, sg))
        elif ang >= 90 and ang < 180:
            print('Boa Tarde!!')
            if ang == 90:
                print('12:00:00')
            else:
                hr = ang // 15
                aux = ang - (hr * 15)
                mn = aux // minuto
                aux1 = round(aux - (mn * minuto), 3)
                sg = round(aux1 / seg)
                print('%02d:%02d:%02d' % ((hr+6), mn, sg))
        elif ang >= 180 and ang < 270:
            print('Boa Noite!!')
            if ang == 180:
                print('18:00:00')
            else:
                hr = ang // 15
                aux = ang - (hr * 15)
                mn = aux // minuto
                aux1 = round(aux - (mn * minuto), 3)
                sg = round(aux1 / seg)
                print('%02d:%02d:%02d' % ((hr+6), mn, sg))
        elif ang >= 270 and ang < 360:
            print('De Madrugada!!')
            if ang == 270:
                print('00:00:00')
            else:
                hr = ang // 15
                aux = ang - (hr * 15)
                mn = aux // minuto
                aux1 = round(aux - (mn * minuto), 3)
                sg = round(aux1 / seg)
                print('%02d:%02d:%02d' % ((6-(24-hr)), mn, sg))
    except EOFError:
        break