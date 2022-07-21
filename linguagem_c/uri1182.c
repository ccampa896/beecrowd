#include <stdio.h>

int main() {

    float matriz[12][12], soma = 0.0, media = 0.0;
    int i, j, coluna;
    char opcao;

    scanf("%d", &coluna);

    scanf(" %c", &opcao);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    if(opcao == 'S'){
        for(i = 0; i < 12; i++){
            soma += matriz[i][coluna];
        }
        printf("%.1f\n", soma);
    }
    else if(opcao == 'M'){
        for(i = 0; i < 12; i++){
            soma += matriz[i][coluna];
        }
        media = soma / 12.0;
        printf("%.1f\n", media);
    }



    return 0;
}
