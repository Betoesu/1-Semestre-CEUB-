#include <stdio.h>

int main(){
    int codigo1, numero_pecas,codigo2;
    float valor_peca, valor_total;
    valor_total = 0;
    
    scanf("%i %i %f" , &codigo1, &numero_pecas, &valor_peca);

    valor_total += (numero_pecas * valor_peca);

    scanf("%i %i %f" , &codigo2, &numero_pecas, &valor_peca);

    valor_total += (numero_pecas * valor_peca);

    printf("VALOR A PAGAR: R$%.2f", valor_total);
    return (0);
}