#include <stdio.h>

int main(){

    int code, quant;
    float valor, preco[] = {4, 4.5, 5, 2, 1.5};

    printf("Qual o codigo do produto? ");
    scanf("%i", &code);

    printf("Quantos voce deseja? " );
    scanf("%i", &quant);

    valor = preco[code -1] * quant;

    printf("Total: R$ %.2f", valor);
    
}