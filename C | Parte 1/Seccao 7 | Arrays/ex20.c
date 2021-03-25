#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[10], m = 0, aux_array[m];

    printf("Type numbers from 0 to 50:\n");
    for (int i = 0; i < 10; i++)
    {
        do
        {
            printf("%d. number is: ", i + 1);
                scanf("%d", &array[i]);
        } while ((array[i] < 0) || (array[i] > 50));
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            aux_array[m] = array[i];
            m++;
        }
    }

    printf("Odd numbers only array: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", aux_array[i]);
    }
    
    printf("\n");
    
    return 0;
}