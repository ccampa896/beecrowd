#include <stdio.h>


int main(){

	int qtd, garrafa, vazia, i, total;

	scanf("%d", &qtd);

	for(i = 0; i < qtd; i++){
		scanf("%d %d", &garrafa, &vazia);
		total = 0;
		int aux = garrafa / vazia;
		total += aux;
		aux = garrafa % vazia;
		total += aux;
		printf("%d\n", total);
	}
	return 0;
}
