#include <stdio.h>
#include <math.h>

int main() {

    int tempo;
    double h, m, s, x, y, z;

    scanf("%d", &tempo);

    if (tempo < 60){
        printf("0:0:%d\n", tempo);
    }
    else if (tempo >= 60 && tempo < 3600){
        x = (double)tempo / 60;
        y = modf(x,&m);
        s = y * 60;
        printf("0:%.0lf:%.0lf\n", m, s);
    }
    else{
        x = (double)tempo / 60;
        y = modf(x,&m);
        s = y * 60;
        z = m / 60;
        y = modf(z,&h);
        m = y * 60;
        printf("%.0lf:%.0lf:%.0lf\n", h, m, s);
    }

    return 0;
}



