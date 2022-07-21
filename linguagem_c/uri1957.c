#include <stdio.h>

int main() {

    int i, num, aux, hexa[100], resto, cont = 0;

    scanf("%d", &num);

    if(num >= 1 && num <= 9){
        printf("%d\n", num);
    }
    else if(num >= 10 && num <= 15){
        switch(num){
            case 10:
            printf("A\n");
            break;
            case 11:
            printf("B\n");
            break;
            case 12:
            printf("C\n");
            break;
            case 13:
            printf("D\n");
            break;
            case 14:
            printf("E\n");
            break;
            case 15:
            printf("F\n");
            break;
        }
    }
    else{
    	aux = num;
            if(aux / 16 <= 15){
            	do{
					hexa[cont] = aux / 16;
					resto = aux % 16;
					cont++;
					hexa[cont] = resto;
					aux = resto;
					aux = aux / 16;
					cont++;
            	}while(aux != 0);
                for(i = 0; i < cont; i++){
                        if(i == cont - 1){
                        	switch(hexa[i]){
        						case 10:
        						printf("A\n");
        						break;
        						case 11:
        						printf("B\n");
        						break;
        						case 12:
        						printf("C\n");
        						break;
        						case 13:
        						printf("D\n");
        						break;
        						case 14:
        						printf("E\n");
        						break;
        						case 15:
        						printf("F\n");
        						break;
        						default:
        						printf("%d\n", hexa[i]);
        						break;
                        	}
                        }
                        else{
                        	switch(hexa[i]){
        						case 10:
        						printf("A");
        						break;
        						case 11:
        						printf("B");
        						break;
        						case 12:
        						printf("C");
        						break;
        						case 13:
        						printf("D");
        						break;
        						case 14:
        						printf("E");
        						break;
        						case 15:
        						printf("F");
        						break;
        						default:
        						printf("%d", hexa[i]);
        					}
                        }
                }
            }
            else{
            	do{
					hexa[cont] = aux % 16;
					aux = aux / 16;
					cont++;
            	}while(aux != 0);
            	hexa[cont] = aux / 16;
                for(i = cont - 1; i >= 0; i--){
                        if(i == 0){
                        	switch(hexa[i]){
        						case 10:
        						printf("A\n");
        						break;
        						case 11:
        						printf("B\n");
        						break;
        						case 12:
        						printf("C\n");
        						break;
        						case 13:
        						printf("D\n");
        						break;
        						case 14:
        						printf("E\n");
        						break;
        						case 15:
        						printf("F\n");
        						break;
        						default:
        						printf("%d\n", hexa[i]);
        						break;
                        	}
                        }
                        else{
                        	switch(hexa[i]){
        						case 10:
        						printf("A");
        						break;
        						case 11:
        						printf("B");
        						break;
        						case 12:
        						printf("C");
        						break;
        						case 13:
        						printf("D");
        						break;
        						case 14:
        						printf("E");
        						break;
        						case 15:
        						printf("F");
        						break;
        						default:
        						printf("%d", hexa[i]);
        					}
                        }
                }
            }
        }
    return 0;
}
