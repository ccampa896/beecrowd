#include <stdio.h>

int main() {

    int teste, x, y, i;
    float divisao;

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
        scanf("%d %d", &x, &y);
        divisao = (float)x / (float)y;
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n", divisao);
        }
    }



    return 0;
}
