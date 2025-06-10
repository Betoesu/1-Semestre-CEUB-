#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main()
{
    int n, i = 0, par[5], impar[5], vp = 0, vi = 0;

    while(i < 15)
    {
        scanf("%i", &n);

        if (n % 2 == 0)
        {
            par[vp] = n;
            vp++;
            if (vp == 5)
            {
                for (int j = 0; j < 5; j++)
                    printf("par[%i] = %i\n", j, par[j]);
                vp = 0;
            }
        }
        else
        {
            impar[vi] = n;
            vi++;
            if (vi == 5)
            {
                for (int j = 0; j < 5; j++)
                    printf("impar[%i] = %i\n", j, impar[j]);
                vi = 0;
            }
        }
        i++;
    }


    for (int j = 0; j < vi; j++)
        printf("impar[%i] = %i\n", j, impar[j]);

    for (int j = 0; j < vp; j++)
        printf("par[%i] = %i\n", j, par[j]);

    return 0;
}
