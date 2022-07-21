#include <stdio.h>

int main() {

    double PI = 3.14159, raio, area;

    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("A=%.4lf\n", area);


    return 0;
}
