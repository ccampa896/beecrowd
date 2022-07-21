#include <stdio.h>

int main() {

    int qtd, i;
    char perguntas[100];
    char resposta[] = "gzuz";

    scanf("%d", &qtd);
    getchar();

    for(i = 0; i < qtd; i++){
        scanf("%s", perguntas);
        printf("%s\n", resposta);
    }

    return 0;
}
