#include <stdio.h>
#include <string.h>

int main() {

    int abas, acao, i;
    char var[7], enter;
    char a[] = "fechou";

    scanf("%d %d%c", &abas, &acao, &enter);

    for(i = 0; i < acao; i++){
        scanf("%s%c", var, &enter);
        if(strcmp(var, a) == 0){
            abas++;
        }
        else{
            abas--;
        }
    }

    printf("%d\n", abas);

    return 0;
}
