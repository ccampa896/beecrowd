#include <stdio.h>

int main() {

    int teste, i, numero, in = 0, out = 0;

    scanf("%d", &teste);

    if(teste > 0 && teste < 10000){
        for(i = 0; i < teste; i++){
            scanf("%d", &numero);
            if(numero >= 10 && numero <= 20){
                in++;
            }
            else{
                out++;
            }
        }
    }

    printf("%d in\n%d out\n", in, out);
    return 0;
}
