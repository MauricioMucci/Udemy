#include<stdio.h>

int main(int argc, char const *argv[])
{
    int posicao;
    float h = 0, i;

    printf("Informe a posicao: ");
        scanf("%d", &posicao);

   for (i = 1; i <= posicao; i++)
   {
       h += 1 / i;
   }

   printf("%.2f\n", h);

    return 0;
}