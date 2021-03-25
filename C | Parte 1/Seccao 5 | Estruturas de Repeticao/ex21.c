#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, numeros, maior, menor;

    for(i = 0; i < 2; i++)
    {
        printf("Insert a number: ");
            scanf("%d", &numeros);

        if (i == 0)
        {
            maior = numeros;
            menor = numeros;
        }
        else
        {
            if (numeros > maior)
            {
                maior = numeros;
            }
            else
            {
                if (numeros < menor)
                {
                    menor = numeros;
                }
            }
        }   
    }

    int sum = 0, mult = 1;

    for (i = menor; i <= maior; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        else
        {
            mult *= i;
        }
        
    }

    printf("The answer to the addition is: %d\n", sum);
    printf("The answer to the multiplication is: %d\n", mult);

    return 0;
}