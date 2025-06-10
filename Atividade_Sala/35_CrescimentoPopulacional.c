#include <stdio.h>

int main(){
    
    int t, pa, pb, i, anos = 0;
    float  ga, gb, crescimentoa,crescimentob;
    
    printf("Numero de Teste: ");
    scanf("%i", &t);
    while (t < 1 || t > 3000)
    {
        printf("Numero de Teste: ");
        scanf("%i", &t);
    }
    

    for (i = 0; i < t; i++)
    {
        printf("Populacao A: ");
        scanf("%i", &pa);
        while (pa < 100 || pa > 1000000)
    {
        printf("Populacao A: ");
        scanf("%i", &pa);
    }

        printf("Populacao B: ");
        scanf("%i", &pb);
        while (pb < 100 || pb > 1000000 || pb <= pa)
    {
        printf("Populacao B: ");
        scanf("%i", &pb);
    }

        printf("Crescimento Populacional A: ");
        scanf("%f", &ga);
        while (ga < 0.1 || ga > 10)
        {
            printf("Crescimento Populacional A: ");
            scanf("%f", &ga);
        }
        
        printf("Crescimento Populacional B: ");
        scanf("%f", &gb);
        while (gb < 0 || gb > 10 || gb > ga)
        {
            printf("Crescimento Populacional B: ");
            scanf("%f", &gb);
        }



        anos = 0;
        while (pb >= pa)
        {
            pa += (int)(pa * ga/100);
            pb += (int)(pb * gb/100);
            anos ++;
            if (anos >= 100)
            {
                printf("Mais de 1 seculo\n");
                break;
            }
            
        }

        if (anos < 100)
        {
            printf("%i anos\n", anos);
        }
        
    }
    

}