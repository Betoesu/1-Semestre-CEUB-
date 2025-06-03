#include <stdio.h>

int main(){

    int senha;

    scanf("%i", &senha);

    while (2002 != senha)
    {
        printf("Senha invalida\n");
        scanf("%i", &senha);
    }

    printf("Senha valida");

    
}