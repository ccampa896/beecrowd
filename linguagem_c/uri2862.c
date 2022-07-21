#include <stdio.h>

int main() {

    int i, qtd, poder;

    scanf("%d", &qtd);

    for(i = 0; i < qtd; i++){
        scanf("%d", &poder);
        if(poder > 8000){
            printf("Mais de 8000!\n");
        }
        else{
            printf("Inseto!\n");
        }
    }

    return 0;
}
