#include <stdio.h>

int main() {

    double matriz[12][12], soma = 0.0, media;
    int i, j, cont = 0, aux;
    char opcao;

    scanf("%c", &opcao);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    aux = 10;

    for(i = 0; i < 5; i++){
        j = aux;
        do{
            soma += matriz[i][j];
            j--;
            cont++;
        }while(j >= i + 1);
        aux--;
    }

    media = soma / (double)cont;

    if(opcao == 'S'){
        printf("%.1lf\n", soma);
    }
    else if(opcao == 'M'){
        printf("%.1lf\n", media);
    }

    return 0;
}
