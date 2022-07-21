#include <stdio.h>

int main() {

    int numero, i, par = 0, impar = 0, positivo = 0, negativo = 0;

    for(i = 0; i <= 4; i++){
        scanf("%d", &numero);
        if(numero % 2 == 0){
            par++;
        }
        if(numero % 2 != 0){
            impar++;
        }
        if(numero > 0){
            positivo++;
        }
        if(numero < 0){
            negativo++;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);

    return 0;
}
