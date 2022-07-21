#include <stdio.h>

int main() {

    int teste, i, total, Tc = 0, Tr = 0, Ts = 0, Tt;
    float Pc, Pr, Ps;
    char tipo;

    scanf("%d", &teste);
	for(i = 0; i < teste; i++){
		scanf("%d %c", &Tt, &tipo);
		if(Tt <= 15 && Tt >=1){
			if(tipo == 'C'){
				Tc += Tt;
			}
			else if(tipo == 'R'){
				Tr += Tt;
			}
			else if(tipo == 'S'){
				Ts += Tt;
			}
		}
	}

        total = Tc + Tr + Ts;

        Pc = ((float)Tc / (float)total) * 100.0;
        Pr = ((float)Tr / (float)total) * 100.0;
        Ps = ((float)Ts / (float)total) * 100.0;

        printf("Total: %d cobaias\n", total);
        printf("Total de coelhos: %d\n", Tc);
        printf("Total de ratos: %d\n", Tr);
        printf("Total de sapos: %d\n", Ts);
        printf("Percentual de coelhos: %.2f %\n", Pc);
        printf("Percentual de ratos: %.2f %\n", Pr);
        printf("Percentual de sapos: %.2f %\n", Ps);


    return 0;
}
