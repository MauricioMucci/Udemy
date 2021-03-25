#include <stdio.h> 

int main(int argc, char const *argv[])
{
    int matriz[4][4], i , j, maior, menor, linha[2], coluna[2];

     for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("[%d][%d] = ", i, j);
                scanf("%d", &matriz[i][j]);
            if ((i == 0) && (j == 0))
            {
                maior = matriz[i][j];
                menor = matriz[i][j];
                linha[0] = i;
                coluna[0] = j;
                linha[1] = i;
                coluna[1] = j;
            }
            else
            {
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    linha[0] = i;
                    coluna[0] = j;
                }
                else
                {
                    if (matriz[i][j] < menor)
                    {
                        menor = matriz[i][j];
                        linha[1] = i;
                        coluna[1] = j;
                    }
                }
            }  
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Maior = %d || Menor = %d\n", maior, menor);

    for (i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            printf("Maior[%d][%d]\n", linha[i], coluna[i]);
        }
        else
        {
            printf("Menor[%d][%d]\n", linha[i], coluna[i]);
        }
        
        
    }
    


    
    return 0;
}