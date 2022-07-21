#include <stdio.h>

int main() {

    int i = 0;
    char letra = 'A', alfabeto[26];

    while(i < 26){
        alfabeto[i] = letra;
        i++;
        letra++;
    }

    scanf("%c", &letra);

    for(i = 0; i < 26; i++){
        if(letra == alfabeto[i]){
            printf("%d\n", i + 1);
        }
    }


    return 0;
}
