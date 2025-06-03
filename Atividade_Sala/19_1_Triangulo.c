#include <stdio.h>
#include <math.h>

void Organizador(float *numeros){
    
    float aux;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(numeros[j] < numeros[j + 1]){
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;


            }
        }
    }
}

int main (){

    float lados[3];
    

    for(int i = 0; i < 3; i++){
        scanf("%f", &lados[i]);
    }

    Organizador(lados);

    float somabc = lados[1] + lados[2];
    float somabc2 = pow(lados[1],2) + pow(lados[2],2);
    

    if(lados[0] >= somabc){
        printf("NAO FORMA TRIANGULO\n");
    }

    else if ((pow(lados[0],2)) == somabc2)
    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if ((pow(lados[0],2)) > somabc2)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    
    else if ((pow(lados[0],2)) < somabc2)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (lados[0] == lados[1] && lados[1] == lados[2])
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    else if((lados[0] == lados[1]) ^ (lados[0] == lados[2]) ^ (lados[1] == lados[2]))
    {
        printf("TRIANGULO ISOCELES\n");
    }
    

}