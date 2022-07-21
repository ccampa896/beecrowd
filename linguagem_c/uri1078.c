#include <stdio.h>

int main() {

    int numero, i;

    scanf("%d", &numero);
    if(numero > 2 && numero < 1000){
        for(i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", i, numero, i * numero);
        }
    }

    return 0;
}
