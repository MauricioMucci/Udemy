#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    float value, price;
    char state[2];

    printf("Insert a value:\n");
        scanf("%f", &value);
    printf("Insert one of the following: MG, SP, Rj, MS!\n");
        scanf("%s", state);

    if (strcmp(state, "MG") == 0)
    {
        price = value * 1.07;
        printf("Final price is: %.2f\n", price);
    }
    else
    {
        if (strcmp(state, "SP") == 0)
        {
            price = value * 1.12;
            printf("Final price is: %.2f\n", price);
        }
        else
        {
            if (strcmp(state, "RJ") == 0)
            {
                price = value * 1.15;
                printf("Final price is: %.2f\n", price);
            }
            else
            {
                if (strcmp(state, "MS") == 0)
                {
                    price = value * 1.08;
                    printf("Final price is: %.2f\n", price);
                }
            }
        }
    }

    return 0;
}
