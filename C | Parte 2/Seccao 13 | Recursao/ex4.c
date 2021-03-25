#include <stdio.h>

int to_the_power(int k, int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    return k * to_the_power(k,n - 1);
}

int main(int argc, char const *argv[])
{
    int k, n;

    printf("What's the value of the base?\n");
        scanf("%d", &k);
    printf("What's the value of the exponent?\n");
        scanf("%d", &n);

    printf("%d^%d = %d\n", k, n, to_the_power(k,n));

    return 0;
}