#include<stdio.h>

int main(int argc, char const *argv[])
{
    int counter = 1, sum = 0;

    while (1)
    {
        if (counter < 50)
        {
            if ((counter % 3 == 0) || (counter % 5 == 0))
            {
                sum += counter;

                if (counter == 3)
                {
                    printf("%d", counter); 
                }
                else
                {
                    printf(" + %d", counter); 
                }
            }
        }
        else
        {
            printf(" = %d\n", sum);
            return 0;
        }
    
        counter++;
    }
}