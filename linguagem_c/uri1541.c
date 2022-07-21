#include <stdio.h>
#include <math.h>

int main() {

    int A, B, porcento, resposta;
    float area_c, area_t, lado_t;


    scanf("%d %d %d", &A, &B, &porcento);

    while(A != 0 && B != 0 && porcento != 0){
        area_c = A * B;

        area_t = ((float)area_c * 100.0) / (float)porcento;

        lado_t = sqrt(area_t);

        resposta = (int)lado_t;

        printf("%d\n", resposta);

        scanf("%d %d %d", &A, &B, &porcento);
    }


    return 0;
}
