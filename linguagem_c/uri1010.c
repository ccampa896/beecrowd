#include <stdio.h>

int main() {

    int peca1, qtde1, peca2, qtde2;
    float valor1, valor2, total;

    scanf("%d %d %f", &peca1, &qtde1, &valor1);
    scanf("%d %d %f", &peca2, &qtde2, &valor2);

    total = ((float)qtde1 * valor1) + ((float)qtde2 * valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
