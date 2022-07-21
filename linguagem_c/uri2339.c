#include <stdio.h>

int main(){

	int C, P, F, total;

	scanf("%d %d %d", &C, &P, &F);

	total = P / F;

	if(total >= C){
		printf("S\n");
	}
	else{
		printf("N\n");
	}

	return 0;
}
