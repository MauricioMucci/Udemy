#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a, b, c, x[2], delta;

    printf("Insert a: ");
        scanf("%d", &a);
    printf("Insert b: ");
        scanf("%d", &b);
    printf("Insert c: ");
        scanf("%d", &c);
    
    if (a != 0)
    {
        delta = pow(b,2) - 4 * a * c;
        if (delta < 0)
        {
            printf("Invalid! Delta = 0\n");
        }
        else
        {
            if (delta == 0)
            {
                for (int i = 0; i < 2; i++)
                {
                    x[i] =(-b) / 2 * a;
                    printf("X%d = %d\n", i, x[i]);
                }
            }
            else
            {
                for (int i = 0; i < 2; i++)
                {
                    if (i == 0)
                    {
                        x[i] = ((-b) + sqrt(delta)) / 2 * a;
                    }
                    else
                    {
                        x[i] = ((-b) - sqrt(delta)) / 2 * a;
                    }
                    printf("X%d = %d\n", i, x[i]); 
                }
            }
        }
    }
    else
    {
        printf("It's not a second degree equation!\n");
    }

    return 0;
}