#include <stdio.h>

int main() {

    int numero, par[5], impar[5], i, f, j = 0, k = 0, l, m;

    for(i = 0; i < 15; i++){
        scanf("%d", &numero);

        if(numero % 2 == 0){
            par[j] = numero;
            j++;
            if(j == 5){
            			for(f = 0; f < 5; f++){
            				printf("par[%d] = %d\n", f, par[f]);
            			}
            j = 0;
            }
        }
        else if(numero % 2 != 0){
            impar[k] = numero;
            k++;
            if(k == 5){
				for(f = 0; f < 5; f++){
					printf("impar[%d] = %d\n", f, impar[f]);
				}
				k = 0;
            }
        }
    }

    if(i == 15){
    	for(l = 0; l < k; l++){
    		printf("impar[%d] = %d\n", l, impar[l]);
    	}
    	for(m = 0; m < j; m++){
    		printf("par[%d] = %d\n", m, par[m]);
    	}
    }



    return 0;
}
