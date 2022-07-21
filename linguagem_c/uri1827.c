#include <stdio.h>

int main() {

    int ordem, i, j, inicio, fim;

    while(scanf("%d", &ordem) != EOF){

        int fim = ordem;
        int matriz[ordem][ordem];

        for(i = 0; i < ordem; i++){
            for(j = 0; j < ordem; j++){
                matriz[i][j] = 0;
            }
        }

        j = 0;

        for(i = 0; i < ordem; i++){
            matriz[i][j] = 2;
            j++;
        }

        j = ordem - 1;

        for(i = 0; i < ordem; i++){
            matriz[i][j] = 3;
            j--;
        }

        inicio = ordem / 3;
        fim = ordem - inicio;

        for(i = inicio; i < fim; i++){
        	for(j = inicio; j < fim; j++){
        		matriz[i][j] = 1;
        	}
        }

        matriz[ordem / 2][ordem / 2] = 4;

        for(i = 0; i < ordem; i++){
        	for(j = 0; j < ordem; j++){
        		printf("%d", matriz[i][j]);
        	}
        	printf("\n");
        }

        printf("\n");


    }

    return 0;
}
