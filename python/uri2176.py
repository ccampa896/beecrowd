bit = input()
vetor = list(bit)
tamanho = len(vetor)

cont = 0
for i in range(0, tamanho):
    if vetor[i] == '1':
        cont += 1

if cont % 2 == 0:
    vetor.append('0')
else:
    vetor.append('1')

for i in range(0, (tamanho + 1)):
    if i == tamanho:
        print(vetor[i])
    else:
        print(vetor[i], end = '')