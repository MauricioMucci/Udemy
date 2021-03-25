#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, numero[10], maior, menor;
    
    for(i = 0; i < 10; i++)
    {
        printf("Informe o numero %d: ", i);
            scanf("%d", &numero[i]);
        if (i == 0)
        {
           maior = numero[i];
           menor = numero[i];
        }
        else
        {
            if (numero[i] > maior)
            {
                maior = numero[i];
            }
            else
            {
                if (numero[i] < menor)
                {
                    menor = numero[i];
                }
                
            }
        }
  
    }

    printf("Maior = %d | Menor = %d\n", maior, menor);

    return 0;
}