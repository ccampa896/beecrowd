#include <stdio.h>

int main() {

    int batalha, i, bonus, at1, at2, def1, def2, tr1, tr2;
    float golpe1, golpe2;

    scanf("%d", &batalha);

    for(i = 0; i < batalha; i++){
        scanf("%d", &bonus);
        scanf("%d %d %d", &at1, &def1, &tr1);
        scanf("%d %d %d", &at2, &def2, &tr2);
        if(tr1 % 2 == 0){
            golpe1 = ((at1 + def1) / 2) + bonus;
        }
        else{
            golpe1 = (at1 + def1) / 2;
        }
        if(tr2 % 2 == 0){
            golpe2 = ((at2 + def2) / 2) + bonus;
        }
        else{
            golpe2 = (at2 + def2) / 2;
        }

        if(golpe1 > golpe2){
            printf("Dabriel\n");
        }
        else if(golpe2 > golpe1){
            printf("Guarte\n");
        }
        else{
            printf("Empate\n");
        }
    }

    return 0;
}
