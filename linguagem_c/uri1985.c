#include <stdio.h>

int main() {

    int pedido, i, num, qtde;
    float total = 0.0;

    scanf("%d", &pedido);

    for(i = 0; i < pedido; i++){
        scanf("%d %d", &num, &qtde);

        switch(num){
            case 1001:
                total += qtde * 1.5;
                break;
            case 1002:
                total += qtde * 2.5;
                break;
            case 1003:
                total += qtde * 3.5;
                break;
            case 1004:
                total += qtde * 4.5;
                break;
            case 1005:
                total += qtde * 5.5;
                break;
        }
    }

    printf("%.2f\n", total);

    return 0;
}
