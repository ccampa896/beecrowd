#include <stdio.h>

int main() {

    int numero, i;

    scanf("%d", &numero);

    if(numero >= 1 && numero <= 1000){
        for(i = 1; i <= numero; i++){
            if(i % 2 != 0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
