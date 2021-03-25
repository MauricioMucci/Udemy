#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4], i, j, counter = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("[%d][%d] = ", i, j);
                scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] > 10)
            { 
                counter++;
            }
        }
    }
    
    printf("Total: %d\n", counter);


    return 0;
}