#include <stdio.h>
#include <stdlib.h>

void copia_arquivo();

int main(int argc, char const *argv[])
{
    FILE *file1, *file2;

   file1 = fopen("original.txt","w");

   fprintf(file1,"Hello World!\n");

   fclose(file1);
    

    if ((file1 = fopen("original.txt","r")) == NULL)
    {
        printf("Unable to access the requested file!\n");
        exit(1);
    }

    file2 = fopen("copia.txt", "w");

    copia_arquivo(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void copia_arquivo(FILE *file1, FILE *file2)
{
    char read_file[50];

    while (fgets(read_file,50,file1))
    {
        fputs(read_file, file2);
    }
}