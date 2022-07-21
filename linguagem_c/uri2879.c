#include <stdio.h>

int main() {

    int i, qtd, porta, ganhou = 0;

    scanf("%d", &qtd);

    for(i = 0; i < qtd; i++){
        scanf("%d", &porta);
        if(porta != 1){
            ganhou++;
        }
    }

    printf("%d\n", ganhou);


    return 0;
}
