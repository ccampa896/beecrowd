#include <stdio.h>
 
int main() {
 
    int e, d;
    
    scanf("%d %d", &e, &d);
    
    if(e <= (d - 3)){
        printf("Muito bem! Apresenta antes do Natal!\n");
    }
    else if(e < d){
        printf("Parece o trabalho do meu filho!\n");
        if((e + 2) < 24){
            printf("TCC Apresentado!\n");
        }
        else{
            printf("Fail! Entao eh nataaaaal!\n");
        }
    }
    else{
        printf("Eu odeio a professora!\n");
    }
    
    return 0;
}