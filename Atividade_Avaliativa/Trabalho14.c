#include <stdio.h>

int main(){

    int n, cont, posicao, maior;
    
    cont = 0;


    while (cont < 5)
    {
        scanf("%i", &n);

        if (cont == 0)
        {
            maior = n;
            posicao = 0;
        }
        
        else if (n > maior)
        {
            maior = n;
            posicao = cont;
        }
        


        cont++;
    }
    printf("%i\n", maior);
    printf("%i", posicao + 1);

}