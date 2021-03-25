#include <stdio.h>

int main()
{
    int number;

    printf("Type an odd number:\n");

   do{
        scanf("%d", &number);

    } while(number%2 != 1);

    printf("\nThe odd number is %d\n", number);

    return 0;
}