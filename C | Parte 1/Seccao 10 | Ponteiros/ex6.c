#include <stdio.h>
#include <math.h>

void soma_do_dobro();

int main(int argc, char const *argv[])
{
    int a, b, soma;

    printf("Insira o valor de a: ");
        scanf("%d", &a);

    printf("Insira o valor de b: ");
        scanf("%d", &b);

    printf("Valor de a: %d\nValor de b: %d\n", a, b);

    soma_do_dobro(&a,&b);

    printf("Valor de a: %d\nValor de b: %d\n", a, b);

    printf("Soma = %d\n", soma = a + b);

    return 0;
}

void soma_do_dobro(int *A, int *B)
{
    *A = pow(*A, 2);
    *B = pow(*B, 2);
}