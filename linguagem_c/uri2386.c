#include <stdio.h>

int main(){

	long int olho = 40000000;
	long int telescopio;
	long int estrela;
	int qtd, i, ver = 0;

	scanf("%ld", &telescopio);
	scanf("%d", &qtd);

	for(i = 0; i < qtd; i++){
		scanf("%ld", &estrela);
			if(estrela * telescopio >= olho){
				ver++;
			}
	}

	printf("%d\n", ver);

	return 0;
}
