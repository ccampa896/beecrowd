#include <stdio.h>

int main() {

    int inter, gremio, v_inter = 0, v_gremio = 0, empate = 0, jogo = 0, novo;

    do{
        scanf("%d %d", &inter, &gremio);
        if(inter > gremio){
            v_inter++;
            jogo++;
        }
        else if(gremio > inter){
            v_gremio++;
            jogo++;
        }
        else{
            empate++;
            jogo++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novo);
    }while(novo != 2);

    printf("%d grenais\n", jogo);
    printf("Inter:%d\n", v_inter);
    printf("Gremio:%d\n", v_gremio);
    printf("Empates:%d\n", empate);
    if(v_inter > v_gremio){
        printf("Inter venceu mais\n");
    }
    else{
        printf("Gremio venceu mais\n");
    }

    return 0;
}
