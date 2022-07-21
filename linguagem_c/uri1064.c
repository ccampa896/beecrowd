#include <stdio.h>

int main() {

    float numero, soma = 0, media;
    int i, cont = 0;

    for(i = 0; i <= 5; i++){
        scanf("%f", &numero);
        if(numero > 0){
            cont++;
            soma += numero;
        }
    }

    media = soma / cont;

    printf("%d valores positivos\n%.1f\n", cont, media);

    return 0;
}
