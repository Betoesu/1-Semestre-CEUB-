#include <stdio.h>
#include <string.h>

int main()
{
    int quant_paciente, idade, tempo_min, tempo_total = 0, maior_tempo = 0, menos_10 = 0, mais_60 = 0;
    char nome[30], nome_maior_tempo[30];
    float tempo_medio, porc;
    
    for (int i = 0; i < 1000000000; i++)
    {
        scanf("%i",&quant_paciente);
        if (quant_paciente > 0)
        {
            break;
        }
        
    }
    if (idade > 60)
    {
        mais_60 += 1;
    }
    

    for (int i = 0; i < quant_paciente; i++)
    {
        scanf("%s", &nome);
        for (int j = 0; j < 1000000000; j++)
        {
            scanf("%i", &idade);
            if (idade > 0)
            {
                break;
            }
            
        }
        if (idade >= 60)
        {
           mais_60 += 1;
        }
        
        for (int j = 0; j < 1000000000; j++)
        {
            scanf("%i", &tempo_min);
            if (tempo_min > 0)
            {
                break;
            }
            
        }
        if (tempo_min > maior_tempo)
        {
            maior_tempo = tempo_min;
            strcpy(nome_maior_tempo, nome);

        }
        
        if (tempo_min < 10)
        {
            menos_10 += 1;
        }
        

        tempo_total += tempo_min;
        
    }
    
    tempo_medio = (float) tempo_total/quant_paciente;
    porc = (float) mais_60/quant_paciente * 100;

    printf("%.2f\n", tempo_medio);
    printf("%s\n", nome_maior_tempo);
    printf("%i\n", menos_10);
    printf("%.2f %%\n", porc);



    

    
    



}