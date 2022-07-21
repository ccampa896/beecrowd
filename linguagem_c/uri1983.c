#include <stdio.h>

int main(){

	int alunos, i;

	scanf("%d", &alunos);

	int num[alunos], num_maior;
	float notas[alunos], nota_maior;

	for(i = 0; i < alunos; i++){
		scanf("%d %f", &num[i], &notas[i]);
	}

	for(i = 0; i < alunos; i++){
		if(i == 0){
			num[i] = num_maior;
			notas[i] = nota_maior;
		}
		else{
			if(notas[i] > nota_maior){
				nota_maior = notas[i];
				num_maior = num[i];
			}
		}
	}

	if(nota_maior < 8.0){
		printf("Minimum note not reached\n");
	}
	else{
		printf("%d\n", num_maior);
	}

	return 0;
}
