#include <stdio.h>

int main() {

    int teste, num, i, j, soma;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
        scanf("%d", &num);
        soma = 0;
        for(j = num - 1; j >= 1; j--){
            if(num % j == 0){
                soma += j;
            }
        }
        if(num == soma){
		   printf("%d eh perfeito\n", num);
		   }
		   else{
			   printf("%d nao eh perfeito\n", num);
		   }
    }

    return 0;
}
