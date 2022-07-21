#include <stdio.h>

int main(){

    int qtd, marca = 1, i;

    scanf("%d", &qtd);

    int numero[qtd];

    for(i = 0; i < qtd; i++){
        scanf("%d", &numero[i]);
    }

    for(i = 0; i < qtd - 1; i++){
    	if(numero[i] != numero[i+1]){
    		marca++;
    	}
    }

    printf("%d\n", marca);

    return 0;
}
