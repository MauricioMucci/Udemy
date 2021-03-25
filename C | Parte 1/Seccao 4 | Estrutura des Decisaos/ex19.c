#include<stdio.h>

int main(int argc, char const *argv[])
{
    int integer;

    printf("Type an integer:\n");
        scanf("%d", &integer);
    
    if((integer%3 == 0) && (integer%5 != 0))
    {
        printf("The number is divisible by 3, but not by 5!/n");
    }
    else
    {
        if ((integer%5 == 0) && (integer%3 != 0))
        {
             printf("The number is divisible by 5, but not by 3!\n");
        }
    }

    return 0;
}