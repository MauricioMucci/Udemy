#include <stdio.h>

int somatorio(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    return n + somatorio(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;

    printf("What's the value of N?\n");
        scanf("%d", &n);

    printf("%d\n", somatorio(n));

    return 0;
}
