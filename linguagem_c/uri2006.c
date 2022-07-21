#include <stdio.h>

int main() {

    int cha, a, certo = 0, i;

    scanf("%d", &cha);

    for(i = 0; i < 5; i++){
        scanf("%d", &a);
        if(a == cha){
            certo++;
        }
    }

    printf("%d\n", certo);

    return 0;
}
