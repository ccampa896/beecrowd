#include <stdio.h>

int main() {

	int ordem, i, j, fim, cont;

	scanf("%d", &ordem);

	while(ordem != 0){

		int aux1 = 0, aux2 = 0, aux3 = 1, aux4 = 0;

		int matriz[ordem][ordem];

		fim = ordem;

		while(1){

			cont = 1;

			for(i = aux1; i < fim; i++){
				matriz[aux2][i] = cont;
				cont++;
			}

			cont = 2;

			for(j = aux3; j < fim; j++){
				matriz[j][aux4] = cont;
				cont++;
			}

			if(aux1 == fim){
				break;
			}

			cont = 1;
			aux1++;
			aux2++;
			aux3++;
			aux4++;


		}

		for(i = 0; i < ordem; i++){
			for(j = 0; j < ordem; j++){
				if(i == ordem - 1 && j == ordem - 1){
					printf("%3d\n", matriz[i][j]);
				}
				else if(j == ordem - 1){
					printf("%3d", matriz[i][j]);
				}
				else{
					printf("%3d ", matriz[i][j]);
				}
			}
			printf("\n");
		}


		scanf("%d", &ordem);
	}
	return 0;
}
