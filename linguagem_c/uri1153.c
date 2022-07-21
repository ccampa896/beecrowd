#include <stdio.h>

int main() {

    int n, i;

    scanf("%d", &n);

    if(n > 0 && n < 13){
        for(i = n; i > 1; i--){
            n *= (i - 1);
        }

        printf("%d\n", n);
    }

    return 0;
}
