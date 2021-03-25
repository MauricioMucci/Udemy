#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int find_lowest(int array[], int tam);

int main(int argc, char const *argv[])
{
    int array[TAM], number;
    time_t t;

    srand((unsigned) time(&t));

    for (int i = 0; i < TAM; i++)
    {
        array[i] = rand() % 51;
    }

 
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");


    printf("%d\n", number = find_lowest(array,TAM));
    return 0;
}

int find_lowest(int array[], int tam)
{
    int number;

    if (tam == 1)
    {
        return array[0];
    }
    
    number = find_lowest(array + 1,tam - 1);

    return (array[0] < number) ? array[0] : number; 
}