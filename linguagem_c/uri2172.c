#include <stdio.h>

int main(){

	long int X, M;


	scanf("%ld %ld", &X, &M);
	while(X != 0 && M != 0){
		printf("%ld\n", X * M);
		scanf("%ld %ld", &X, &M);
	}


	return 0;
}
