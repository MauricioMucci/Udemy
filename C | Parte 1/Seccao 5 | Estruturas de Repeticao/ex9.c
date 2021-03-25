#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numero, i = 0;

    printf("Informe um numero inteiro: ");
        scanf("%d", &numero);

    while(i < numero)
    {
        printf("%d\n", i);
        i++;
    }   
    return 0;
}
