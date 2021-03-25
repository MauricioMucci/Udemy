#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, numero, maior, menor;

    for(i = 0; i < 10; i++)
    {
        printf("Informe um numero: ");
            scanf("%d", &numero);
       if (i == 0)
       {
           maior = numero;
           menor = numero;
       }
       else
       {
           if (numero > maior)
           {
               maior = numero;
           }
           else
           {
               if (numero < menor)
               {
                   menor = numero;
               }
               
           }
       }
    }

    printf("Maior = %d | Menor = %d\n", maior, menor);

    return 0;
}