#include <stdio.h>

int main(){

	char uri[50] = "AMO FAZER EXERCICIO NO URI";

	printf("<%s>\n", uri);
	printf("<%30s>\n", uri);
	printf("<%.20s>\n", uri);
	printf("<%-20s>\n", uri);
	printf("<%-30s>\n", uri);
	printf("<%.30s>\n", uri);
	printf("<%30.20s>\n", uri);
	printf("<%-30.20s>\n", uri);



	return 0;
}
