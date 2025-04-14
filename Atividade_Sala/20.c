#include <stdio.h>
#include <math.h>
int main(){
    int h_inicio, h_fim, duracao;
    printf("Horario de Inicio: ");
    scanf("%i", &h_inicio);
    printf("Horario de Fim: ");
    scanf("%i", &h_fim);

        if (h_fim > h_inicio){
            duracao = h_fim - h_inicio;
        }

        else if(h_fim < h_inicio){
            duracao = (h_fim + 24) - h_inicio ;
        }

        else{
            duracao = 24;
        }
        printf("O JOGO DUROU %i HORA(S)", duracao);
}
