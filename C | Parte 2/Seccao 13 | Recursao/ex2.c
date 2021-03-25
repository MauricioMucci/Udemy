#include <stdio.h>

int factorial(int n)
{ 
    if (n == 1)
    {
        return 1;
    }
    
    return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;

    printf("What's the number to be factored?\n");
        scanf("%d", &n);

    printf("%d! = %d\n", n, factorial(n));

    return 0;
}
