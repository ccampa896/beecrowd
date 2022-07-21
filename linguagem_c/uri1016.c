#include <stdio.h>

int main() {

    int distancia, v = 30;
    float temp_h, temp_min;

    scanf("%d", &distancia);

    temp_h = (float)distancia / v;

    temp_min = temp_h * 60;

    printf("%.0f minutos\n", temp_min);


    return 0;
}
