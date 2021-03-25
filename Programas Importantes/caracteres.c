#include<stdio.h>

int main(int argc, char const *argv[])
{
    char alfabeto_minusculo[26], alfabeto_maiusculo[26];
    int i, j = 0;

    //preenchendo o vetor
    for (i = 97; i < 123; i++)
    {
        alfabeto_minusculo[j] = i;
        j++;
    }
    //imprimindo o vetor de caracteres
    for (i = 0; i < 26; i++)
    {
        printf("%c ", alfabeto_minusculo[i]);
    }

    j = 0;

    printf("\n");

    for (i = 65; i < 91; i++)
    {
        alfabeto_maiusculo[j] = i;
        j++;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c ", alfabeto_maiusculo[i]);
    }

    printf("\n");

    return 0;
}
