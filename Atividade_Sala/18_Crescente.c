#include <stdio.h>

int main(){
    int x, y, z;
    
    scanf("%i %i %i", &x, &y, &z);
    printf("\n");

    if(x > y && y > z){
        printf("%i\n %i\n %i\n", z, y, x);
    }

    else if(y > z && z > x){
        printf("%i\n %i\n %i\n", x, z, y);
    }

    else if(z > x && x > y){
        printf("%i\n %i\n %i\n", y, x, z);
    }

    else if(x > z && z > y){
        printf("%i\n %i\n %i\n", y, z, x);
    }
    
    else if(y > x && x > z){
        printf("%i\n %i\n %i\n", z, x, y);
    }

    else if(z > y && y > x){
        printf("%i\n %i\n %i\n", x, y, z);
    }


    printf("\n");
    printf("%i\n %i\n %i\n", x, y, z);
}