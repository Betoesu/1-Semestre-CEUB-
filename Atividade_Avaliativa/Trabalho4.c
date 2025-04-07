#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main(){
    int distancia;
    float litros, kilolitro;

    scanf("%i %f", &distancia , &litros);
    kilolitro = (distancia/litros);
    printf("%.3f km/l" , kilolitro);
    return 0;
}