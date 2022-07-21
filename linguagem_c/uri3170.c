#include <stdio.h>

int main() {

    int B, G, falta;
    char enter;

    scanf("%d%c", &B, &enter);
    scanf("%d", &G);

    if(B >= G/2){
        printf("Amelia tem todas bolinhas!\n");
    }
    else{
        falta = G/2 - B;
        printf("Faltam %d bolinha(s)\n", falta);
    }


    return 0;
}
