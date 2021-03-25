#include <stdio.h>

int verificacao(int x)
{
    if (x > 0)
    {
        return 1;
    }
    else
    {
        if (x == 0)
        {
            return 0;
        }
        else
        {
            if (x < 0)
            {
                return -1;
            }
        } 
    }
}

int main(int argc, char const *argv[])
{
    int numero, resultado;

    printf("Informe um numero: ");
        scanf("%d", &numero);

    resultado = verificacao(numero);

    if (resultado == 1)
    {
        printf("O numero eh positivo\n");
    }
    else
    {
        if (resultado == -1)
        {
            printf("O numero eh negativo\n");
        }
        else
        {
            if (resultado == 0)
            {
                printf("O numero eh nulo\n");
            }
        }
    }

    return 0;
}