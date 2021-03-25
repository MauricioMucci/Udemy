#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[5] = {1, 2, 3, 4, 5}, *pointer;

    int counter = 0;

    pointer = array;

   do
   {
    *pointer *= 2;  
    printf("%d\n", *pointer);
    pointer++;
    counter++;
   } while (counter < 5);

    return 0;
}
