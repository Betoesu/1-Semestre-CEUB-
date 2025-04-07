#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main(){
    float a, b, c, perimetro, area;
    scanf("%f %f %f", &a, &b, &c);

    perimetro = (a+b+c);
    area = ((a+b)*c)/2;

    if(a >= (b + c)){
        printf("Area = %.1f", area);
    }

    else{
        printf("Perimetro = %.1f", perimetro);
    }
}