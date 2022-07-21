#include <stdio.h>

//apoio - Clube do Hardware

int main() {
    int n;
    int caso = 1;
    while ((scanf("%d", &n) != EOF)) {
        int quant = 1;
		int c;
        for (c = 1; c <= n; c++) {
            quant += c;
        }
        printf("Caso %d: %d numero%s\n0", caso, quant, (quant > 1 ? "s" : ""));
        for (c = 1; c <= n; c++) {
			int d;
            for (d = 0; d < c; d++) {
                printf(" %d", c);
            }
        }
        caso++;
        printf("\n\n");
    }
    return 0;
}
