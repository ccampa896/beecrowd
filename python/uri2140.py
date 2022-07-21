preco, pago = 1, 1

while (preco != 0) and (pago != 0):
    valor = input()
    preco, pago = valor.split()
    preco = int(preco)
    pago = int(pago)
    cont = 0
    troco = pago - preco
    
    if troco >= 100:
        nota100 = troco // 100
        troco = troco - (nota100 * 100)
        if nota100 > 2:
            print('impossible')
            continue
        elif nota100 == 2:
            cont += 2
        else:
            cont += 1
    if troco >= 50:
        if cont == 2:
            print('impossible')
            continue
        nota50 = troco // 50
        troco = troco - (nota50 * 50)
        if nota50 > 2:
            print('impossible')
            continue
        elif nota50 == 2:
            cont += 2
        else:
            cont += 1
    if troco >= 20:
        if cont == 2:
            print('impossible')
            continue
        nota20 = troco // 20
        troco = troco - (nota20 * 20)
        if nota20 > 2:
            print('impossible')
            continue
        elif nota20 == 2:
            cont += 2
        else:
            cont += 1
    if troco >= 10:
        if cont == 2:
            print('impossible')
            continue
        nota10 = troco // 10
        troco = troco - (nota10 * 10)
        if nota10 > 2:
            print('impossible')
            continue
        elif nota10 == 2:
            cont += 2
        else:
            cont += 1
    if troco >= 5:
        if cont == 2:
            print('impossible')
            continue
        nota5 = troco // 5
        troco = troco - (nota5 * 5)
        if nota50 > 2:
            print('impossible')
            continue
        elif nota5 == 2:
            cont += 2
        else:
            cont += 1
    if troco >= 2:
        if cont == 2:
            print('impossible')
            continue
        nota2 = troco // 2
        troco = troco - (nota2 * 2)
        if nota2 > 2:
            print('impossible')
            continue
        elif nota2 == 2:
            cont += 2
        else:
            cont += 1
    if cont == 2:
        print('possible')
        continue
    elif (preco == 0) and (pago == 0):
        break
    elif cont != 2:
        print('impossible')
