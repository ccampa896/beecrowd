falta = int(input())
total = input().split()
pri = int(total[0])
seg = int(total[1])

if falta < (pri + seg):
    print('Deixa para amanha!')
else:
    print('Farei hoje!')