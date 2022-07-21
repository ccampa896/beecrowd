#include <stdio.h>

int main() {

    int i, lista, numero, multiplo2 = 0, multiplo3 = 0, multiplo4 = 0, multiplo5 = 0;
    scanf("%d", &lista);

    for(i = 1; i <= lista; i++){
        if (i < lista){
            scanf("%d ", &numero);
            if(numero % 2 == 0){
                multiplo2++;
            }
            if(numero % 3 == 0){
                multiplo3++;
            }
            if(numero % 4 == 0){
                multiplo4++;
            }
            if(numero % 5 == 0){
                multiplo5++;
            }
        }
        if(i == lista){
            scanf("%d", &numero);
            if(numero % 2 == 0){
                multiplo2++;
            }
            if(numero % 3 == 0){
                multiplo3++;
            }
            if(numero % 4 == 0){
                multiplo4++;
            }
            if(numero % 5 == 0){
                multiplo5++;
            }
        }
    }

    printf("%d Multiplo(s) de 2\n", multiplo2);
    printf("%d Multiplo(s) de 3\n", multiplo3);
    printf("%d Multiplo(s) de 4\n", multiplo4);
    printf("%d Multiplo(s) de 5\n", multiplo5);


    return 0;
}
