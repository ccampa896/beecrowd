while True:
    try:
        c = []
        for i in range(3):
            c.append(input())
        print(f'A = {c[0]}, B = {c[1]}, C = {c[2]}')
        print(f'A = {c[1]}, B = {c[2]}, C = {c[0]}')
        print(f'A = {c[2]}, B = {c[0]}, C = {c[1]}')
    except EOFError:
        break