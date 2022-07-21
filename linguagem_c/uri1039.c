#include <stdio.h>
#include <math.h>

int main() {

    int r1, x1, y1, r2, x2, y2;

    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF){
        if(x1 == x2 && y1 == y2){
            if(r1 >= r2){
                printf("RICO\n");
            }
            else{
                printf("MORTO\n");
            }
        }

        else if(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) < r2 * r2){
            if(r1 >= sqrt((x1 - x2) * (x1 - x2) + ((y1 - y2) * (y1 - y2))) + r2){
            	printf("RICO\n");
            }
            else{
            	printf("MORTO\n");
            }
        }

        else if(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) == r2 * r2){
        	if(r1 >= 2 * r2){
        		printf("RICO\n");
        	}
        	else{
        		printf("MORTO\n");
        	}
        }

        else if(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)) > r2 * r2){
                    if(r1 >= sqrt((x1 - x2) * (x1 - x2) + ((y1 - y2) * (y1 - y2))) + r2){
                    	printf("RICO\n");
                    }
                    else{
                    	printf("MORTO\n");
                    }
                }



    }


    return 0;
}
