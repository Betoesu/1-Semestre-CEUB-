#include <stdio.h>

int main(){
    int ano, mes, idade;

    scanf("%i", &idade);
    ano = idade/365;
    idade = idade - ano * 365;
    mes = idade/30;
    idade = idade - mes * 30;
    
    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", idade);
   

    
    



}