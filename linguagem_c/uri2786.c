#include <stdio.h>

int main() {

    int comprimento, largura, tipo1, tipo2;

    scanf("%d", &largura);
    scanf("%d", &comprimento);

    tipo2 = (2 * (largura - 1)) + (2 * (comprimento - 1));
    tipo1 = (largura * comprimento) + (largura - 1) * (comprimento - 1);

    printf("%d\n", tipo1);
    printf("%d\n", tipo2);

    return 0;
}
