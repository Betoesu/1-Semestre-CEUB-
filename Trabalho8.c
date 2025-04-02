#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994
#include <math.h>
#include <stdbool.h>


int main(){
    float A, B, C, delta, R1, R2;
    scanf("%f %f %f", &A, &B, &C);

if ((A == 0))
{
    printf("Impossivel calcular");
}

else
{
delta = pow(B,2) - 4 * A * C;

R1 = ((-B) + (sqrt(delta)))/(2*A);
R2 = ((-B) - (sqrt(delta)))/(2*A);

printf("R1 = %.5f \n", R1);
printf("R2 = %.5f", R2);
}


return 0;
}