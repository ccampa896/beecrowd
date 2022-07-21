#include <stdio.h>

int main() {

    int teste, h, d, g, i;
    char enter;

    scanf("%d%c", &teste, &enter);

    for(i = 0; i < teste; i++){
        scanf("%d %d %d%c", &h, &d, &g, &enter);
        if((h >= 200 && h <= 300) && (d >= 50) && (g >= 150)){
            printf("Sim\n");
        }
        else{
            printf("Nao\n");
        }
    }

    return 0;
}
