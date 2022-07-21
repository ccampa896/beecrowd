#include <stdio.h>


int main(){

	int qtd, i, tempo, velocidade, distancia, total = 0;

	scanf("%d", &qtd);

	for(i = 0; i < qtd; i++){
	    scanf("%d %d", &tempo, &velocidade);
	    distancia = velocidade * tempo;
	    total += distancia;
	}

	printf("%d\n", total);

	return 0;
}
