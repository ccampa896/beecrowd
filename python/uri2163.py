tamanho = input()
vetor = tamanho.split()
linhas = int(vetor[0])
colunas = int(vetor[1])

matriz = []
for i in range(linhas):
    lin = []
    valores = input()
    vet_valores = valores.split()
    vet_int = []
    for x in range(colunas):
        vet_int.append(int(vet_valores[x]))
    for j in range(colunas):
        lin.append(vet_int[j])
    matriz.append(lin)

for z in range(linhas):
    if 42 in matriz[z]:
        for w in range(colunas):
            if matriz[z][w] == 42:
                print('%d %d' % (z, w))