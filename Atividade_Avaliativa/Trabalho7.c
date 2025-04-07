#include <stdio.h>//Pedro Carolino Barreto Sarmento   RA:22501994
#include <math.h>                   

int main(){
    int n100, n50, n20, n10, n5, n2, m1, m05,m025, m010, m005, m001;
    float valor;

    scanf("%f" , &valor);  

    printf("NOTAS:\n");

    n100 = valor/100;
    printf("%i nota(s) de R$100,00\n", n100);
    valor = valor - n100*100;

    

    n50 = valor/50;
    printf("%i nota(s) de R$50,00\n", n50);
    valor = valor - n50*50;

   

    n20 = valor/20;
    printf("%i nota(s) de R$20,00\n", n20);
    valor = valor - n20*20;

   

    n10 = valor/10;
    printf("%i nota(s) de R$10,00\n", n10);
    valor = valor - n10*10;

   

    n5 = valor/5;
    printf("%i nota(s) de R$5,00\n", n5);
    valor = valor - n5*5;

    

    n2 = valor/2;
    printf("%i nota(s) de R$2,00\n", n2);
    valor = valor - n2*2;

    printf("MOEDAS:\n");

    m1 = valor;
    printf("%i moeda(s) de R$1,00\n", m1);
    valor = valor - m1;

    

    m05 = valor/0.5;
    printf("%i moeda(s) de R$0,50\n", m05);
    valor = valor - m05*0.5;

    

    m025 = valor/0.25;
    printf("%i moeda(s) de R$0,25\n", m025);
    valor = valor - m025*0.25;

    

    m010 = valor/0.1;
    printf("%i moeda(s) de R$0,10\n", m010);
    valor = valor - m010*0.1;

    

    m005 = valor/0.05;
    printf("%i moeda(s) de R$0,05\n", m005);
    valor = (valor - m005*0.05);


    
    m001 = round(valor/0.01);
    printf("%i moeda(s) de R$0,01\n", m001);
    valor = valor - m001*0.01;

    
    
}