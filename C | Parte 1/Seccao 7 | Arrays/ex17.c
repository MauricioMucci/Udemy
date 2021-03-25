#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[10];

    //scanning
    for (int i = 0; i < 10; i++)
    {
        printf("array[%d]: ", i);
            scanf("%d", &array[i]);
    }

    //replacing negative number for zero
    for (int i = 0; i < 10; i++)
    {
        if (array[i] < 0)
        {
            array[i] = 0;
        }
    }

    //printing
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}