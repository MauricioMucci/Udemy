#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string1[20], string2[20];

    printf("Escreva: ");
        scanf(" %[^\n]", string1);
        getchar();
     printf("Escreva: ");
        scanf(" %[^\n]", string2);
        getchar();

    char *pointer1, *pointer2;

    pointer1 = string1;
    pointer2 = string2;

    int x;

    for (int i = 0; i < strlen(string1); i++)
    {
        if (*pointer2 != *pointer1)
        {
            printf("Sao diferentes!\n");
            x = 1;
            break;
        }       
        pointer1++;
        pointer2++;
    }

    if (x != 1)
    {
        printf("Sao iguais!\n");
    }
    
    
    return 0;
}
