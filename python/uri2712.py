qtd = int(input())
for i in range(qtd):
    placa = input()
    if '-' in placa:
        item = placa.split('-')
        maisc = item[0]
        num = item[1]
        if len(maisc) != 3:
            print('FAILURE')
            continue
        if len(num) != 4:
            print('FAILURE')
            continue
        maisc1 = maisc.isupper()
        maisc2 = maisc.isalpha()
        num1 = num.isnumeric()
        if maisc1 and maisc2:
            if num1:
                if item[1][-1] == '1' or item[1][-1] == '2':
                    print('MONDAY')
                elif item[1][-1] == '3' or item[1][-1] == '4':
                    print('TUESDAY')
                elif item[1][-1] == '5' or item[1][-1] == '6':
                    print('WEDNESDAY')
                elif item[1][-1] == '7' or item[1][-1] == '8':
                    print('THURSDAY')
                elif item[1][-1] == '9' or item[1][-1] == '0':
                    print('FRIDAY')
            else:
                print('FAILURE')
        else:
            print('FAILURE')
    else:
        print('FAILURE')