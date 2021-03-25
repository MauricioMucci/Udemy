#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *p;
    int tam;

    printf("Qual o tamanho do vetor?\nR: ");
        scanf("%d", &tam);

    if((p = (char*)calloc(tam,sizeof(char))) == NULL)
    {
        printf("Impossible to allocate memory!");
        exit(1);
    }

    setbuf(stdin,NULL);
    printf("Digite a string: ");
        fgets(p,tam,stdin);

    printf("%ld\n", tam * sizeof(char));

    p = (char*)realloc(p, strlen(p) * sizeof(char));

    printf("%s", p);
    printf("%ld\n", strlen(p) * sizeof(char));
    
    
    free(p);
    p = NULL;
       
    return 0;
}