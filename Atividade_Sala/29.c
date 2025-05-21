#include <stdio.h>

int main(){

    int x,y;

    
    while (x != y)
    {
        scanf("%i %i", &x, &y);
        
        if (x > y)
        {
            printf("Decrescente\n");
        }

        else if (y > x)
        {
            printf("Crescente\n");
        }
        
        
    
    }
    

}