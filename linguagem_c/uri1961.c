#include <stdio.h>

int main() {

    int p, n, i, perde = 0;

    scanf("%d %d%*c", &p, &n);

    int altura[n];

    for(i = 0; i < n; i++){
        scanf("%d", &altura[i]);
    }

    for(i = 0; i < n - 1; i++){
        if(abs(altura[i] - altura[i+1]) > p){
            perde++;
        }
    }

    if(perde > 0){
        printf("GAME OVER\n");
    }
    else{
        printf("YOU WIN\n");
    }

    return 0;
}
