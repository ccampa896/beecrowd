#include <stdio.h>

int main() {

    int vetor[9], i;

    scanf("%d", &vetor[0]);

    for(i = 1;i <= 9; i++){
        vetor[i] = vetor[i - 1] * 2;
    }

    for(i = 0; i <= 9; i++){
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
