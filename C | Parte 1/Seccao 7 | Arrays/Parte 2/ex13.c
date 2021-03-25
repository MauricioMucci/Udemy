#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4], i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i < j)
            {
                matriz[i][j] = (2 * i) + (7 * j) - 2;
            }
            else
            {
                if (i == j)
                {
                    matriz[i][j] = (3 * pow(i,2)) - 1;
                }
                else
                {
                    if (i > j)
                    {
                        matriz[i][j] = (4 * pow(i,3)) - (5 * pow(j,2)) + 1;
                    }
                    
                }

            }
        }
    }
    
    printf("Matriz original:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i < j)
            {
                matriz[i][j] = 0;
            }
             
        }
    }

    printf("Matriz transformada:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}