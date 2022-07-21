import math
while True:
    try:
        testes = input()
        dados_stg = input().split()
        tam_stg = len(dados_stg)
        dados = []
        for x in range(tam_stg):
            dados.append(float(dados_stg[x]))
        tam = len(dados)
        total = 0
        for i in range(tam):
            total = total + dados[i]
        media = total / tam
        lista = []
        for j in range(tam):
            lista.append((dados[j] - media)**2)
        total_2 = sum(lista) / (tam - 1)
        res = math.sqrt(total_2)
        print('%.5f' % res)
    except EOFError:
        break