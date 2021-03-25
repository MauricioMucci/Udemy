#include <stdio.h>

int main(int argc, char const *argv[])
{
    int var1 = 30 , var2 = 20, *pont1, *pont2;

    pont1 = &var1;
    pont2 = &var2;

    if (pont1 > pont2)
    {
        printf("Memoria da variavel 1 e maior\n%p\n%p\n", &var1, &var2);
    } else
    {
        printf("Memoria da variavel 2 e maior\n%p\n%p\n", &var2, &var1);
    }
     

    return 0;
}