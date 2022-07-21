#include <stdio.h>
 
int main() {
 
    int i;
    char pipe = '|';
    
    for(i = 0; i < 39; i++){
        if(i == 38){
            printf("-\n");
        }
        else{
            printf("-");
        }
    }
    
    for(i = 0; i < 5; i++){
        printf("%c%38c\n", pipe, pipe);
    }
    
    for(i = 0; i < 39; i++){
        if(i == 38){
            printf("-\n");
        }
        else{
            printf("-");
        }
    }
 
    return 0;
}