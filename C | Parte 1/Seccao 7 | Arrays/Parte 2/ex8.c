#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int matriz[3][3], i, j, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
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
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j)
            {
                sum1 += matriz[i][j];
            }
            else
            {
                if(i == j)
                {
                    sum2 += matriz[i][j];
                }
                else
                {
                    if (i > j)
                    {
                        sum3 += matriz[i][j];
                    } 
                }  
            }
        }
    }
    
    printf("Acima = %d\n", sum1);
    printf("Principal = %d\n", sum2);
    printf("Abaixo = %d\n", sum3);

    return 0;
}