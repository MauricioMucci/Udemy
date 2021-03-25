#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, numero[5], maior, menor, soma = 0, media;

    for(i = 0; i < 5; i++)
    {
        printf("Informe o numero %d: ", i);
            scanf("%d", &numero[i]);
        if (i == 0)
        {
           maior = numero[i];
           menor = numero[i];
        }
        else
        {
            if (numero[i] > maior)
            {
                maior = numero[i];
            }
            else
            {
                if (numero[i] < menor)
                {
                    menor = numero[i];
                }
            }
        }

        soma += numero[i];
    }

    media = soma / 5;

    printf("Maior = %d | Menor = %d | Media = %d\n", maior, menor, media);

    return 0;
}