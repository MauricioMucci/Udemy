#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int array[5],choice;

    printf("What's the code?\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    while (1)
    {
        do
        {
            printf("--Choose between the following--\n");
            printf("0. Exit\n");
            printf("1. Normal array\n");
            printf("2. Inverted array\n");
                scanf("%d", &choice);
        } while ((choice < 0) || (choice > 2));
        
        switch (choice)
        {
        case 0:
            system("clear");
            return 0;
        case 1:
            system("clear");
            for (int i = 0; i < 5; i++)
            {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        case 2:
            system("clear");
            for (int i = 4; i >= 0; i--)
            {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        }    
    }
}
