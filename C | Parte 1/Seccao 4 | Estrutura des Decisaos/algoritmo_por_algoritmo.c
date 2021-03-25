#include<stdio.h>

/*
    NUMERO        RESTO
     251            1
     25,1           5
     2,5            2
     0,2            0

     O QUE SE PODE OBSERVAR EH Q INTEIRO NAO RECEBE FLOAT
*/


int main(int argc, char const *argv[])
{
    int number, result = 0;

    printf("Type a number greater than zero:\n");
        scanf("%d", &number);

    if (number > 0)
    {
        while (number > 0)
        {
            result += number%10;
            number = number/10;
        }
        
        printf("The sum is equal to %d\n", result);
    }
    else
    {
        printf("Invalid number\n");
    }
    
    
    return 0;
}