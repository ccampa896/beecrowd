#include <stdio.h>

int main() {

    int numero, maior, posicao, i;

    for(i = 0; i <= 99; i++){
        scanf("%d", &numero);
        if(i == 0){
            maior = numero;
            posicao = i;
        }
        else if(numero > maior){
            maior = numero;
            posicao = i;
        }
    }

    printf("%d\n%d\n", maior, posicao + 1);

    return 0;
}
