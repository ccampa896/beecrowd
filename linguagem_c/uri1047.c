#include <stdio.h>

int main() {

    int Hi, Hf, Mi, Mf, Hr, Mr;

    scanf("%d %d %d %d", &Hi, &Mi, &Hf, &Mf);

	if((Hf >= Hi) && (Mf > Mi)){
		Hr = Hf - Hi;
		Mr = Mf - Mi;
	}
	if((Hf > Hi) && (Mf >= Mi)){
			Hr = Hf - Hi;
			Mr = Mf - Mi;
	}
	else if((Hf > Hi) && (Mf < Mi)){
		Hr = Hf -1 - Hi;
		Mr = Mf + 60 - Mi;
	}
	else if((Hf < Hi) && (Mf < Mi)){
		Hr = Hf + 23 - Hi;
		Mr = Mf + 60 - Mi;
	}
	else if((Hf == Hi) && (Mf < Mi)){
			Hr = 23;
			Mr = Mf + 60 - Mi;
		}
	else if((Hf < Hi) && (Mf == Mi)){
		Hr = Hf + 24 - Hi;
		Mr = Mf - Mi;
	}
   	else if((Hf == Hi) && (Mf == Mi)){
   		Hr = 24;
   		Mr = Mf - Mi;
   	}
   	else if((Hf == Hi + 1) && (Mf < Mi)){
   		Hr = 0;
   		Mr = Mf + 60 - Mi;
   	}

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", Hr, Mr);



    return 0;
}
