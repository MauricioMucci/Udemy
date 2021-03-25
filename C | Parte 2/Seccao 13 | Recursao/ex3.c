#include <stdio.h>
#include <math.h>

int cubes(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    return pow(n,3) + cubes(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;

    printf("What's the value of N?\n");
        scanf("%d", &n);

    printf("Result = %d\n", cubes(n));

    return 0;
}
