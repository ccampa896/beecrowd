#include <stdio.h>

int main() {

    int linhas, i, quadrado, cubo;

    scanf("%d", &linhas);

    for(i = 1; i <= linhas; i++){
        quadrado = i * i;
        cubo = i * i * i;
        printf("%d %d %d\n", i, quadrado, cubo);
        printf("%d %d %d\n", i, quadrado + 1, cubo + 1);
    }

    return 0;
}
