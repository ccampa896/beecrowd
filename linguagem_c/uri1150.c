#include <stdio.h>

int main() {

    int x, z, cont = 0, soma = 0;

    scanf("%d", &x);

    do{
        scanf("%d", &z);
    }while(z <= x);

    do{
        soma += x;
        x++;
        cont++;
    }while(soma < z);

    printf("%d\n", cont);


    return 0;
}
