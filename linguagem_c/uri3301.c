#include <stdio.h>

int main() {

    int H, Z, L;
    char h[] = "huguinho", z[] = "zezinho" , l[] = "luisinho", enter;

    while(scanf("%d %d %d%c", &H, &Z, &L, &enter) != EOF){
        if(H < Z && Z < L || L < Z && Z < H){
            printf("%s\n", z);
        }
        else if(Z < L && L < H || H < L && L < Z){
            printf("%s\n", l);
        }
        else{
            printf("%s\n", h);
        }
    }

    return 0;
}
