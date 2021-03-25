#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[5] = {1, 2, 3, 4, 5}, *pointer, counter = 0;

    pointer = array;

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            counter++;
        }
    }

    int i = 0;
    do
    {  
        printf("%d\n", *pointer);
        pointer += 2;
        i++;
    } while (i < counter);

    return 0;
}
