#include<stdio.h>

int main(int argc, char const *argv[])
{
    int integer;

    do
    {
        printf("Type a number between 1 and 7:\n");
            scanf("%d", &integer);
        printf("\n");
    } while ((integer < 1) || (integer > 7));
    
    switch (integer)
    {
    case 1:
        printf("It's sunday\n");
        break;
    case 2:
        printf("It's monday\n");
        break;
    case 3:
        printf("It's tuesday\n");
        break;
    case 4:
        printf("It's wednesday\n");
        break;
    case 5:
        printf("It's thursday\n");
        break;
    case 6:
        printf("It's friday\n");
        break;
    case 7:
        printf("It's saturday\n");
        break;
    }

    return 0;
}
