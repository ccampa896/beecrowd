while True:
    try:
        d = input().split('/')
        print(d[1] + '/' + d[0] + '/' + d[2])
        print(d[2] + '/' + d[1] + '/' + d[0])
        print(d[0] + '-' + d[1] + '-' + d[2])
    except EOFError:
        break