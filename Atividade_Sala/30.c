#include <stdio.h>

int main(){

    float n1,n2,media;


    scanf("%f", &n1);
    while (n1 > 10 || n1 < 0 )
    {
        printf("nota invalida\n");
        scanf("%f", &n1);
    }

    n2 = n1;

    scanf("%f", &n1);
    while (n1 > 10 || n1 < 0 )
    {
        printf("nota invalida\n");
        scanf("%f", &n1);
    }
    media = (n1 + n2)/2;

    printf("media = %.2f", media);  
}