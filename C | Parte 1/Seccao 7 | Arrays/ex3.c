#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a[5], b[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o valor %d: ", i);
            scanf("%f", &a[i]);

        b[i] = pow(a[i], 2);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%f ", b[i]);
    }
    
    printf("\n");

    return 0;
}