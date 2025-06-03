#include <stdio.h>
int main() {
    double raio, pi, area; // numero com virgula double
    pi = 3.14159;
     printf("Qual o raio da circunferencia: ");
    scanf("%lf",&raio); //lf para para decimal
    area = raio*raio*pi;
    printf("A=%.4lf\n",area); // %.4 pra 4 casas decimais apos a virgula
}