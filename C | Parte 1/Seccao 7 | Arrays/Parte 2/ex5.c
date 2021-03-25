#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[5][5], i , j, x, count = 0, linha = -1, coluna;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matriz[i][j] = count;
            count++;
        }
    }

    printf("Choose a number to be searched: ");
        scanf("%d", &x);
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (x == matriz[i][j])
            {
                linha = i;
                coluna = j;
            }
        }
    }

    if (linha == -1)
    {
        printf("Nao encontrado\n");
    }
    else
    {
        printf("Posicao[%d][%d]\n", linha, coluna);
    }
    
    
    return 0;
}