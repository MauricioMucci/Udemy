#include<stdio.h>

int main(int argc, char const *argv[])
{
    int *m,n,p;

    n = 10;
    m = &n;
    p = *m;

    printf("%d %d\n", n, p);

    return 0;
}
