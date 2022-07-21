#include <stdio.h>
#include <string.h>

int main() {

    int teste, i;
    char nome[20];

    scanf("%d", &teste);

    for(i = 0; i < teste; i++){
    	scanf("%s %*d", nome);

		if(strcmp(nome, "Thor") == 0){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}

    }
    return 0;
}
