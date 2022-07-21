#include <stdio.h>

int main() {

    long long int estrela, i, qtde = 0;

    scanf("%lld", &estrela);

    long long int sitio[estrela], soma = 0;


    for(i = 0; i < estrela; i++){
        scanf("%lld", &sitio[i]);
    }

    i = 0;
    while(i >= 0 && i < estrela){
        if(sitio[i] % 2 == 0){
            if(sitio[i] > 0){
                sitio[i] -= 1;
            }
            if(i == 0){
            	qtde++;
            }
            i--;
        }
        else{
            if(sitio[i] > 0){
                sitio[i] -= 1;
                qtde++;
            }
            i++;
        }
    }

    for(i = 0; i < estrela; i++){
        soma += sitio[i];
    }

    printf("%lld %lld\n", qtde, soma);

    return 0;
}
