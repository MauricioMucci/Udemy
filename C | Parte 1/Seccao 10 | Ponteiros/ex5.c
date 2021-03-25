#include <stdio.h>

void maior();

int main(int argc, char const *argv[])
{
    int valor1, valor2;

    printf("Digite um valor para valor1: ");
        scanf("%d", &valor1);

    printf("Digite um valor para valor2: ");
        scanf("%d", &valor2);

    printf("valor 1 = %d\nvalor 2 = %d\n", valor1, valor2);

    maior(&valor1,&valor2);

    printf("valor 1 = %d\nvalor 2 = %d\n", valor1, valor2);
    return 0;
}

void maior(int *v1, int *v2)
{
    int aux;

    if(*v2 > *v1)
    {
        aux = *v1;
        *v1 = *v2;
        *v2 = aux;
    }
}