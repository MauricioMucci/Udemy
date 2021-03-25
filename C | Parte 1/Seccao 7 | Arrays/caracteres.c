#include<stdio.h>

int main(int argc, char const *argv[])
{
    char letras[26];
    int i, j = 0;
    //preenchendo o vetor
    for (i = 97; i <= 122; i++)
    {
        letras[j] = i;
        j++;
    }
    //imprimindo o vetor de caracteres
    for (i = 0; i < 26; i++)
    {
        printf("%d = %c\n", letras[i], letras[i]);
    }    

    return 0;
}
