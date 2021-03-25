#include <stdio.h>
#include <math.h>

int main()
{
    float numbers[3], sum = 0, sum_of_squares;
    int i;

    printf("Type 3 numbers:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    sum_of_squares = pow(sum, 2);

    printf("Sum of squares = %.2f\n", sum_of_squares);

    return 0;
}