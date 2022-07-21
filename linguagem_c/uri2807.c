#include <stdio.h>

int fib(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}



int main() {

    int qtd, i;
    scanf("%d", &qtd);

    for(i = qtd; i >= 1; i--){
        if(i == 1){
            printf("%d\n", fib(i));
        }
        else{
            printf("%d ", fib(i));
        }
    }

    return 0;
}
