#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, numero[10], maior, posicao;

    for(i = 0; i < 10; i++)
    {
        printf("Informe o numero %d: ", i);
            scanf("%d", &numero[i]);
        if (i == 0)
        {
           maior = numero[i];
        }
        else
        {
            if (numero[i] > maior)
            {
                maior = numero[i];
                posicao = i + 1;
            }
        }
    }

    printf("Maior = %d | Posicao = %d\n", maior, posicao);

    return 0;
}