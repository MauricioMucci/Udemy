#include <stdio.h>
#include <stdlib.h>

void copia_arquivo();

int main(int argc, char const *argv[])
{
    FILE *file1, *file2;

    if ((file1 = fopen("arq.txt","r")) == NULL)
    {
        printf("Unable to access the requested file!\n");
        getchar();
        return 0;
    }

    file2 = fopen("arq4.txt", "w");

    copia_arquivo(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void copia_arquivo(FILE *file1, FILE *file2)
{
    char read_file[1000];

    while (fgets(read_file,1000,file1))
    {
        fputs(read_file, file2);
    }
}