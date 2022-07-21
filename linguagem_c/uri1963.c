#include <stdio.h>

int main() {

    float v1, v2, aumento;

    scanf("%f %f", &v1, &v2);

    aumento = ((v2/v1) - 1.0) * 100;

    printf("%.2f%%\n", aumento);

    return 0;
}
