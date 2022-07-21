#include <stdio.h>

int main() {

    unsigned long int lado, comprimento, perimetro;

    scanf("%lu %lu", &lado, &comprimento);

    perimetro = lado * comprimento;

    printf("%lu\n", perimetro);

    return 0;
}
