#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 2, numero, algarismo[3];

    do
    {
        printf("Insert a number between 100 and 999:\n");
            scanf("%d", &numero);
    } while ((numero < 100) || (numero > 999));
    

    while (numero > 0)
    {
        algarismo[i] = numero%10;
        numero = numero /10;
        i--;
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d ", algarismo[i]);
    }
    
    printf("\n");

    return 0;
}
