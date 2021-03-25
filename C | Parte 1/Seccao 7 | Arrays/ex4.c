#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[8], posicoes[2], soma = 0, k, i, j;

    for (i = 0; i < 8; i++)
    {
        vetor[i] = k;
        k++;
        printf("Valor da posicao %d: %d\n", i, vetor[i]);
        
    }
    
    for (i = 0; i < 2; i++)
    {
        printf("Escolha a posicao %d: ", i);
            scanf("%d", &posicoes[i]);
    }
    
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == posicoes[j])
            {
                soma += vetor[i];
            }
        } 
    }
    
    printf("SOMA = %d\n", soma);

    return 0;
}