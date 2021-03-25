#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[20], division_counter = 1, prime_counter = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("array[%d] = ", i);
            scanf("%d", &array[i]);
    }

    for (int i = 0; i < 20; i++)
    {
       while (1)
       {
           if (division_counter == array[i])
           {
               break;
           }
           if (array[i] % division_counter == 0)
           {
               prime_counter++;
           }
           
           division_counter++;
           
       }

       division_counter = 1;

       if ((array[i] != 1) && (prime_counter < 2))
       {
           printf("%d is a prime number and it's position is %d\n", array[i], i);
       }

       prime_counter = 0;
       
       
    }

    return 0;
}