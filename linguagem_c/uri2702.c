#include <stdio.h>

int main(){

	int frango, bife, massa;
	int f, b, m;
	int total = 0;

	scanf("%d %d %d", &frango, &bife, &massa);
	scanf("%d %d %d", &f, &b, &m);

	if(f > frango){
		total += (f - frango);
	}

	if(b > bife){
		total += (b - bife);
	}

	if(m > massa){
		total += (m - massa);
	}

	printf("%d\n", total);




	return 0;
}
