#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main()
{
    int n, x[n], num, menor_num = 1001, posicao = 0;

    scanf("%i", &n);

    while (n < 1 || n > 1000)
    {
        scanf("%i", &n);
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &num);
        x[i] = num;
        if (menor_num > num)
        {
            menor_num = num;
            posicao = i;
        }
    }

    printf("Menor valor: %i\n", menor_num);
    printf("Posicao: %i", posicao);

    return 0;
}