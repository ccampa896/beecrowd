#include <stdio.h>

int main() {

    int aux3, aux4, n100, n50, n20, n10, n5, n2, n1, m1, m50, m25, m10, m5, m01;
    double valor, aux, aux2;

    scanf("%lf", &valor);

    aux2 = modf(valor, &aux);

    aux3 = aux;

    n100 = aux3 / 100;
    aux3 = aux3 % 100;
    n50 = aux3 / 50;
    aux3 = aux3 % 50;
    n20 = aux3 / 20;
    aux3 = aux3 % 20;
    n10 = aux3 / 10;
    aux3 = aux3 % 10;
    n5 = aux3 / 5;
    aux3 = aux3 % 5;
    n2 = aux3 / 2;
    aux3 = aux3 % 2;
    m1 = aux3 / 1;
    aux3 = aux3 % 1;

    aux4 = aux2 * 100;


    m50 = aux4 / 50;
    aux4 = aux4 % 50;
    m25 = aux4 / 25;
    aux4 = aux4 % 25;
    m10 = aux4 / 10;
    aux4 = aux4 % 10;
    m5 = aux4 / 5;
    aux4 = aux4 % 5;
    m01 = aux4 / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m01);

    return 0;
}
