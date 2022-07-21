#include <stdio.h>

int main() {

    int numero, horas;
    float valor, salario;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &valor);

    salario = (float) horas * valor;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}
