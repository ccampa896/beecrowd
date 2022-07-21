#include <stdio.h>

int main() {

    float salario, reajuste, novo_salario;
    int percentual;

    scanf("%f", &salario);

    if(salario <= 400.0){
        reajuste = salario * 0.15;
        percentual = 15;
        novo_salario = salario * 1.15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d \%\n", novo_salario, reajuste, percentual);
    }
    else if((400.0 < salario) && (salario <= 800.0)){
        reajuste = salario * 0.12;
        percentual = 12;
        novo_salario = salario * 1.12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d \%\n", novo_salario, reajuste, percentual);
    }
    else if((800.0 < salario) && (salario <= 1200.0)){
        reajuste = salario * 0.10;
        percentual = 10;
        novo_salario = salario * 1.10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d \%\n", novo_salario, reajuste, percentual);
    }
    else if((1200.0 < salario) && (salario <= 2000.0)){
        reajuste = salario * 0.07;
        percentual = 7;
        novo_salario = salario * 1.07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d \%\n", novo_salario, reajuste, percentual);
    }
    else if(2000.0 < salario){
        reajuste = salario * 0.04;
        percentual = 4;
        novo_salario = salario * 1.04;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d \%\n", novo_salario, reajuste, percentual);
    }

    return 0;
}
