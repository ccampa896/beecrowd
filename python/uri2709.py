while True:
    try:
        qtd = input()
        if qtd == '':
            continue
        else:
            qtd = int(qtd)
        moedas = []
        for i in range(qtd):
            moedas.append(int(input()))
        salto = int(input())
        soma = 0
        for i in range((qtd-1), -1, -salto):
            soma += moedas[i]
        cont = 0
        for i in range(1, (soma+1)):
            if soma % i == 0:
                cont += 1
        if cont == 2:
            print("You’re a coastal aircraft, Robbie, a large silver aircraft.")
        else:
            print("Bad boy! I’ll hit you.")
        moedas.clear()
    except EOFError:
        break
