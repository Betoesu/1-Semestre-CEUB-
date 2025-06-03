#include <stdio.h>
#include <math.h>

int main(){
    float a, b,c, somabc, somabc2;


    scanf("%f %f %f", &a,&b,&c);
    somabc = b + c;
    somabc2 = pow(b,2) + pow(c,2);

    if(a >= somabc){
        printf("NAO FORMA TRIANGULO\n");
    }

    else if ((pow(a,2)) == somabc2)
    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if ((pow(a,2)) > somabc2)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    
    else if ((pow(a,2)) < somabc2)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && b == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    else if((a == b) && (c!= b) || (a == c) && (c != b) || (b == c) && (c != a))
    {
        printf("TRIANGULO ISOCELES\n");
    }
    

}