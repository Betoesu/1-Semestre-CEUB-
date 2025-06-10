#include <stdio.h> //Pedro Carolino Barreto Sarmento   RA:22501994

int main()
{
    int igol, ggol, novo_grenal,inter,gremio,empate, n_jogos;

    novo_grenal = 1;
    inter = 0;
    gremio = 0;
    empate = 0;
    n_jogos = 0;

    while (novo_grenal == 1)
    {
        scanf("%i %i", &igol, &ggol);
        if (igol > ggol)
        {
            inter += 1;
        }

        else if (ggol > igol)
        {
            gremio += 1;
        }

        else
        {
            empate += 1;
        }
        
        printf("Novo grenal (1-sim 2-nao): ");
        scanf("%i", &novo_grenal);
        n_jogos += 1;
    }

    printf("%i grenais\n",n_jogos);
    printf("Inter: %i\n", inter);
    printf("Gremio: %i\n", gremio);
    printf("Empates: %i\n", empate);
    if (inter > gremio)
    {
        printf("Inter venceu mais");
    }

    else if (gremio > inter)
    {
        printf("Gremio venceu mais");
    }
    
    else
    {
        printf("Empate");
    }
}