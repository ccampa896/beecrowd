#include <stdio.h>

int main() {

    int numero, i, cont = 0;

    for(i = 0; i <= 4; i++){
        scanf("%d", &numero);
        if(numero % 2 == 0){
            cont++;
        }
    }

    printf("%d valores pares\n", cont);

    return 0;
}
