#include <stdio.h>

int main() {

    int n1 = 0, n2 = 1, fib, sequencia, i, aux;

    scanf("%d", &sequencia);

    printf("%d %d ", n1, n2);

    if((sequencia > 0) && (sequencia < 45)){
        for(i = 0; i < sequencia - 2; i++){
            fib = n1 + n2;
            if(i == sequencia - 3){
                printf("%d\n", fib);
            }
            else{
                printf("%d ", fib);
            }
            n1 = n2;
            n2 = fib;
        }
    }



    return 0;
}
