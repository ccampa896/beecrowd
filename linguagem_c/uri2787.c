#include <stdio.h>
 
int main() {
 
    int c, l;
    scanf("%d", &l);
    scanf("%d", &c);

    if((l+c) % 2 == 0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }

    return 0;
}