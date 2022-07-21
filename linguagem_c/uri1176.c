#include <stdio.h>


int main() {

	unsigned long long int fib[60], num1 = 0, num2 = 1, res;
	int teste, sequencia, i;
    fib[0] = 0, fib[1] = 1;

    for(i = 2; i <= 60; i++){
        res = num1 + num2;
        fib[i] = res;
        num1 = num2;
        num2 = res;
    }

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
        scanf("%d", &sequencia);
        printf("Fib(%d) = %llu\n", sequencia, fib[sequencia]);
    }

    return 0;
}
