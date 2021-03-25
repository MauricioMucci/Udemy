#include<stdio.h>

int main(int argc, char const *argv[])
{
    int soma, A[6] = { 1, 0, 5, -2, -5, 7 };

    soma = A[0] +A[1] +A[5];

    printf("SOMA = %d\n", soma);

    A[3] = 100;

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}
