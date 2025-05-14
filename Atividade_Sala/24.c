#include <stdio.h>

int main(){

    int n, cont, resultado;

    do{
    scanf("%i", &n); 
    } while(n < 2 || n > 1000);
    
        for(cont = 1; cont <= 10; cont ++){
            resultado = cont * n;
            printf("%i x %i = %i\n", cont , n, resultado);
        }

    }
