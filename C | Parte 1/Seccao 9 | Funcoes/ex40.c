#include <stdio.h>

int even_counter(int array[], int size)
{
    int k = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            k++;
        }
    }

    return k;
}

int main(int argc, char const *argv[])
{
    int size, counter;

    printf("Set a size for your array: ");
        scanf("%d", &size);

    int array[size];

    printf("Type %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    counter = even_counter(array, size);

    printf("The total number of even numbers is: %d\n", counter);
    
    return 0;
}
