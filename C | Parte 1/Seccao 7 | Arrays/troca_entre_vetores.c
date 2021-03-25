#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10], b[10], c[20], count1 = 0, count2 = 1;

    for (int i = 0; i < 10; i++)
    {
        printf("a[%d] = ", i);
            scanf("%d", &a[i]);
        printf("b[%d] = ", i);
            scanf("%d", &b[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        c[count1] = a[i];
        c[count2] = b[i];

        count1 += 2;
        count2 += 2;
    }
    
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
