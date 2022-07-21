#include <stdio.h>


int main(){

	int curupira;
	int boitata;
	int boto;
	int mapinguari;
	int iara;

	int total;

	scanf("%d", &curupira);
	scanf("%d", &boitata);
	scanf("%d", &boto);
	scanf("%d", &mapinguari);
	scanf("%d", &iara);

	total = 225 + (curupira * 300) + (boitata * 1500) + (boto * 600) + (mapinguari * 1000) + (iara * 150);

	printf("%d\n", total);

	return 0;
}
