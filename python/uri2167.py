qtd = int(input())
velocidade = input()
vetor = velocidade.split()

cont = 0
for n in range(qtd - 1):
    a = int(vetor[n + 1])
    b = int(vetor[n])
    if a < b:
        cont += 1
        print(cont + 1)
        break

    cont += 1
    if  cont == qtd - 1:
        print(0)



