#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    if (n == 1)
    {
        return 1;
    }
    
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char const *argv[])
{
    int n;

    printf("N equals?\n");
        scanf("%d", &n);

    printf("%d\n", fib(n));
    
    return 0;
}