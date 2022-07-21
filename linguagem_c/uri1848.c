#include <stdio.h>
#include <string.h>

int main() {

    char corvo[10];

    char grito[] = "caw caw";
    int cont_grito = 0;
    int soma = 0;

    do{
        gets(corvo);

        if(strcmp(corvo, "*--") == 0){
            soma += 4;
        }
        else if(strcmp(corvo, "--*") == 0){
            soma += 1;
        }
        else if(strcmp(corvo, "*-*") == 0){
        	soma += 5;
        }
        else if(strcmp(corvo, "**-") == 0){
        	soma += 6;
        }
        else if(strcmp(corvo, "-**") == 0){
        	soma += 3;
        }
        else if(strcmp(corvo, "-*-") == 0){
        	soma += 2;
        }
        else if(strcmp(corvo, "***") == 0){
        	soma += 7;
        }
        else if(strcmp(corvo, grito) == 0){
            printf("%d\n", soma);
            soma = 0;
            cont_grito++;
        }
    }while(cont_grito < 3);

    return 0;
}
