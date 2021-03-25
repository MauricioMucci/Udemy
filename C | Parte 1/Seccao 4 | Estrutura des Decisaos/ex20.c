#include<stdio.h>

int main(int argc, char const *argv[])
{
    float sides[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Type side #%d: ", i);
            scanf("%f", &sides[i]);
    }

    if ((sides[0] < sides[1] + sides[2]) && (sides[1] < sides[0] + sides[2]) && (sides[2] < sides[1] + sides[0]))
    {
        printf("It's a triangle!\n");
        if ((sides[0] == sides[1]) && (sides[0] == sides[2]))
        {
            printf("It's an equilateral triangle!\n");
        }
        else
        {
            if ((sides[0] == sides[1]) || (sides[0] == sides[2]))
            {
                printf("It's an isosceles triangle!\n");
            }
            else
            {
                printf("It's a scalene triangle!\n");
            }
        }
    }
    else
    {
        printf("It's not a triangle!\n");
    }

    return 0;
}
