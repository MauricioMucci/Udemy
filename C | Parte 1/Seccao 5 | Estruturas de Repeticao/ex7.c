#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, numeros, soma = 0, media;

    for(i = 0; i < 10; i++)
    {
         printf("Informe um numero: ");
            scanf("%d", &numeros);
        if (numeros > 0)
        {
            soma += numeros;
        }
    }

    media = soma / 10;

    printf("Media = %d\n", media);

    return 0;
}
