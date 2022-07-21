#include <stdio.h>

int main() {

    int valor, alcool = 0, gasolina = 0, diesel = 0;

    do{
        scanf("%d", &valor);
        if(valor == 1){
            alcool++;
        }
        else if(valor == 2){
            gasolina++;
        }
        else if(valor == 3){
            diesel++;
        }
    }while(valor != 4);

    if(valor == 4){
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", alcool);
        printf("Gasolina: %d\n", gasolina);
        printf("Diesel: %d\n", diesel);
    }

    return 0;
}
