#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10], b[10], c[10];

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
            scanf("%d", &a[i]);
        printf("b[%d] = ", i);
            scanf("%d", &b[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
        {
            c[i] = a[i] - b[i];
        }
        else
        {
            c[i] = b[i] - a[i];
        }   
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", c[i]);
    }
    printf("\n");

    return 0;
}
