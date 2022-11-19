while True:
    try:
        f = []
        for i in range(3):
            f.append(input())
        print(f[0] + f[1] + f[2])
        print(f[1] + f[2] + f[0])
        print(f[2] + f[0] + f[1])
        print(f[0][:10] + f[1][:10] + f[2][:10])
    except EOFError:
        break