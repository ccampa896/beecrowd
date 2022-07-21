#include <stdio.h>

int main() {

    int numero, i, potencia;

    scanf("%d", &numero);
    if(numero > 5 && numero < 2000){
        for(i = 1; i <= numero; i++){
            if(i % 2 == 0){
                potencia = i * i;
                printf("%d^2 = %d\n", i, potencia);
            }
        }
    }

    return 0;
}
