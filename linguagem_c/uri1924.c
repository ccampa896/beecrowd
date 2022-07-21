#include <stdio.h>

int main() {

    int qtde, i;

    scanf("%d", &qtde);

    char curso[101];

    for(i = 0; i < qtde; i++){
        gets(curso);
    }


    printf("Ciencia da Computacao\n");


    return 0;
}
