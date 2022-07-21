#include <stdio.h>

int main() {

    int idade, qtde = 0, soma = 0;
    float media;

    do{
		scanf("%d", &idade);
		soma += idade;
		qtde++;
    }while(idade > 0);

    soma = soma - idade;
    qtde = qtde - 1;

    media = (float)soma / (float)qtde;

    printf("%.2f\n", media);

    return 0;
}
