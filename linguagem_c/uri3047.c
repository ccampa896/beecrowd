#include <stdio.h>

int main() {

    int M, A, B, C;

    scanf("%d", &M);
    scanf("%d", &A);
    scanf("%d", &B);

    C = M - (A + B);

    if(A > B && A >= C){
        printf("%d", A);
    }
    else if(B > A && B >= C){
        printf("%d", B);
    }
    else if(C >= A && C >= B){
        printf("%d", C);
    }


    return 0;
}
