#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor_de_pares[6];

    for (int i = 0; i < 6; i++)
    {
        do
        {
            printf("Informe o valor da posicao %d: ", i);
                scanf("%d", &vetor_de_pares[i]);
        } while (vetor_de_pares[i] % 2 != 0);
        
    }

    for (int i = 5; i >=0; i--)
    {
        printf("%d\n", vetor_de_pares[i]);
    }
    
    return 0;
}
