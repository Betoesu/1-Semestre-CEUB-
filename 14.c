#include <stdio.h>
#include <stdbool.h>

int main(){
    int A, B, C, D;

    scanf("%i %i %i %i" , &A, &B, &C, &D);

    if ((B > C) && (D > A) && (C + D) > (A + B) && (C && D >= 0) && (A%2 == 0))
    {
        printf("Valores Aceitos");
    }
    else{
        printf("Valores Nao Aceitos");
    }

}