#include <stdio.h>

int multip_rec(int a, int b)
{
    if (b == 1)
    {
        return a;
    }

    return a + multip_rec(a,b - 1);
}

int main(int argc, char const *argv[])
{
    int a, b;

    printf("A = ");
        scanf("%d",&a);
    printf("B = ");
        scanf("%d",&b);

    printf("%d * %d = %d\n",a,b,multip_rec(a,b));

    return 0;
}
