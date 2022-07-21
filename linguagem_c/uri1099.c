#include <stdio.h>

int main() {

    int casos, x, y, i, j, soma = 0;

    scanf("%d", &casos);

    for(i = 0; i < casos; i++){
        scanf("%d %d", &x, &y);
        if(x > y){
            for(j = y + 1; j < x; j++){
                if(j % 2 != 0){
                    soma += j;
                }
            }
            printf("%d\n", soma);
            soma = 0;
        }
        else if(x < y){
            for(j = x + 1; j < y; j++){
                if(j % 2 != 0){
                    soma += j;
                }
            }
            printf("%d\n", soma);
            soma = 0;
        }
        else if(x == y){
            soma = 0;
            printf("%d\n", soma);
        }
        else if((x == y + 1) || (y == x + 1)){
            soma = 0;
            printf("%d\n", soma);
        }
    }

    return 0;
}
