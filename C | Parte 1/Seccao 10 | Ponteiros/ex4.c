#include <stdio.h>

void troca();

int main(int argc, char const *argv[])
{
    int valor1 = 5, valor2 = 10;

    printf("valor 1 = %d\nvalor 2 = %d\n", valor1, valor2);

    troca(&valor1,&valor2);

    printf("valor 1 = %d\nvalor 2 = %d\n", valor1, valor2);

    return 0;
}

void troca(int *v1, int *v2)
{
    int aux;
    aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}