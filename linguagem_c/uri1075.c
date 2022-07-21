#include <stdio.h>

int main() {

    int numero, i;

    scanf("%d", &numero);
    if(numero < 10000){
        for(i = 1; i < 10000; i++){
            if(i % numero == 2){
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
