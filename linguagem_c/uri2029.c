#include <stdio.h>

int main() {

    double pi = 3.14, volume, diametro, altura, area;

    while(scanf("%lf", &volume) != EOF && scanf("%lf", &diametro) != EOF){
        area = pi * (diametro / 2) * (diametro / 2);
        altura = volume / area;

        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}
