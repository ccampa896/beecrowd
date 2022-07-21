#include <stdio.h>

int main() {

    int teste, i, r1, r2, conduite;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
        scanf("%d %d", &r1, &r2);
        conduite = r1 + r2;
        printf("%d\n", conduite);
    }
    return 0;
}
