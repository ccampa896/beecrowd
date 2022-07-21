#include <stdio.h>

int main() {

    int idade, ano, mes, dia, aux;

    scanf("%d", &idade);

    ano = idade / 365;
    aux = idade % 365;
    mes = aux / 30;
    dia = aux % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}
