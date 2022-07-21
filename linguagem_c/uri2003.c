#include <stdio.h>

int main() {

    int hora, minuto, atraso;

    while(scanf("%d%*c%d", &hora, &minuto) != EOF){
        if(hora < 7){
            atraso = 0;
        }
        else{
            atraso = (hora - 7) * 60;
            atraso += minuto;
        }

        printf("Atraso maximo: %d\n", atraso);
    }

    return 0;
}
