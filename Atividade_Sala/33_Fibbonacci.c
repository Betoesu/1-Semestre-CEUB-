#include <stdio.h>

int main()
{
    int vezes, n1, n2, aux, i;
    n1 = 0;
    n2 = 1;
    aux = 0;
    scanf("%i", &vezes);
    while (vezes < 0 || vezes > 46)
    {
        printf("You typed the wrong command, try again: ");
        scanf("%i", &vezes);
    }
    
    printf("%i ", n1);
    printf("%i ", n2);
    for (i = 2; i < vezes; i++)
    {
        aux = n1 + n2;
        printf("%i ", aux);
        n1 = n2;
        n2 = aux;
}
}