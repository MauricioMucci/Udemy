#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, numero[5], maior, menor, posicao_maior, posicao_menor;

    for(i = 0; i < 5; i++)
    {
        printf("Informe o numero %d: ", i);
            scanf("%d", &numero[i]);
        if (i == 0)
        {
            maior = numero[i];
            menor = numero[i];
            posicao_maior = i + 1;
            posicao_menor = i + 1;
        }
        else
        {
            if (numero[i] > maior)
            {
                maior = numero[i];
                posicao_maior = i +1;
            }
            else
            {
                if (numero[i] < menor)
                {
                    menor = numero[i];
                    posicao_menor = i + 1;
                }
                
            }
        }
  
    }

    printf("Posicao do Maior = %d | Posicao do Menor = %d\n", posicao_maior, posicao_menor);

    return 0;
}