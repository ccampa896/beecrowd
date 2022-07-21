#include <stdio.h>

int main() {

    int horas, velocidade, distancia;
    float consumo;

    scanf("%d", &horas);
    scanf("%d", &velocidade);

    distancia = velocidade * horas;

    consumo = (float) distancia / 12;

    printf("%.3f\n", consumo);

    return 0;
}
