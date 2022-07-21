#include <stdio.h>
#include <math.h>

int main() {

    int linha, i, soma, j, teste, x;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
        scanf("%d", &x);
        soma = 0;
        for(j = 0; j < x; j++){
            linha = pow(2,j);
            soma += linha;
        }
        printf("%d\n", soma);
    }



    return 0;
}
