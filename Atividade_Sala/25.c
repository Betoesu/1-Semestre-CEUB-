#include <stdio.h>

int main(){

    int quant_vezes, i, j;
    float valor, media;


    scanf("%i", &quant_vezes);

    float array[quant_vezes];

    for(i = 0; i < quant_vezes; i++){
        for(j = 0; j < 3 ; j++){
            scanf("%f", &valor);
            if(j == 1){
                valor *= 2; 
            }
            
            else if(j == 2){
                valor *= 3;
            }

            else if(j == 3){
                valor *= 5;
            }

            media += valor; // media = media + valor. 1°  media == 13. 2° media == 13 + 12.9. 3° media == 13 + 12.9 + 31

        }

        media = media/10;
        array[i] = media;
        media = 0;
        valor = 0;
        
    }
    
    for(i = 0; i < quant_vezes; i++)
    {
        printf("%.1f\n", array[i]);
    }
}