#include <stdio.h>

void soma();

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Insira o valor de a: ");
        scanf("%d", &a);

    printf("Insira o valor de b: ");
        scanf("%d", &b);

    printf("Valor de a: %d\nValor de b: %d\n", a, b);

    soma(&a,&b);

    printf("Valor de a: %d\nValor de b: %d\n", a, b);

    return 0;
}

void soma(int *A, int *B)
{
    *A = *A + *B;
}