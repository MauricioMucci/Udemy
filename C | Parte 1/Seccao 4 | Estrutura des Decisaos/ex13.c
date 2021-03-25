#include<stdio.h>

int main(int argc, char const *argv[])
{
    float grades[3], sum = 0, average;

    for (int i = 0; i < 3; i++)
    {
        printf("Type grade #%d: ", i);
            scanf("%f", &grades[i]);
        if ((i == 0) || (i == 1))
        {
            sum += grades[i] * 1;
        }
        else
        {
            sum += grades[i] * 2;
        }      
    }

    average = sum/4;

    printf("The student's average is: %.2f\n", average);

    if (average > 6)
    {
        printf("Approved\n");
    }
    else
    {
        printf("Flunked\n");
    }
    
    
    return 0;
}
