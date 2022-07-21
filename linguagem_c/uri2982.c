#include <stdio.h>

int main() {

    int i, qtd, valor, gasto = 0, verba = 0;
    char tipo;

    scanf("%d", &qtd);
    getchar();

    for(i = 0; i < qtd; i++){
        scanf("%c %d", &tipo, &valor);
        getchar();
        if(tipo == 'G'){
            gasto += valor;
        }
        else{
            verba += valor;
        }
    }

    if(gasto > verba){
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }
    else{
        printf("A greve vai parar.\n");
    }

    return 0;
}
