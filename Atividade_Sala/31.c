#include <stdio.h>

int main()
{

    int escolha, gas, alcool,diesel;

    gas = 0;
    alcool = 0;
    diesel = 0;

    while (escolha != 4)
    {
        scanf("%i", &escolha);

        if (escolha == 1)
        {
           alcool += 1;
        }

        else if (escolha == 2)
        {
            gas += 1;
        }
        
        else if (escolha == 3)
        {
            diesel += 1;
        }
        
        
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", alcool);
    printf("Gasolina: %i\n", gas);
    printf("Diesel: %i\n", diesel);
}