#include <stdio.h>

int main() {

	int ordem, i, j, fim;

	scanf("%d", &ordem);

	while(ordem != 0){

		int aux1 = 0, aux2 = 1;

		int matriz[ordem][ordem];

		fim = ordem;

		while(1){

			for(i = aux1; i < fim; i++){
				for(j = aux1; j < fim; j++){
					matriz[i][j] = aux2;
				}
			}

			if(fim == 0){
				break;
			}

			aux1++;
			fim--;
			aux2++;


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
