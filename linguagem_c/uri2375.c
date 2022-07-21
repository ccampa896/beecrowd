#include <stdio.h>

int main() {

    int diametro, altura, largura, profundidade;

    scanf("%d", &diametro);
    scanf("%d %d %d", &altura, &largura, &profundidade);

    if((diametro <= altura) && (diametro <= largura) && (diametro <= profundidade)){
    	printf("S\n");
    }
    else{
    	printf("N\n");
    }


    return 0;
}
