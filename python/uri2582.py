musicas = ['PROXYCITY', 'P.Y.N.G.', 'DNSUEY!', 'SERVERS', 'HOST!',
           'CRIPTONIZE', 'OFFLINE DAY', 'SALT', 'ANSWER!', 'RAR?', 
           'WIFI ANTENNAS']

qtd = int(input())
for i in range(qtd):
    valores = input().split()
    var = int(valores[0])
    var2 = int(valores[1])
    esc = var + var2
    print(musicas[esc])