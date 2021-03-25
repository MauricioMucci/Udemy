#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, numero, soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Informe um numero: ");
            scanf("%d", &numero);
        soma += numero;
    }
    
    printf("Soma = %d\n", soma);

    return 0;
}