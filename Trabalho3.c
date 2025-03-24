#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994
int main(){
    float volume, pi, r;
    scanf("%f" , &r);
    pi = 3.14159;
    volume = ((4.0/3.0) * pi * r * r * r);
    printf("VOLUME = %.3f", volume);
    return 0;

}