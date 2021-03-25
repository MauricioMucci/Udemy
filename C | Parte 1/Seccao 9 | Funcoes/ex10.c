#include <stdio.h>

void grandiosidade(int x, int y)
{
    if (x > y)
    {
        printf("%d > %d\n", x, y);
    }
    else
    {
        if (x == y)
        {
            printf("%d = %d\n", x, y);
        }
        else
        {
            printf("%d > %d\n", y, x);
        }
    }
}

int main(int argc, char const *argv[])
{
    int x, y;
    
    printf("Informe o primeiro numero: ");
        scanf("%d", &x);
    printf("Informe o segundo numero: ");
        scanf("%d", &y);

    grandiosidade(x, y);

    return 0;
}