#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int choice, i;
    float numbers[2], result = 0, mult = 1;

    for (;;)
    {
        do
        {
            printf("\t\t--MENU--\n");
            printf("\tCHOOSE BETWEEN THE FOLLOWING:\n");
            printf("\t1. ADDITION\n");
            printf("\t2. SUBCTRATION\n");
            printf("\t3. MULTIPLICATION\n");
            printf("\t4. DIVISION\n");
            printf("\t5. EXIT\n");
                scanf("%d", &choice);
        } while ((choice < 1) || (choice > 5));

        system("clear");

        switch (choice)
        {
        case 1:
            printf("Type two numbers:\n");
            for (i = 0; i < 2; i++)
            {
                scanf("%f", &numbers[i]);
                result += numbers[i];
            }
            printf("%.2f + %.2f = %.2f\n", numbers[0], numbers[1], result);
            result = 0;
            break;
        case 2:
            printf("Type two numbers:\n");
            for (i = 0; i < 2; i++)
            {
                scanf("%f", &numbers[i]);
                if (i == 0)
                {
                    result += numbers[i];
                }
                else
                {
                    result -= numbers[i];
                }               
            }
            printf("%.2f - %.2f = %.2f\n", numbers[0], numbers[1], result);
            result = 0;
            break;
        case 3:
            printf("Type two numbers:\n");
            for (i = 0; i < 2; i++)
            {
                scanf("%f", &numbers[i]);
                mult *= numbers[i];
            }
            printf("%.2f * %.2f = %.2f\n", numbers[0], numbers[1], mult);
            mult = 1;
            break;
        case 4:
            printf("Type two numbers:\n");
            for (i = 0; i < 2; i++)
            {
                scanf("%f", &numbers[i]);
                if(i == 0)
                {
                    result = numbers[i];
                }
                else
                {
                    result = result/numbers[i];
                }
            }
            printf("%.2f / %.2f = %.2f\n", numbers[0], numbers[1], result);
            result = 0;
            break;
        case 5:
            return 0;
        }
    }
}
