#include <stdio.h>

int main(){

	int distancia, sauron, saruman;
	float ICM;

	scanf("%d %d %d", &distancia, &sauron, &saruman);

	ICM = ((float)distancia) / ((float)sauron + (float)saruman);

	printf("%.2f\n", ICM);

	return 0;
}
