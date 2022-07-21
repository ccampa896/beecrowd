#include <stdio.h>

int main(){

	int P, R;

	scanf("%d %d", &P, &R);

	if(P == 1){
		if(R == 0){
			printf("B\n");
		}
		else{
			printf("A\n");
		}
	}
	else{
		printf("C\n");
	}

	return 0;
}
