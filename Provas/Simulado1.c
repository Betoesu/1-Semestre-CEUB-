#include <stdio.h>

int main(){
    int chute;


    printf("Advinhe um numero entre 1 a 100: ");
    scanf("%i", &chute);
   do
    {
        if (chute > 100 || chute < 1)
        {
            printf("O numero esta entre 1 e 100\n");
        }

        else if (chute > 42)
        {
            printf("Seu chute esta acima do numero correto\n");
        }
        else if (chute < 42)
        {
            printf("Seu chute esta abaixo do numero correto\n");
        }
       
        printf("Voce errou, tente novamente: ");
        sc  
    } while (chute != 42);

    printf("Voce acertou, o numero e 42");
}