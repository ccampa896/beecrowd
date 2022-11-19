while True:
    try:
        f = input().split(',')
        print(f[0])
        print(f[1])
    except EOFError:
        break