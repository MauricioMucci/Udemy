#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1, number, aux;
    char choice;

    printf("Insert a number: ");
        scanf("%d", &number);

    while (1)
    {
        if (number%i == 0)
        {
            printf("%d\n", i);
            aux = number / i;
        }
        else
        {
            printf("Wish to continue?\n[Y/N]: ");
                scanf(" %c", &choice);
            if (aux != 2)
            {
                 if ((choice == 'Y') || (choice == 'y'))
                {}
                else
                {                
                    return 0;
                }
            }
            else
            {
                printf("There's no other number\n");
                return 0;
            }
            
        }
        i++;
    }
}