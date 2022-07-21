#include <stdio.h>

int main() {

    int lesma, i, velocidade, maior;

    while(scanf("%d", &lesma) != EOF){
        for(i = 0; i < lesma; i++){
            scanf("%d", &velocidade);
            if(i == 0){
                maior = velocidade;
            }
            else if(velocidade >= maior){
                maior = velocidade;
            }
        }

        if(maior <= 10){
            printf("1\n");
        }
        else if(maior >= 10 && maior < 20){
            printf("2\n");
        }
        else if(maior >= 20){
            printf("3\n");
        }
    }

    return 0;
}
