qtd = int(input())

for n in range(qtd):
    nome = input()
    nota_p = float(input())
    notas = input()
    vetor = notas.split()
    tam = len(vetor)
    for i in range(tam):
        vetor[i] = float(vetor[i])
    menor = min(vetor)
    i_menor = vetor.index(menor)
    vetor.pop(i_menor)
    maior = max(vetor)
    i_maior = vetor.index(maior)
    vetor.pop(i_maior)
    media = sum(vetor) * nota_p
    print('%s %.2f' % (nome, media))