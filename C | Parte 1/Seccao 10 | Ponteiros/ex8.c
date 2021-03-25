#include <stdio.h>

int main(int argc, char const *argv[])
{
    float array[10], *pointer;

    int counter = 0;

    pointer = array;

   do
   {
    printf("%ld\n", (long int) pointer);
    pointer++;
    counter++;
   } while (counter < 10);
   

    return 0;
}
