#include <stdio.h>

int main(int argc, char const *argv[])
{
    float notas[15], soma = 0, media;

    for (int i = 0; i < 15; i++)
    {
        printf("Nota do aluno %d: ", i);
            scanf("%f", &notas[i]);

        soma += notas[i];
    }
    
    media = soma / 15;

    printf("MEDIA = %.2f\n", media);

    return 0;
}