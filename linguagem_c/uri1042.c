#include <stdio.h>

int main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c){
        printf("%d\n%d\n%d\n", a, b, c);
    }
    else if(c < a && a < b){
        printf("%d\n%d\n%d\n", c, a, b);
    }
    else if(b < c && c < a){
        printf("%d\n%d\n%d\n", b, c, a);
    }
    else if(b < a && a < c){
        printf("%d\n%d\n%d\n", b, a, c);
    }
    else if (a < c && c < b){
        printf("%d\n%d\n%d\n", a, c, b);
    }
    else if(c < b && b < a){
        printf("%d\n%d\n%d\n", c, b, a);
    }
    else if(a == b && a > c){
    	printf("%d\n%d\n%d\n", c, b, a);
    }
    else if(b == c && b > a){
    	printf("%d\n%d\n%d\n", a, b, c);
    }
    else if(a == c && a > b){
    	printf("%d\n%d\n%d\n", b, c, a);
    }
    else if(a == b && a < c){
        printf("%d\n%d\n%d\n", a, b, c);
    }
    else if(b == c && b < a){
        printf("%d\n%d\n%d\n", c, b, a);
    }
    else if(a == c && a < b){
        printf("%d\n%d\n%d\n", a, c, b);
    }
    else if(a == b && b == c){
    	printf("%d\n%d\n%d\n", a, c, b);
    }


    printf("\n");

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}