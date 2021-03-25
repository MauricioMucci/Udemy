#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    for(i = 0; i < 11; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    i = 10;

    while (i >= 0)
    {
        printf("%d ", i);
        i--;
    }
    
    printf("FIM!\n");

     i = 0;

     do
     {
         printf("%d ", i);
         i += 1000;
     } while (i < 100001);
     
    printf("\n");

    return 0;
}