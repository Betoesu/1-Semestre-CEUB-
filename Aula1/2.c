#include <stdio.h> 

int main() {
    int a, b, c;     
    printf("What year are you at: ");
    scanf("%i", &a); // i para inteiro e & para chamar variavel
    printf("What year were you born: ");
    scanf("%i" , &b);
    c = a - b; 
    printf ("%i",c);
}