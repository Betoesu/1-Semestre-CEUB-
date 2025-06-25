#include <stdio.h>
#include <string.h>

int main()
{
    int num_alunos, maior_aluno;
    char nome[30][100];
    float soma = 0, maior_nota = -1;
    
    
    
    printf("Quantos alunos serao cadastrados: ");
    scanf("%i", &num_alunos);
    while (num_alunos > 30 || num_alunos < 1)
    {
        printf("Por favor cadastre no minimo 1 aluno e no maximo 30 alunos: ");
        scanf("%i", &num_alunos);
    }

    float notas[num_alunos];
    
    for (int i = 0; i < num_alunos; i++)
    {
        printf("Nome do aluno %i: " , i + 1);
        scanf("%99s", nome[i]);
        printf("Nota do aluno %i: ", i + 1);
        scanf("%f", &notas[i]);
        if (notas[i] > maior_nota)
        {
            maior_nota = notas[i];
            maior_aluno = i;
        }
        
        soma += notas[i];
        
    }

    printf("A media das notas: %.2f\n", (soma/num_alunos));
    printf("O aluno com a maior nota foi: %s", nome[maior_aluno]);
    


    
}