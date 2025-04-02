#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main(){
    int n100, n50, n20, n10, n5, n2;
    float m1, m05,m025,m010,m005,m001, valor;

    scanf("%f" , &valor);  

    n100 = valor/100;
    printf("%i\n", n100);
    valor = valor - n100*100;

    n50 = valor/50;
    printf("%i\n", n50);
    valor = valor - n50*50;

    n20 = valor/20;
    printf("%i\n", n20);
    valor = valor - n20*20;

    n10 = valor/10;
    printf("%i\n", n10);
    valor = valor - n10*10;

    n5 = valor/5;
    printf("%i\n", n5);
    valor = valor - n5*5;

    n2 = valor/2;
    printf("%i\n", n2);
    valor = valor - n2*2;

    m1 = valor;
    printf("%f\n", m1);
    valor = valor - m1;





}