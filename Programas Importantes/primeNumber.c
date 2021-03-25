#include<stdio.h>
#include <locale.h>
 
/*
   Realizar divisoes sucessivas do numero dado por todos os numeros a partir
   do numero 2 ate a metade do numero dado, verificando o resto da divisao.
   Se o resto for 0 em algum momento, significa que houve uma divisao inteira
   por um valor diferente de 1 e do numero dado, logo ele nao eh primo. Caso 
   contrario ele eh primo.
*/

/*
   Nenhum numero eh divisivel por um numero maior que sua metade.
   Todo par, menos o numero 2, eh primo
*/

int main() {
 setlocale(LC_ALL, "");
 int num, i, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if ((resultado == 0) && (num != 1))
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo\n", num);
 
 return 0;
}