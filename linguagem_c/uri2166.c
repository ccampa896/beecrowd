#include <stdio.h>


int main(){

	double x = 0.0;
	int i, n;
	scanf("%d", &n);


	for(i = 0; i < n; i++){
		x += 2.0;
		x = (1.0 / x);
	}
	x += 1.0;


	printf("%.10lf\n", x);



	return 0;
}
