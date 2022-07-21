#include <stdio.h>

int main() {

    int numero, i;
    char c[] = "Ho";

    scanf("%d", &numero);

    for(i = 0; i < numero; i++){
        if(i == numero - 1){
            printf("%s!\n", c);
        }
        else{
            printf("%s ", c);
        }
    }

    return 0;
}
