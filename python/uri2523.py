from sys import stdin

for line in stdin:
    if line == '':
        break
    lista = list(line)
    qtd = int(input())
    codigo = input().split()
    tam = len(codigo)
    letras = []
    for i in range(tam):
        letras.append(int(codigo[i]))
    for i in range(tam):
        letras[i] = letras[i] - 1
    for i in range(qtd):
        if i == qtd - 1:
            print(lista[letras[i]])
        else:
            print(lista[letras[i]], end='')