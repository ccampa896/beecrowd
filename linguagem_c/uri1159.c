#include <stdio.h>

int main() {

    int x, i, soma, cont;

    scanf("%d", &x);

    while(x != 0){
        i = x;
        soma = 0;
        cont = 0;
        do{
            if(i % 2 == 0){
                soma += i;
                cont++;
            }
            i++;
        }while(cont != 5);
        printf("%d\n", soma);
        scanf("%d", &x);
    }

    return 0;
}
