#include <stdio.h>

int main() {

    int t, n[1000], i, aux = 0;

    scanf("%d", &t);

    for(i = 0; i < 1000; i++){
        if(aux == t){
        	aux = 0;
        	n[i] = aux;
        	aux++;
        }else{
        	n[i] = aux;
        	aux++;
        }
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}

