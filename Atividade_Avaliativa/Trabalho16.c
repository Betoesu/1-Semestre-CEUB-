#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994
#include <stdbool.h>

int main(){
    float x, y;

    scanf("%f %f", &x, &y);
    while (x != 0 && y != 0)
        {
            if(x > 0 && y > 0){
                printf("primeiro\n");
            }

            else if(x < 0 && y > 0){
                printf("segundo\n");
            }

            else if(x < 0 && y < 0){
                printf("terceiro\n");
            }

            else if(x > 0 && y < 0){
                printf("quarto\n");
            }

            scanf("%f %f", &x, &y);
        
        }   

        

}