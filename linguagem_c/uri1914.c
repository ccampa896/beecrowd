#include <stdio.h>
#include <string.h>

int main() {

    int teste, i, num1, num2;
    char nome1[100], nome2[100], opcao1[10], opcao2[10];

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
        scanf("%s%*c%s%*c%s%*c%s&*c", nome1, opcao1, nome2, opcao2);
        scanf("%d %d", &num1, &num2);

        if((strcmp(opcao1, "PAR") == 0) && ((num1 + num2) % 2 == 0)){
            printf("%s\n", nome1);
        }
        else if((strcmp(opcao2, "PAR") == 0) && ((num1 + num2) % 2 == 0)){
            printf("%s\n", nome2);
        }
        else if((strcmp(opcao1, "IMPAR") == 0) && ((num1 + num2) % 2 != 0)){
        	printf("%s\n", nome1);
        }
        else if((strcmp(opcao2, "IMPAR") == 0) && ((num1 + num2) % 2 != 0)){
        	printf("%s\n", nome2);
        }

    }
    return 0;
}
