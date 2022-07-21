#include <stdio.h>

int main() {

    int notas;
        scanf("%d", &notas);
        if(notas == 0){
            printf("E\n");
        }
        else if(notas >= 1 && notas <= 35){
            printf("D\n");
        }
        else if(notas >= 36 && notas <= 60){
            printf("C\n");
        }
        else if(notas >= 61 && notas <= 85){
            printf("B\n");
        }
        else if(notas >= 86 && notas <= 100){
            printf("A\n");
        }


    return 0;
}
