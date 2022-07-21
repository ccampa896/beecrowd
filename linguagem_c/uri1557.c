#include <stdio.h>

int main() {

    int ordem, i, j, digito, valor;


    scanf("%d", &ordem);

    while(ordem != 0){

        int matriz[ordem][ordem];


        for(i = 0; i < ordem; i++){
            for(j = 0; j < ordem; j++){
                if(i == 0 && j == 0){
                    matriz[i][j] = 1;
                }
                else if(i != 0 && j == 0){
                    matriz[i][j] = matriz[i - 1][j] * 2;
                }
                else{
                    matriz[i][j] = matriz[i][j - 1] * 2;
                }
            }
        }

        valor = matriz[ordem - 1][ordem - 1];
        digito = 0;

        while(valor != 0){
            valor /= 10;
            digito++;
        }

        for(i = 0; i < ordem; i++){
            for(j = 0; j < ordem; j++){
                if(j == ordem - 1){
                    printf("%*d", digito, matriz[i][j]);
                }
                else{
                    printf("%*d ", digito, matriz[i][j]);
                }
            }
            printf("\n");
        }

        printf("\n");
        scanf("%d", &ordem);

    }


    return 0;
}
