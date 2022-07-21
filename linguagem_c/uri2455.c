#include <stdio.h>

int main(){

	int p1, c1, p2, c2, esquerda, direita;

	scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

	esquerda = p1 * c1;
	direita = p2 * c2;

	if(esquerda > direita){
		printf("-1\n");
	}
	else if(esquerda == direita){
		printf("0\n");
	}
	else{
		printf("1\n");
	}




	return 0;
}
