#include <stdio.h>

int main() {

    int senha, correta = 2002;

    scanf("%d", &senha);

    while(senha != correta){
        printf("Senha Invalida\n");
        scanf("%d", &senha);
    }

    printf("Acesso Permitido\n");


    return 0;
}
