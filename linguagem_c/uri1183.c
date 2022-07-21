#include <stdio.h>

int main() {

    float matriz[12][12], soma = 0.0, media;
    int i, j, cont = 0;
    char opcao;

    scanf("%c", &opcao);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }


    for(i = 0; i < 11; i++){
        j = i + 1;
        do{
            soma += matriz[i][j];
            j++;
            cont++;
        }while(j < 12);
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
