#include <stdio.h>

int main()
{
    int MAX;

    printf("What's the total number of grades?\n");
        scanf("%d", &MAX);

    float grades[MAX], average, sum = 0;
    int i;

    for (i = 0; i < MAX; i++)
    {
        printf("Type grade # %d: ", i);
            scanf("%f", &grades[i]);
        sum += grades[i];
    }
    
    average = sum/MAX;

    for (i = 0; i < MAX; i++)
    {
       printf("Grade # %d is %.2f\n", i, grades[i]);
    }

    printf("The student's average is %.2f\n", average);

    return 0;
}