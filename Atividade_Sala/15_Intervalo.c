#include <stdio.h>
#include <stdbool.h>

int main (){
    float numero;

    scanf("%f" , &numero);
    if ((numero <= 100) && (numero >= 0))  
    {
       if (numero > 0 && numero < 25){
            printf("[0,25]");
       }


       else if (numero >= 25 && numero < 50){
            printf("(25,50]");
       }
    

       else if (numero >= 50 && numero < 75){
            printf("(50,75]");
       }


       else if (numero >= 75 && numero <= 100){
        printf("(75,100]");
        }

    else {
        printf("Fora de Intervalo");
    }
  }
}