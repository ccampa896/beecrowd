#include <stdio.h>
#include <string.h>

int main() {

    int tamanho;
    char string[500];

    fgets(string, 500, stdin);

    char *t;
    t = strtok(string, "\n");

    tamanho = strlen(t);

    if(tamanho <= 80){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}
