#include <stdio.h>

int main() {

    int i, j, fim, aux1, aux2;
    unsigned int ordem;

    while(scanf("%d", &ordem) != EOF){

    	int matriz[ordem][ordem];

        fim = ordem;
        j = 0;

        if(ordem % 2 == 0){
            for(i = 0; i < ordem; i++){
                matriz[i][j] = 1;
                j++;
            }

            aux1 = ordem - 1;

            for(i = 0; i < ordem; i++){
                matriz[i][aux1] = 2;
                aux1--;
            }

            aux1 = 1;
            aux2 = fim - 2;

            for(i = 0; i < ((ordem - 1) / 2); i++){
                for(j = aux1; j <= aux2; j++)
                matriz[j][i] = 3;
                aux1++;
                aux2--;
            }

            aux1 = 1;
            aux2 = fim - 2;

            for(i = 0; i < ((ordem - 1) / 2); i++){
                for(j = aux1; j <= aux2; j++)
                matriz[i][j] = 3;
                aux1++;
                aux2--;
            }

            aux1 = 1;
            aux2 = fim - 2;

            for(i = fim - 1; i > ((ordem - 1) / 2); i--){
                for(j = aux1; j <= aux2; j++)
                matriz[j][i] = 3;
                aux1++;
                aux2--;
            }

            aux1 = 1;
            aux2 = fim - 2;

            for(i = fim - 1; i > ((ordem - 1) / 2); i--){
                for(j = aux1; j <= aux2; j++)
                matriz[i][j] = 3;
                aux1++;
                aux2--;
            }
        }

        if(ordem == 3){
                    for(i = 0; i < ordem; i++){
                        matriz[i][j] = 1;
                        j++;
                    }

                    aux1 = ordem - 1;

                    for(i = 0; i < ordem; i++){
                        matriz[i][aux1] = 2;
                        aux1--;
                    }

                    matriz[(fim - 1) / 2][(fim - 1) / 2] = 2;

                    aux1 = 1;
                    aux2 = fim - 2;

                    for(i = 0; i <= ((ordem - 1) / 2); i++){
                        for(j = aux1; j <= aux2; j++)
                        matriz[j][i] = 3;
                        aux1++;
                        aux2--;
                    }

                    aux1 = 1;
                    aux2 = fim - 2;

                    for(i = 0; i <= ((ordem - 1) / 2); i++){
                        for(j = aux1; j <= aux2; j++)
                        matriz[i][j] = 3;
                        aux1++;
                        aux2--;
                    }

                    aux1 = 1;
                    aux2 = fim - 2;

                    for(i = fim - 1; i >= ((ordem - 1) / 2); i--){
                        for(j = aux1; j <= aux2; j++)
                        matriz[j][i] = 3;
                        aux1++;
                        aux2--;
                    }

                    aux1 = 1;
                    aux2 = fim - 2;

                    for(i = fim - 1; i >= ((ordem - 1) / 2); i--){
                        for(j = aux1; j <= aux2; j++)
                        matriz[i][j] = 3;
                        aux1++;
                        aux2--;
                    }
                }

        if(ordem % 2 != 0){
            for(i = 0; i < ordem; i++){
                matriz[i][j] = 1;
                j++;
            }

            aux1 = ordem - 1;

            for(i = 0; i < ordem; i++){
                matriz[i][aux1] = 2;
                aux1--;
            }

            matriz[(fim - 1) / 2][(fim - 1) / 2] = 2;

            aux1 = 1;
            aux2 = fim - 2;

            for(i = 0; i < ((ordem - 1) / 2); i++){
                for(j = aux1; j <= aux2; j++)
                matriz[j][i] = 3;
                aux1++;
                aux2--;
            }

            aux1 = 1;
            aux2 = fim - 2;

            for(i = 0; i < ((ordem - 1) / 2); i++){
                for(j = aux1; j <= aux2; j++)
                matriz[i][j] = 3;
                aux1++;
                aux2--;
            }

            aux1 = 1;
            aux2 = fim - 2;

            for(i = fim - 1; i > ((ordem - 1) / 2); i--){
                for(j = aux1; j <= aux2; j++)
                matriz[j][i] = 3;
                aux1++;
                aux2--;
            }

            aux1 = 1;
            aux2 = fim - 2;

            for(i = fim - 1; i > ((ordem - 1) / 2); i--){
                for(j = aux1; j <= aux2; j++)
                matriz[i][j] = 3;
                aux1++;
                aux2--;
            }
        }

        for(i = 0; i < ordem; i++){
        	for(j = 0; j < ordem; j++){
        		printf("%d", matriz[i][j]);
        	}
        	printf("\n");
        }

    }
    return 0;
}
