#include <stdio.h>

int main() {

    double vetor[100];
    int i;

    scanf("%lf", &vetor[0]);

    for(i = 1; i < 100; i++){
        vetor[i] = vetor[i - 1] / 2.0;
    }

    for(i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }

    return 0;
}
