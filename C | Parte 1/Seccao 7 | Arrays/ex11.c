#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[10], numero_de_negativos = 0, soma_dos_positivos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o numero da posicao %d: ", i);
            scanf("%d", &vetor[i]);

        if (vetor[i] < 0)
        {
            numero_de_negativos++;
        }
        else
        {
            soma_dos_positivos += vetor[i];
        }
    }
    
    printf("NUMERO DE NEGATIVOS: %d | SOMA DOS POSITIVOS: %d\n", numero_de_negativos, soma_dos_positivos);

    return 0;
}