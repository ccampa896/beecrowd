#include <stdio.h>

int main() {

    int i;
    float soma = 1.0, div = 2.0;

    for(i = 3; i <= 39; i = i + 2){
        soma += ((float)i / div);
        div *= 2.0;
    }

    printf("%.2f\n", soma);

    return 0;
}
