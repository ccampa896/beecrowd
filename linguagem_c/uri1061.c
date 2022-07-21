#include <stdio.h>


int main(){

	int Di, Hi, Mi, Si, Df, Hf, Mf, Sf, Dr, Hr, Mr, Sr;
	char dia[5], ponto[5];

	scanf("%s %d", dia, &Di);
	scanf("%d %s %d %s %d", &Hi, ponto, &Mi, ponto, &Si);
	scanf("%s %d", dia, &Df);
	scanf("%d %s %d %s %d", &Hf, ponto, &Mf, ponto, &Sf);



		if((Df >= Di) && (Hf >= Hi) && (Mf > Mi) && (Sf >= Si)){
				Dr = Df - Di;
				Hr = Hf - Hi;
				Mr = Mf - Mi;
				Sr = Sf - Si;
		}
		else if((Df >= Di) && (Hf > Hi) && (Mf >= Mi) && (Sf >= Si)){
				Dr = Df - Di;
				Hr = Hf - Hi;
				Mr = Mf - Mi;
				Sr = Sf - Si;
		}
		else if((Df > Di) && (Hf >= Hi) && (Mf >= Mi) && (Sf >= Si)){
				Dr = Df - Di;
				Hr = Hf - Hi;
				Mr = Mf - Mi;
				Sr = Sf - Si;
		}
		else if((Df > Di) && (Hf > Hi) && (Mf > Mi) && (Sf < Si)){
				Dr = Df - Di;
				Hr = Hf - Hi;
				Mr = Mf - 1 - Mi;
				Sr = Sf + 60 - Si;
			}
		else if((Df > Di) && (Hf > Hi) && (Mf < Mi) && (Sf >= Si)){
				Dr = Df - Di;
				Hr = Hf - 1 - Hi;
				Mr = Mf + 60 - Mi;
				Sr = Sf - Si;
		}
		else if((Df > Di) && (Hf < Hi) && (Mf >= Mi) && (Sf >= Si)){
				Dr = Df - 1 - Di;
				Hr = Hf +24 - Hi;
				Mr = Mf - Mi;
				Sr = Sf - Si;
		}
		else if((Df > Di) && (Hf > Hi) && (Mf < Mi) && (Sf < Si)){
				Dr = Df - Di;
				Hr = Hf - 1 - Hi;
				Mr = Mf + 59 - Mi;
				Sr = Sf +60 - Si;
		}
		else if((Df > Di) && (Hf < Hi) && (Mf < Mi) && (Sf < Si)){
				Dr = Df - 1 - Di;
				Hr = Hf + 23 - Hi;
				Mr = Mf + 59 - Mi;
				Sr = Sf + 60 - Si;
		}

		printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", Dr, Hr, Mr, Sr);
	return 0;
}
