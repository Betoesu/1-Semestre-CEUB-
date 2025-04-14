#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main(){
    float salario, perc_reajuste, reajuste, n_salario;

    scanf("%f", &salario);
    
    if(salario > 0 && salario <= 400){
        perc_reajuste = 15;
        n_salario = salario + (salario * (perc_reajuste/100));
        reajuste = n_salario - salario;
    }
    else if(salario > 400 && salario <= 800){
        perc_reajuste = 12;
        n_salario = salario + (salario * (perc_reajuste/100));
        reajuste = n_salario - salario;
    }
    else if(salario > 800 && salario <= 1200){
        perc_reajuste = 10;
        n_salario = salario + (salario * (perc_reajuste/100));
        reajuste = n_salario - salario;
    }
    else if(salario > 1200 && salario <= 2000){
        perc_reajuste = 7;
        n_salario = salario + (salario * (perc_reajuste/100));
        reajuste = n_salario - salario;
    }
    else if(salario > 2000){
        perc_reajuste = 4;
        n_salario = salario + (salario * (perc_reajuste/100));
        reajuste = n_salario - salario;
    }
        printf("Novo salario: %.2f\n", n_salario);
        printf("Reajuste Ganho: %.2f\n", reajuste);
        printf("Em percentual: %.2f por cento", perc_reajuste);

}