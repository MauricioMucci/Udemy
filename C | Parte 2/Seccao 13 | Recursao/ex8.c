#include <stdio.h>

void natural_decrescente(int n);

int main(int argc, char const *argv[])
{
    int n;

    printf("N = ");
        scanf("%d", &n);

    natural_decrescente(n);
    printf("\n");   

    return 0;
}

void natural_decrescente(int n)
{
    if (n == 0)
    {
        printf("%d", n);
        return;
    }
    
    printf("%d ", n);
    n--;
    natural_decrescente(n);
}