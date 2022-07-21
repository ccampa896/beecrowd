qtd = int(input())


for teste in range(1, qtd+1):
    hora, minutos, porta = input().split()
    hora = int(hora)
    minutos = int(minutos)
    porta = int(porta)
    if porta == 1:
        str = 'A porta abriu!'
    else: 
        str = 'A porta fechou!'
    print('%02d:%02d - ' % (hora, minutos) + str)
