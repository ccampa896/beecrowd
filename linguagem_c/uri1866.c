#include <stdio.h>

int main() {

    int soma, i, j, teste, qtde;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
        scanf("%d", &qtde);
        soma = 1;
        for(j = 2; j <= qtde; j++){
        	if(j % 2 != 0){
				soma += 1;
			}
			else{
				soma -= 1;
			}
        }
        printf("%d\n", soma);
    }



    return 0;
}
