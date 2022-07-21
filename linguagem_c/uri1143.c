#include <stdio.h>

int main() {

    int linha, i, quadrado, cubo;

    scanf("%d", &linha);

    for(i = 1; i <= linha; i++){
        quadrado = i * i;
        cubo = i * i * i;
        printf("%d %d %d\n", i, quadrado, cubo);
    }

    return 0;
}
