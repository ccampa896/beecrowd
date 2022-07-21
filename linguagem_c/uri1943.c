#include <stdio.h>

int main(){

	int top;

	scanf("%d", &top);

	if(top == 1){
		printf("Top 1\n");
	}
	else if(top > 1 && top <= 3){
		printf("Top 3\n");
	}
	else if(top > 3 && top <= 5){
		printf("Top 5\n");
	}
	else if(top > 5 && top <= 10){
		printf("Top 10\n");
	}
	else if(top > 10 && top <= 25){
		printf("Top 25\n");
	}
	else if(top > 25 && top <= 50){
		printf("Top 50\n");
	}
	else{
		printf("Top 100\n");
	}



	return 0;
}
