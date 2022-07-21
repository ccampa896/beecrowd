#include <stdio.h>
#define PI 3.14159

int main() {

    double raio, volume;

    scanf("%lf", &raio);

    volume = ((double)4/3) * PI * raio * raio * raio;

    printf("VOLUME = %.3lf\n", volume);



    return 0;
}
