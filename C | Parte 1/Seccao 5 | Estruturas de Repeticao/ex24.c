#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1, number, aux, sum = 0;
    char choice;

    printf("Insert a number: ");
        scanf("%d", &number);

    while (1)
    {
        if (number%i == 0)
        {
            aux = number / i;
            sum += i;
        }
        else
        {
            if (aux == 2)
            {
                printf("The addition between the factors is: %d\n", sum);
                return 0;
            }
        }
        i++;
    }
}
