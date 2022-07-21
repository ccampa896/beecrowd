#include <stdio.h>

int main() {

    float matriz[12][12], soma = 0.0, media;
    int i, j, cont = 0, aux1, aux2;
    char opcao;

    scanf("%c", &opcao);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    aux1 = 5;
    aux2 = 6;

    for(i = 7; i < 12; i++){
        j = aux1;
        do{
            soma += matriz[j][i];
            j++;
            cont++;
        }while(j <= aux2);
        aux1--;
        aux2++;
    }

    media = soma / (float)cont;

    if(opcao == 'S'){
        printf("%.1f\n", soma);
    }
    else if(opcao == 'M'){
        printf("%.1f\n", media);
    }

    return 0;
}
