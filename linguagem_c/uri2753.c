#include <stdio.h>

int main(){

	int i;
	char letra = 'a';

	for(i = 0; i < 26; i++){
		printf("%d e %c\n", letra, letra);
		letra++;
	}

	return 0;
}
