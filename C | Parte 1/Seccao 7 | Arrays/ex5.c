#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[100], k = 0, i, j = 0;

    for (i = 0; i < 100; i++)
    {
        vetor[i] = k;
        k++;
        printf("Valor da posicao %d: %d\n", i, vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            j++;    
        }
    }

    printf("Numero de pares: %d\n", j);

    return 0;
}