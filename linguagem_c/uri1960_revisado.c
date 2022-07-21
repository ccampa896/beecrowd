#include <stdio.h>

int main(){

	int num, i;
	int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	char *romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

	scanf("%d", &num);


	i = 0;
	while(num){
		while(num / decimal[i]){
			printf("%s", romanos[i]);
			num -= decimal[i];
		}
		i++;
	}

	printf("\n");
	return 0;
}
