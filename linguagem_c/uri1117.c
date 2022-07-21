#include <stdio.h>

int main() {

    float n1, n2, media;

    do{
    scanf("%f", &n1);
    if(n1 < 0.0 || n1 > 10.0){
        printf("nota invalida\n");
    }
    } while(n1 < 0.0 || n1 > 10.0);

    do{
    scanf("%f", &n2);
    if(n2 < 0.0 || n2 > 10.0){
        printf("nota invalida\n");
    }
    } while(n2 < 0.0 || n2 > 10.0);

    media = (n1 + n2) / 2.0;

    printf("media = %.2f\n", media);

    return 0;
}
