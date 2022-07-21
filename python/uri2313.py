lados = input().split()
a = int(lados[0])
b = int(lados[1])
c = int(lados[2])


if (abs(a - b) < c and c < (a + b)) and (abs(b - c) < a and a < (b + c)) and (abs(a - c) < b and b < (a + c)):
    if (a == b) and (b == c):
        print('Valido-Equilatero')
        print('Retangulo: N')
    elif (a == b) or (a == c) or (b == c):
        print('Valido-Isoceles')
        print('Retangulo: N')
    else:
        print('Valido-Escaleno')
        if (a > b) and (a > c):
            if ((a ** 2) == (b ** 2) + (c ** 2)):
                print('Retangulo: S')
            else:
                print('Retangulo: N') 
        elif (b > c) and (b > a):
            if ((b ** 2) == (a ** 2) + (c ** 2)):
                print('Retangulo: S')
            else:
                print('Retangulo: N')
        elif (c > a) and (c > b):
            if ((c ** 2) == (b ** 2) + (a ** 2)):
                print('Retangulo: S')
            else:
                print('Retangulo: N')
else:
    print('Invalido')




