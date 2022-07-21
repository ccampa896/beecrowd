#include <stdio.h>

int main() {

	int part, dog;
	float media;

	scanf("%d %d", &part, &dog);

	media = (float)part / (float)dog;

	printf("%.2f\n", media);

    return 0;
}
