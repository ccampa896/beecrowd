from sys import stdin

for line in stdin:
    if line == '':
        break
    vetor = line.split()
    mes = int(vetor[0])
    dia = int(vetor[1])

    ano = {1: 31, 2: 29, 3: 31, 4: 30, 5: 31, 6: 30, 7: 31, 8: 31, 9: 30, 10: 31, 11: 30, 12: 25}
    
    if mes == 12 and dia == 25:
        print('E natal!')
    elif mes == 12 and dia == 24:
        print('E vespera de natal!')
    elif mes == 12 and dia > 25:
        print('Ja passou!')
    else:
        aux = 0
        if mes == 1:
            for i in range((mes+1), 13):
                aux += ano[i] 
            soma = aux + (ano[1] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 2:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma= aux + (ano[2] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 3:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[3] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 4:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[4] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 5:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[5] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 6:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[6] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 7:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[7] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 8:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[8] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 9:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[9] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 10:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[10] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 11:
            for i in range((mes+1), 13):
                aux += ano[i]
            soma = aux + (ano[11] - dia)
            print(f'Faltam {soma} dias para o natal!')
        elif mes == 12:
            soma = ano[12] - dia
            print(f'Faltam {soma} dias para o natal!')

