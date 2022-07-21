medidas = input()
vetor = input()
paisagem = vetor.split()
tam = len(paisagem)
alternado = True
menor = False
maior = False

for i in range(tam):
    paisagem[i] = int(paisagem[i])

for i in range(tam-1):
    if paisagem[i] == paisagem[i+1]:
        alternado = False
    elif paisagem[i] < paisagem[i+1]:
        if menor:
            alternado = False
        menor = True
        maior = False
    elif paisagem[i] > paisagem[i+1]:
        if maior:
            alternado = False
        maior = True
        menor = False


if alternado:
    print(1)
else:
    print(0)