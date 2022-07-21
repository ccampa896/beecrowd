while True:
    try:
        jogadas = input().split()
        if jogadas[0] == 'papel':
            if jogadas[1] == 'papel':
                if jogadas[2] == 'papel':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                elif jogadas[2] == 'pedra':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                else:
                    print('Urano perdeu algo muito precioso...')
            elif jogadas[1] == 'pedra':
                if jogadas[2] == 'papel':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                elif jogadas[2] == 'pedra':
                    print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
                else:
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
            elif jogadas[1] == 'tesoura':
                if jogadas[2] == 'papel':
                    print("Iron Maiden's gonna get you, no matter how far!")
                elif jogadas[2] == 'pedra':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                else:
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
        elif jogadas[0] == 'pedra':
            if jogadas[1] == 'papel':
                if jogadas[2] == 'papel':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                elif jogadas[2] == 'pedra':
                    print("Iron Maiden's gonna get you, no matter how far!")
                else:
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
            elif jogadas[1] == 'pedra':
                if jogadas[2] == 'papel':
                    print('Urano perdeu algo muito precioso...')
                elif jogadas[2] == 'pedra':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                else:
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
            elif jogadas[1] == 'tesoura':
                if jogadas[2] == 'papel':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                elif jogadas[2] == 'pedra':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                else:
                    print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
        else:
            if jogadas[1] == 'papel':
                if jogadas[2] == 'papel':
                    print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
                elif jogadas[2] == 'pedra':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                else:
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
            elif jogadas[1] == 'pedra':
                if jogadas[2] == 'papel':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                elif jogadas[2] == 'pedra':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                else:
                    print("Iron Maiden's gonna get you, no matter how far!")
            elif jogadas[1] == 'tesoura':
                if jogadas[2] == 'papel':
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
                elif jogadas[2] == 'pedra':
                    print('Urano perdeu algo muito precioso...')
                else:
                    print('Putz vei, o Leo ta demorando muito pra jogar...')
    except EOFError:
        break
                          
        