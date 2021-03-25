#include <stdio.h>
#include <math.h>

int main()
{
    int number, result, test = 0, i;

    printf("Type a number:\n");
        scanf("%d", &number);

    if (number > 0)
    {
        for (i = 2; i <= number/2; i++)
        {
            if (number%i == 0)
            {
                test++;
                break;
            }
        }
        if ((test == 0) && (number != 1))
            printf("Prime number!\n");
        else
        {
            result = sqrt(number);
            printf("The square root is %d\n", result);
        }        
    }
    else
    {
        result = pow(number, 2);
        printf("The number to the power of 2 is %d\n", result);
    }

    if (number%2 == 0)
    {
        printf("It's an even number\n");
    }
    else
    {
        printf("It's an odd number\n");
    }
   
    return 0;
}