#include <stdio.h>

int main() {

   int numero, cont = 0;

   scanf("%d", &numero);

   while(cont <= 5){
        if(numero % 2 != 0){
            printf("%d\n", numero);
            cont++;
        }
        numero++;
   }
    return 0;
}
