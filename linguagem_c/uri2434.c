#include <stdio.h>


int main(){

	int qtd, inicial, i, menor, saldo = 0;

	scanf("%d %d", &qtd, &inicial);

	int conta[qtd];

	for(i = 0; i < qtd; i++){
	    scanf("%d", &conta[i]);
	    if(i == 0){
	        saldo = inicial + conta[i];
	        menor = saldo;
	    }
	    else{
	        saldo += conta[i];
	        if(saldo < menor){
	            menor = saldo;
	        }
	    }
	}

	printf("%d\n", menor);

	return 0;
}
