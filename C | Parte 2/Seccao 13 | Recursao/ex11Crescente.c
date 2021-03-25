#include <stdio.h>

void printa_vetor(int array[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }
    
    printf("%d ", array[i]);
    i++;
    printa_vetor(array,i,tam);
}

int main(int argc, char const *argv[])
{
    int *p, *p2, tam, array[] = {0,1,2,3,4,5,6,7,8,9};
    int i = 0;
    tam = sizeof(array)/sizeof(array[0]);

    p = &tam;
    p2 = &i;

    printa_vetor(array,*p2,*p);
    printf("\n");

    return 0;
}