#include <stdio.h>

int main(){
    int n, x, y, impar, i, j, g, troca;



    impar = 0;
    scanf("%i", &n);

    for(i=0; i < n; i++){
        scanf("%i %i", &x , &y);
    

        if (y > x)  // x sendo o menor
        {
            for(j = x + 1; j < y; j++){
                if (j % 2 != 0)
                {
                    impar += j;
                }
                
            }
        }

        

        else if (x > y)
        {
            troca = x;
            x = y;
            y = troca;
           for(g = x + 1; g < y; g++){
                if (g % 2 != 0)
                {
                    impar += g;
                }
                
            }
        }
       printf("%i\n", impar);
       impar = 0;
    }
    
}