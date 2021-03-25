#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, soma = 0;

    while (i < 51)
    {
        soma += i;
        i += 2;
    }
    
    printf("Soma = %d\n", soma);

    return 0;
}