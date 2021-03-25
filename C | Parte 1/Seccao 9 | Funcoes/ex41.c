#include <stdio.h>

int greater(int array[], int size)
{
    int number = array[0];

    for (int i = 0; i < size; i++)
    {
        if (number < array[i])
        {
            number = array[i];
        } 
    }

    return number;
}

int main(int argc, char const *argv[])
{
    int size, greater_number;

    printf("Set a size for your array: ");
        scanf("%d", &size);

    int array[size];

    printf("Type %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    greater_number = greater(array, size);

    printf("The greatest number is: %d\n", greater_number);

    return 0;
}