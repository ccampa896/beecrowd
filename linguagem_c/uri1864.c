#include <stdio.h>

int main() {

    char soren[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int impressao;

    scanf("%d", &impressao);

    printf("%.*s\n", impressao, soren);

    return 0;
}
