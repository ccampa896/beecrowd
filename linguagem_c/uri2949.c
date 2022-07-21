#include <stdio.h>
#include <string.h>

int main(){

	int qtd, i;

	scanf("%d", &qtd);

	getchar();

	char comitiva[50];

	int hobbit = 0, humano = 0, elfo = 0, anao = 0, mago = 0;

	char *t;
	char a;

	for(i = 0; i < qtd; i++){
		fgets(comitiva, 50, stdin);
		t = strtok(comitiva, " ");
		t = strtok(NULL, "\n");
		a = *t;
		if(a == 'A'){
			anao++;
		}
		if(a == 'E'){
			elfo++;
		}
		if(a == 'H'){
			humano++;
		}
		if(a == 'M'){
			mago++;
		}
		if(a == 'X'){
			hobbit++;
		}
	}

	printf("%d Hobbit(s)\n", hobbit);
	printf("%d Humano(s)\n", humano);
	printf("%d Elfo(s)\n", elfo);
	printf("%d Anao(s)\n", anao);
	printf("%d Mago(s)\n", mago);

	return 0;
}
