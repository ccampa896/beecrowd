#include <stdio.h>
#include <math.h>

int main() {

    int a, b, divisao, resto;
    float q, r;

    scanf("%d %d", &a, &b);

    if(a < 0 && b > 0){
        q = (float)a / (float)b;
        q = floor(q);
        r = (float)a - ((float)b * q);
        printf("%.0f %.0f\n", q, r);
    }
    else if(a < 0 && b < 0){
    	q = (float)a / (float)b;
		q = ceil(q);
		r = (float)a - ((float)b * q);
		printf("%.0f %.0f\n", q, r);
    }
    else{
        divisao = a / b;
        resto = a % b;
        printf("%d %d\n", divisao, resto);
    }



    return 0;
}
