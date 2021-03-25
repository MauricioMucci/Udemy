#include<stdio.h>

int main(int argc, char const *argv[])
{
    int multiplos = 3, i, resultado;

    for (i = 0; i < 5; i++)
    {
        resultado = multiplos * i;
        printf("%d * 3 = %d\n", i, resultado);
    }
    
    return 0;
}