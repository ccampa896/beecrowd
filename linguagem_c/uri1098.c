#include <stdio.h>

int main() {

    float j = 1.0, i = 0.0;

    printf("I=%.0f J=%.0f\n", i, j);
    printf("I=%.0f J=%.0f\n", i, j + 1);
    printf("I=%.0f J=%.0f\n", i, j + 2);

    for(i = 0.2; i < 1.0; i += 0.2){
        printf("I=%.1f J=%.1f\n", i, j + 0.2);
        printf("I=%.1f J=%.1f\n", i, j + 1.2);
        printf("I=%.1f J=%.1f\n", i, j + 2.2);
        j += 0.2;
    }

    j = 2.0, i = 1.0;

    printf("I=%.0f J=%.0f\n", i, j);
    printf("I=%.0f J=%.0f\n", i, j + 1);
    printf("I=%.0f J=%.0f\n", i, j + 2);

    for(i = 1.2; i < 2.0; i += 0.2){
        printf("I=%.1f J=%.1f\n", i, j + 0.2);
        printf("I=%.1f J=%.1f\n", i, j + 1.2);
        printf("I=%.1f J=%.1f\n", i, j + 2.2);
        j += 0.2;
    }

    j = 3.0, i = 2.0;

        printf("I=%.0f J=%.0f\n", i, j);
        printf("I=%.0f J=%.0f\n", i, j + 1);
        printf("I=%.0f J=%.0f\n", i, j + 2);

    return 0;
}
