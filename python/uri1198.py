while True:
    try:
        e = list(map(int, input().split()))
        d = abs(e[1] - e[0])
        print(d)
    except EOFError:
        break
