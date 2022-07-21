#include <stdio.h>

int main() {

    int senha;
    char enter;

    while(scanf("%d%c", &senha, &enter) != EOF){
        printf("%d\n", senha - 1);
    }

    return 0;
}
