#include <stdio.h>
#include <string.h>

int main() {

    int casos;
    char jogador1[7], jogador2[7];



    scanf("%d", &casos);
    getchar();

    int i;
    for(i = 0; i < casos; i++){
        scanf("%s", jogador1);
        getchar();
        scanf("%s", jogador2);

        char *j1, *j2;

        j1 = strtok(jogador1, "\n");
        j2 = strtok(jogador2, "\n");


        if(strcmp(j1, "ataque") == 0){
            if(strcmp(j2, "ataque") == 0){
                printf("Aniquilacao mutua\n");
            }
            if(strcmp(j2, "pedra") == 0){
                printf("Jogador 1 venceu\n");
            }
            if(strcmp(j2, "papel") == 0){
                printf("Jogador 1 venceu\n");
            }
        }

        if(strcmp(j1, "pedra") == 0){
            if(strcmp(j2, "ataque") == 0){
                printf("Jogador 2 venceu\n");
            }
            if(strcmp(j2, "pedra") == 0){
                printf("Sem ganhador\n");
            }
            if(strcmp(j2, "papel") == 0){
                printf("Jogador 1 venceu\n");
            }
        }

        if(strcmp(j1, "papel") == 0){
            if(strcmp(j2, "ataque") == 0){
                printf("Jogador 2 venceu\n");
            }
            if(strcmp(j2, "pedra") == 0){
                printf("Jogador 2 venceu\n");
            }
             if(strcmp(j2, "papel") == 0){
                printf("Ambos venceram\n");
            }
        }
    }


    return 0;
}
