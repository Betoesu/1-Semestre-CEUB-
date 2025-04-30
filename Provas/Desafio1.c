#include <stdio.h>

int main(){
    int operator, n1,n2, valor;
    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    printf("Digite 1 para +, 2 para -, 3 para *, 4 para / : ");
    scanf("%i", &operator);

    switch (operator)
    {
    case 1:
        valor = n1 + n2;
        printf("%i", valor);
        break;
    case 2:
        valor = n1 - n2;
        printf("%i", valor);
        break;
    case 3:
        valor = n1 * n2;
        printf("%i", valor);
        break;
    case 4:
        if ((n2 == 0))
        {
            printf("Impossivel de Realizar divisao por 0");
        }

        else{ 
            valor = n1 / n2;
            printf("%i", valor);
        }
        
        break;
    
    default:
        break;
    }



}