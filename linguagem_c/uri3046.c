#include <stdio.h>

int main(){

	unsigned int n, total;

	scanf("%u", &n);

	total = ((n + 1) * (n + 2)) / 2;

	printf("%u\n", total);

	return 0;
}
