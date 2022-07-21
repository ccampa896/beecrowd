#include <stdio.h>

int main() {

    int i, cont = 0;
    float numero;

    for(i = 0; i <= 5; i++){
        scanf("%f", &numero);
        if(numero > 0){
            cont++;
        }
    }

    printf("%d valores positivos\n", cont);

    return 0;
}
