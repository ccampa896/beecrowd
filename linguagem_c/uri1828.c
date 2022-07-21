#include <stdio.h>
#include <string.h>

int main() {

    char tesoura[] = "tesoura";
    char papel[] = "papel";
    char pedra[] = "pedra";
    char lagarto[] = "lagarto";
    char spock[] = "Spock";

    char sheldon[8], raj[8];

    int teste, i;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
        scanf("%s %s", sheldon, raj);

        if(strcmp(sheldon, tesoura) == 0){
            if(strcmp(raj, papel) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, spock) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, lagarto) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, pedra) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, tesoura) == 0){
                printf("Caso #%d: De novo!\n", i + 1);
            }
        }
        else if(strcmp(sheldon, papel) == 0){
            if(strcmp(raj, tesoura) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, pedra) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, lagarto) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, spock) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, papel) == 0){
                printf("Caso #%d: De novo!\n", i + 1);
            }
        }
        else if(strcmp(sheldon, pedra) == 0){
            if(strcmp(raj, papel) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, lagarto) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, spock) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, tesoura) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, pedra) == 0){
                printf("Caso #%d: De novo!\n", i + 1);
            }
        }
        else if(strcmp(sheldon, lagarto) == 0){
            if(strcmp(raj, pedra) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, spock) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, tesoura) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, papel) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, lagarto) == 0){
                printf("Caso #%d: De novo!\n", i + 1);
            }
        }
        else if(strcmp(sheldon, spock) == 0){
            if(strcmp(raj, lagarto) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, tesoura) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, papel) == 0){
                printf("Caso #%d: Raj trapaceou!\n", i + 1);
            }
            else if(strcmp(raj, pedra) == 0){
                printf("Caso #%d: Bazinga!\n", i + 1);
            }
            else if(strcmp(raj, spock) == 0){
                printf("Caso #%d: De novo!\n", i + 1);
            }
        }

    }
    return 0;
}
