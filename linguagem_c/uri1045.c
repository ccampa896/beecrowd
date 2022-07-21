#include <stdio.h>
#include <math.h>

int main() {

	double A, B, C, a, b, c, aux;

	scanf("%lf %lf %lf", &A, &B, &C);


	if(B >= C && B >= A){
   	aux = A;
   	A = B;
   	B = aux;
	}
	else if(C >= A && C >= B) {
   	aux = A;
   	A = C;
   	C = aux;
	}

   a = pow(A,2.0);
   b = pow(B,2.0);
   c = pow(C,2.0);

   if(A >= B + C){
       printf("NAO FORMA TRIANGULO\n");
   }
   else if(a == b + c){
       printf("TRIANGULO RETANGULO\n");
   }
   else if(a > b + c){
       printf("TRIANGULO OBTUSANGULO\n");
   }
   else if(a < b + c){
       printf("TRIANGULO ACUTANGULO\n");
   }

   if(A == B && B == C){
       printf("TRIANGULO EQUILATERO\n");
   }
   else if(A == B || A == C || B == C){
       printf("TRIANGULO ISOSCELES\n");
   }

    return 0;
}
