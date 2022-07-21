qtd = int(input())
total_vit = 0
valor = 0
vitamina = {
    'suco': 120,
    'morango': 85,
    'mamao': 85,
    'goiaba': 70,
    'manga': 56,
    'laranja': 50,
    'brocolis': 34
}
while qtd != 0:
    for i in range(qtd):
        frutas = input().split()
        qtd_frutas = int(frutas[0])
        tipo_frutas = frutas[1]
        for chaves, valores in vitamina.items():
            if tipo_frutas == chaves:
                valor = valores        
                total_vit = total_vit + (qtd_frutas * valor)
    if total_vit >= 110 and total_vit <= 130:
        print(f'{total_vit} mg')
    elif total_vit < 110:
        print(f'Mais {110 - total_vit} mg')
    else:
        print(f'Menos {total_vit - 130} mg')
    qtd = int(input())
    total_vit = 0
    valor = 0