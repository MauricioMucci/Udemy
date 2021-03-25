#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, quantidade, numeros, maior;

    printf("Quantidade de numeros a serem lidos?\n");
        scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++)
    {
        printf("Informe os numeros:");
            scanf("%d", &numeros);
        if (i == 0)
        {
            maior = numeros;
        }
        else
        {
            if (numeros > maior)
            {
                maior = numeros;
            }
        }
    }
    
    i = 0;

    while (i < maior)
    {
        printf("%d\n", maior);
        i++;
    }
    
    return 0;
}