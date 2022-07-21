#include <stdio.h>

int main() {

    int linha, i;

    scanf("%d", &linha);

    for(i = 0; i < linha; i++){
        printf("%d %d %d PUM\n", (i * 4) + 1, (i * 4) + 2, (i * 4) + 3);
    }

    return 0;
}
