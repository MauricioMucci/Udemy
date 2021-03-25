#include <stdio.h>

int main(int argc, char const *argv[])
{
    float matriz[3][3], *pointer;

    int counter = 0;

    pointer = &matriz[0][0];

   do
   {
    printf("%ld\n", (long int) pointer);
    pointer++;
    counter++;
   } while (counter < 10);
   
    return 0;
}
