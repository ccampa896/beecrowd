#include <stdio.h>

int main() {

    float n1, n2, media;
    int novo;

    do{
        scanf("%f", &n1);
        if(n1 < 0.0 || n1 > 10.0){
            printf("nota invalida\n");
        }
    }while(n1 < 0.0 || n1 > 10.0);

    do{
        scanf("%f", &n2);
        if(n2 < 0.0 || n2 > 10.0){
            printf("nota invalida\n");
        }
    }while(n2 < 0.0 || n2 > 10.0);

    media = (n1 + n2) / 2.0;

    printf("media = %.2f\n", media);

    do{
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novo);
        if(novo == 1){
            do{
            	scanf("%f", &n1);
            	if(n1 < 0.0 || n1 > 10.0){
            		printf("nota invalida\n");
            	}
               }while(n1 < 0.0 || n1 > 10.0);

		do{
			scanf("%f", &n2);
			if(n2 < 0.0 || n2 > 10.0){
				printf("nota invalida\n");
			}
		}while(n2 < 0.0 || n2 > 10.0);

		media = (n1 + n2) / 2.0;

		printf("media = %.2f\n", media);
			}
    }while(novo != 2);

    return 0;
}
