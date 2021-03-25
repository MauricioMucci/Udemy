#include <stdio.h>

int ordenacao();

int main(int argc, char const *argv[])
{
    int a, b, c, resposta;

    printf("Insira o valor de a, b, c: ");
        scanf("%d%d%d", &a, &b, &c);

    printf("A = %d\nB = %d\nC = %d\n", a, b, c);

    resposta = ordenacao(&a,&b,&c);

    if (resposta == 0)
    {
        printf("A = %d\nB = %d\nC = %d\n", a, b, c);
    } else
    {
        printf("Todos os numeros sao iguais\n");
    }
    
    return 0;
}

int ordenacao(int *A, int *B, int *C)
{
    int aux;

    if ((*A == *B) && (*B == *C))
    {
        return 1;
    } else
    {
        if ((*A > *B) && (*B > *C))
        {
            return 0;
        } else
        {
            if ((*A < *B) && (*A > *C))
            {
              aux = *A;
              *A = *B;
              *B = *A;  
            } else
            {
                if ((*A < *C) && (*B > *A))
                {
                    aux = *A;
                    *A = *C;
                    *C = aux;
                } else
                {
                    if ((*A < *C) && (*A > *B))
                    {
                        aux = *A;
                        *A = *C;
                        *C = aux;
                        *C = *B;
                        *B = aux;
                    }
                }
            }
        }
        return 0;
    }
}