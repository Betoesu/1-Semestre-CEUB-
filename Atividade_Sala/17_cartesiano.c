#include <stdio.h>
#include <stdbool.h>

int main(){
    float x,y;

    printf("X: ");
    scanf("%f", &x);

    printf("Y: ");
    scanf("%f", &y);


    if(x > 0 && y > 0){
        printf("Primeiro Quadrante");
    }

    else if(x < 0 && y > 0){
        printf("Segundo Quadrante");
    }

    else if(x < 0 && y < 0){
        printf("Terceiro Quadrante");
    }

    else if(x > 0 && y < 0){
        printf("Quarto Quadrante");
    }

    else if(x != 0 && y == 0){
        printf("Eixo X");
    }

    else if(x == 0 && y != 0){
        printf("Eixo Y");
    }

    else if(x == 0 && y == 0){
        printf("Origem");
    }



}