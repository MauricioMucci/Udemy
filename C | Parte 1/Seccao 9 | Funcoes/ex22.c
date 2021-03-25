#include <stdio.h>

void exclamacao(int quantidade)
{
    int i, j, k = 1, matriz[quantidade][k]; 
   
    for (i = 0; i < quantidade; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("!");
        }
        k++;
        printf("\n");
        if (k == quantidade + 1)
        {
            break;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int numero_de_linhas;

    printf("Insira o numero de linhas: "); 
        scanf("%d", &numero_de_linhas);

    exclamacao(numero_de_linhas);

    return 0;
}