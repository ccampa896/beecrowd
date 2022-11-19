while True:
    try:
        n = int(input())
        if n < 100:
            print(1)
        elif n % 100 == 0:
            s = str(n)
            l = list(s)
            s = ''.join(l[:-2])
            print(s)
        else:
            s = str(n)
            l = list(s)
            s = ''.join(l[:-2])
            n = int(s)
            n = n + 1
            print(n)
    except EOFError:
        break