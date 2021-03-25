#include <stdio.h>

int natural(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return natural(n - 1) + 2;
}

int main(int argc, char const *argv[])
{
    int n;

    printf("N equals?\n");
        scanf("%d", &n);

    for (int i = 0; i <= n/2; i++)
    {
        printf("%d ", natural(i));
    }
    printf("\n");
       
    return 0;
}