#include <stdio.h>

int main() {

    int n[20], auxA[10], auxB[10], i, j;

    for(i = 0; i <= 19; i++){
        scanf("%d", &n[i]);
    }

    for(i = 0; i <= 9; i++){
    	auxA[i] = n[i];
    }

    j = 0;
    for(i = 19; i >= 10; i--){
    	auxB[j] = n[i];
        j++;
    }

    for(i = 0; i <= 9; i++){
        n[i] = auxB[i];
    }

    j = 0;
    for(i = 19; i >= 10; i--){
    	n[i] = auxA[j];
        j++;
    }

     for(i = 0; i <= 19; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}
