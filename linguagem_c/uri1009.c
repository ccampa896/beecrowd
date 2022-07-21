#include <stdio.h>
#include <string.h>

int main() {

  char nome[30];
  double fixo, vendas, total;

  scanf("%s", &nome);
  scanf("%lf", &fixo);
  scanf("%lf", &vendas);

  total = fixo + (vendas * 0.15);

  printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
