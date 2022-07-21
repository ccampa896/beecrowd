#include <stdio.h>

int main() {

    int estrada, dist, km, pedagio, total;

    scanf("%d %d", &estrada, &dist);
    scanf("%d %d", &km, &pedagio);

    total = ((estrada / dist) * pedagio) + (km * estrada);

    printf("%d\n", total);

    return 0;
}
