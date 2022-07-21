qtd = int(input())

saq_t = 0
bloq_t = 0
ataq_t = 0
saq_s = 0
bloq_s = 0
ataq_s = 0

for numero in range(qtd):
    nome = input()
    dados1 = input()
    dados2 = input()
    vetor1 = dados1.split()
    vetor2 = dados2.split()
    saq1 = int(vetor1[0])
    bloq1 = int(vetor1[1])
    ataq1 = int(vetor1[2])
    saq_t += saq1
    bloq_t += bloq1
    ataq_t += ataq1
    saq2 = int(vetor2[0])
    bloq2 = int(vetor2[1])
    ataq2 = int(vetor2[2])
    saq_s += saq2
    bloq_s += bloq2
    ataq_s += ataq2
    
print('Pontos de Saque: %.2f %%.' % (saq_s / saq_t * 100))
print('Pontos de Bloqueio: %.2f %%.' % (bloq_s / bloq_t * 100))
print('Pontos de Ataque: %.2f %%.' % (ataq_s / ataq_t * 100))
