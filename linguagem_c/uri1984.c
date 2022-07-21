#include <stdio.h>

int main(){

	unsigned long long int numero, aux;

	scanf("%llu", &numero);

	do{
		aux = numero % 10;
		printf("%llu", aux);
		numero /= 10;
	}while(numero != 0);

	printf("\n");





	return 0;
}
