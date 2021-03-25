#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valores[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Informe os valores:\n");
            scanf("%d", &valores[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", valores[i]);
    }


    return 0;
}
