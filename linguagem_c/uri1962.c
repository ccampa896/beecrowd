#include <stdio.h>

int main() {

    int tempo, n, i, calcula;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &tempo);
        calcula = 2015 - tempo;
        if(calcula > 0){
            printf("%d D.C.\n", calcula);
        }
        else{
            printf("%d A.C.\n", tempo - 2014);
        }

    }

    return 0;
}
