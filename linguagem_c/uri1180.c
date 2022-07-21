#include <stdio.h>

int main() {

    int n, i, menor, posicao;

    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
        if(i == 0){
            menor = vetor[i];
            posicao = i;
        }
        else if(vetor[i] < menor){
            menor = vetor[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);


    return 0;
}
