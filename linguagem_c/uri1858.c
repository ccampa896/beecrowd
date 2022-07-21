#include <stdio.h>

int main() {

    int i, n, menor, ordem;

    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++){
        if(i == 0){
            menor = vetor[i];
            ordem = i + 1;
        }
        else if(vetor[i] < menor){
            menor = vetor[i];
            ordem = i + 1;
        }
    }

    printf("%d\n", ordem);

    return 0;
}
