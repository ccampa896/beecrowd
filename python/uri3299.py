n = list(input())
ok = True
for i in range((len(n)-1)):
    if n[i] == '1':
        if n[i+1] == '3':
            n = ''.join(n)
            n = int(n)
            print('%d es de Mala Suerte' % n)
            ok = False
            break
if ok:
    n = ''.join(n)
    n = int(n)
    print('%d NO es de Mala Suerte' % n)