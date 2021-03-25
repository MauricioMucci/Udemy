#include <stdio.h>

int main()
{
    int numbers[2], i, result;

    printf("Type two numbers:\n");
    for (i = 0; i < 2; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    if (numbers[0] > numbers[1])
    {
        printf("%d is greater than %d\n", numbers[0], numbers[1]);
        result = numbers[0] - numbers[1];
        printf("The difference between %d and %d is %d\n", numbers[0], numbers[1], result);
    }
    else
    {
        if (numbers[0] == numbers[1])
        {
            printf("Same number!\n");
        }
        else
        {
            printf("%d is greater than %d\n", numbers[1], numbers[0]);      
            result = numbers[1] - numbers[0]; 
            printf("The difference between %d and %d is %d\n", numbers[1], numbers[0], result);
        }
    }    
    return 0;
}