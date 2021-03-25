#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, numeros;

    do
    {
        printf("Insert a number:\n");
            scanf("%d", &numeros);
        if (numeros%2 == 0)
        {
           i++;
        }
    } while (numeros != 1000);
    
    printf("%d\n", i);

    return 0;
}
