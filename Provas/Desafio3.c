#include <stdio.h>
#include <string.h>


int main() 
{
    char *senha = "estoque2025", tentativa[20],resposta[1], nome[20];
    int quantidade, cadastros = 0, i = 0;
    float preco, preco_total = 0;
    
    
    do
    {
        printf("Digite a Senha: ");
        scanf("%s", &tentativa);
        if (strcmp(senha, tentativa) == 0)
        {
            break;
        }
        if ((strcmp(senha, tentativa) != 0) && i == 2)
        {
            printf("Acesso Negado");
            return 0;
        }
        i++;
    } while(i < 3);

        do
        {
            cadastros += 1;

            printf("Nome: ");
            scanf("%s", &nome);
            


            do
            {
                printf("Quantidade: ");
                scanf("%i", &quantidade);
            } while (quantidade < 0);

            
            do
            {
                printf("Preco: ");
                scanf("%f", &preco);
            } while (preco < 0);


            do
            {
                printf("Quer continuar? [S][N]: ");
                scanf("%s", &resposta);
                if (strcmp(resposta,"S") == 0)
                {
                    break;
                }
            }while (strcmp(resposta,"N") != 0);
            
            preco_total += preco * quantidade;
            

        } while ((strcmp(resposta,"S") == 0));

        printf("%i\n", cadastros);
        printf("%.2f\n", preco_total);
  

        
}
    
