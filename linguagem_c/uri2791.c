#include <stdio.h>

int main(){

	int feijao[4], i;

	for(i = 0; i < 4; i++){
		scanf("%d", &feijao[i]);
		if(feijao[i] == 1){
			printf("%d\n", i + 1);
		}
	}

	return 0;
}
