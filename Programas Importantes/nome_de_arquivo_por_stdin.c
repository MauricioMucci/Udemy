#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void muda_arquivo();

int main(int argc, char const *argv[])
{
    FILE *file, *file2;
    
    char nome_do_arquivo[100], nome_do_arquivo2[100];

    printf("What's the name of the file you would like to change?\n");
        setbuf(stdin, NULL);
        fgets(nome_do_arquivo,100,stdin);
    
    if ((file = fopen(strtok(nome_do_arquivo,"\n"),"r")) == NULL)
    {
        printf("Unable to access the requested file!\n");
        getchar();
        return 0;
    }

    printf("What's the name of the new file ?\n");
        setbuf(stdin, NULL);
        fgets(nome_do_arquivo2,100,stdin);

    
    file2 = fopen(strtok(nome_do_arquivo2,"\n"),"w");

    muda_arquivo(file,file2);

    fclose(file);
    fclose(file2);

    return 0;
    
}

void muda_arquivo(FILE *file, FILE *file2)
{
    char read_file[1000];

    while (fgets(read_file,1000,file) != NULL)
    {
        for (int i = 0; i < 1000; i++)
        {
            if (isalpha(read_file[i]))
            {
                read_file[i] = toupper(read_file[i]);
            }
            
        }
        fputs(read_file, file2);
    }
}