#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main()
{
    float n, lista[100];

    scanf("%f", &n);
    for (int i = 0; i < 100; i++)
    {
        lista[i] = n;
        printf("N[%i] = %.4f\n", i, n);
        n = n/2;
    }
    
}