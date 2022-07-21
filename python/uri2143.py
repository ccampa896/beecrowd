while True:
    vezes = int(input())
    if vezes == 0:
        break
    for i in range(vezes):
        pedidos = 0
        pessoas = int(input())
        se_par = pessoas - 2
        if se_par % 2 == 0:
            pedidos += (se_par * 2) + 2
        else:
            se_impar = pessoas - 1
            pedidos += (se_impar * 2) + 1
        print(pedidos)