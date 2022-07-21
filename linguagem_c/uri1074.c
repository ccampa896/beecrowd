#include <stdio.h>

int main() {

    int qtde, numero, i;

    scanf("%d", &qtde);
    if(qtde < 10000){
        for(i = 0; i < qtde; i++){
            scanf("%d", &numero);
            if(numero == 0){
                       printf("NULL\n");
                   }
                   else if((numero % 2 ==0) && numero > 0){
                       printf("EVEN POSITIVE\n");
                   }
                   else if((numero % 2 ==0) && numero < 0){
                       printf("EVEN NEGATIVE\n");
                   }
                   else if((numero % 2 != 0) && numero >0){
                   	printf("ODD POSITIVE\n");
                   }
                   else{
                   	printf("ODD NEGATIVE\n");
                   }
        }
    }

    return 0;
}
