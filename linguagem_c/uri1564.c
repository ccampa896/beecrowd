#include <stdio.h>

int main() {

    unsigned short int reclamar;


    while(scanf("%hd", &reclamar) != EOF){
        if(reclamar == 0){
            printf("vai ter copa!\n");
        }
        else{
            printf("vai ter duas!\n");
        }

    }

    return 0;
}
