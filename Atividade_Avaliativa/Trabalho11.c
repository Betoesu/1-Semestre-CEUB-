#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main(){
    int a, b;

    scanf("%i %i", &a, &b);

    if (a > b)
    {
       if(a % b == 0){
        printf("Sao multiplos");
       }
       
       else{
        printf("Nao sao multiplos");
       }
    }
    
    else if(b > a){
        if (b % a == 0)
        {
            printf("Sao multiplos"); 
        }
        
        else{
            printf("Nao sao multiplos");
           }
    }
}