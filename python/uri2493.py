from sys import stdin

jogo = []
jogadores = []

for line in stdin:
    if line == '':
        break
    vezes = int(line)
    for i in range(vezes):
        opcao = input().split()
        tent = []
        tent.append(opcao[0])
        aux = opcao[1].split('=')
        tent.append(aux[0])
        tent.append(aux[1])
        jogo.append(tent)
    for i in range(vezes):
        opcao = input().split()
        tent = []
        tent.append(opcao[0])
        tent.append(opcao[1])
        tent.append(opcao[2])
        jogadores.append(tent)
        
        
