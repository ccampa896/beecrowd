#include <stdio.h>
#include <string.h>

int main() {

    char n1[20], n2[20], n3[20];

  scanf("%s", n1);
  scanf("%s", n2);
  scanf("%s", n3);

    char a[] = "vertebrado", b[] = "ave", c[] = "carnivoro", d[] = "onivoro", e[] = "mamifero", f[] = "herbivoro", g[] = "invertebrado";
    char h[] = "inseto", i[] = "hematofago", j[] = "anelideo";


    if(strcmp(n1, a) == 0){
        if(strcmp(n2, b) == 0){
            if(strcmp(n3, c) == 0){
                printf("aguia\n");
            }
            else if(strcmp(n3, d) == 0){
                printf("pomba\n");
            }
        }else if(strcmp(n2, e) == 0){
            if(strcmp(n3, d) == 0){
                printf("homem\n");
            }
            else if(strcmp(n3, f) == 0){
                printf("vaca\n");
            }
        }
    }

    if(strcmp(n1, g) == 0){
        if(strcmp(n2, h) == 0){
            if(strcmp(n3, i) == 0){
                printf("pulga\n");
            }
            else if(strcmp(n3, f) == 0){
                printf("lagarta\n");
            }
        }
        if(strcmp(n2, j) == 0){
            if(strcmp(n3, i) == 0){
                printf("sanguessuga\n");
            }
            else if(strcmp(n3, d) == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}

