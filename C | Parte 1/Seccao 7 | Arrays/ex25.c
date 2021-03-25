#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[100];

    for (int i = 0; i < 100; i++)
    {
        if ((i % 7 != 0) && (i % 10 != 7))
        {
            array[i] = i;
        }
        else
        {
            array[i] = 0;
        }
        
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    
    return 0;
}