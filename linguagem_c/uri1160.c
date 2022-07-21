#include <stdio.h>

int main() {

    int T, i, Pa, Pb, tempo;
    double Ga, Gb, G1, G2;

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d %d %lf %lf", &Pa, &Pb, &Ga, &Gb);
            G1 = Ga / 100.0;
            G2 = Gb / 100.0;

            tempo = 0;
            do{
            Pa = Pa * (1.0 + G1);
            Pb = Pb * (1.0 + G2);
            tempo++;
            }while((Pa <= Pb) && (tempo <= 100));

            if(Pa > Pb && tempo <= 100){
                printf("%d anos.\n", tempo);
            }
            else if(tempo > 100){
                printf("Mais de 1 seculo.\n");
            }
    }

    return 0;
}
