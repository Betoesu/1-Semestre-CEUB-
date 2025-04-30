#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if (idade < 12 && idade > 0)
    {
        printf("Voce eh criança");
    }

    else if((idade >= 12) && (idade <=17)){

        printf("Voce eh Adolescente");
    }

    else if((idade >= 18) && (idade <= 59)){

        printf("Voce eh Adulto");
    }

    else if((idade >= 60)){

        printf("Voce eh Idoso");
    }
    
    else{
        printf("Valide que sua idade seja maior que 0");
    }
}