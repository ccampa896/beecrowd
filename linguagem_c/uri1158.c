#include <stdio.h>

int main() {

    int casos, x, y, i, j, soma, cont;

    scanf("%d", &casos);
    for(i = 0; i < casos; i++){
        scanf("%d %d", &x, &y);
        soma = 0;
        cont = 0;
        j = x;
        do{
            if(j % 2 != 0){
                soma += j;
                cont++;
            }
            j++;
        }while(cont != y);
        printf("%d\n", soma);
    }



    return 0;
}
