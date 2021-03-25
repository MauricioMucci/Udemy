#include <stdio.h>

int dobro(int x)
{
    int dobro_eh;

    dobro_eh = x * 2;

    return dobro_eh;
}

int main(int argc, char const *argv[])
{
    int numero, retorno;

    printf("Informe um numero: ");
        scanf("%d", &numero);

    retorno = dobro(numero);

    printf("O dobro de %d eh %d\n", numero, retorno);

    return 0;
}