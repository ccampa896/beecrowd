#include <stdio.h>
#include <string.h>

int main(){

    int qtd, gollum, poder = 0, i, j;

    scanf("%d %d", &qtd, &gollum);

    int poder_runa[qtd];
	char runa[qtd];

    getchar();

    for(i = 0; i < qtd; i++){
        scanf("%c %d", &runa[i], &poder_runa[i]);
        getchar();
    }

    int qtd_r;

    scanf("%d", &qtd_r);

    getchar();

    char runas_recitar[(2 * qtd_r)];
    fgets(runas_recitar, 2 * qtd_r, stdin);
    char runas_recitadas[qtd_r];
    char *t;

    t = strtok(runas_recitar, " ");
    runas_recitadas[0] = *t;
    i = 1;
    while(i < qtd_r){
    	t = strtok(NULL, " ");
    	runas_recitadas[i] = *t;
    	i++;
    }


    for(i = 0; i < qtd_r; i++){
        for(j = 0; j < qtd; j++){
            if(runas_recitadas[i] == runa[j]){
                poder += poder_runa[j];
            }
        }
    }

    printf("%d\n", poder);

    if(poder >= gollum){
        printf("You shall pass!\n");
    }
    else{
        printf("My precioooous\n");
    }

	return 0;
}
