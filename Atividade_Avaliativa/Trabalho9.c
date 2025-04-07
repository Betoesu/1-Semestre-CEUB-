#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main(){
    float n1, n2, n3, n4, media, n_exame, media_final;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/10;
    printf("Media: %.1f\n", media);

    if (media >= 7.0){
        
        printf("Aluno aprovado.\n");

    }

     else if(media < 5.0){
        
        printf("Aluno Reprovado.\n");

     }
    
     else{
        printf("Aluno em exame\n");
        scanf("%f", &n_exame);
        printf("Nota do exame:  %.1f\n", n_exame);

        media_final = ((n_exame + media)/2);

        if(media_final >= 5){
            
            printf("Aluno Aprovado.\n");

        }

        else{

            printf("Aluno Reprovado.\n");

        }
        
        printf("Final de media: %.1f", media_final);
     }




}