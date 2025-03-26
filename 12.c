#include <stdio.h>

int main(){
    int valor1, valor, nota100,nota50, nota20, nota10, nota5, nota2, nota1;

    scanf("%i", &valor1);
    
    nota100 = valor1/100;
    valor = valor1 - (nota100 * 100);

    nota50 = valor/50;
    valor = valor - (nota50 * 50);

    nota20 = valor/20;
    valor = valor - (nota20 * 20);

    nota10 = valor/10;
    valor = valor - (nota10 * 10);

    nota5 = valor/5;
    valor = valor - (nota5 * 5);

    nota2 = valor/2;
    valor = valor - (nota2 * 2);
    
    nota1 = valor/1;
    valor = valor - (nota1);

    printf("%i\n", valor1);
    printf("%i nota(s) de R$100,00\n", nota100);
    printf("%i nota(s) de R$50,00\n", nota50);
    printf("%i nota(s) de R$20,00\n", nota20);
    printf("%i nota(s) de R$10,00\n", nota10);
    printf("%i nota(s) de R$5,00\n", nota5);
    printf("%i nota(s) de R$1,00\n", nota1);
    
}