#include <stdio.h>

void printa_vetor(int array[], int tam)
{
    if (tam == -1)
    {
        return;
    }
    
    printf("%d ", array[tam]);
    
    printa_vetor(array,tam - 1);
}

int main(int argc, char const *argv[])
{
    int *p, tam, array[] = {0,1,2,3,4,5,6,7,8,9};

    tam = sizeof(array)/sizeof(array[0]);

    p = &tam;

    printa_vetor(array,*p - 1);
    printf("\n");

    return 0;
}