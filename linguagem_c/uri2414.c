#include <stdio.h>

int main() {

	int numero, maior = 0;

	do{
		scanf("%d", &numero);
		if(numero > maior){
			maior = numero;
		}
	}while(numero != 0);

	printf("%d\n", maior);

    return 0;
}
