#include <stdio.h>

int main() {

    int perguntas, respostas, i;
    char enter;

    while(scanf("%d%c", &perguntas, &enter) != EOF){
        for(i = 1; i <= perguntas; i++){
            scanf("%d%c", &respostas, &enter);
                printf("resposta %d: %d\n", i, respostas);
            }
        }


    return 0;
}
