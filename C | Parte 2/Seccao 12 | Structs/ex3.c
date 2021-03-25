#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct st_class
{
    char name[30], field_of_study[30], id[10];
} Class;


int main(int argc, char const *argv[])
{
    int number_of_students;

    printf("How many students will be enrolled?\n");
        scanf("%d", &number_of_students);

    Class students[number_of_students];

    for (int i = 0; i < number_of_students; i++)
    {
        setbuf(stdin,NULL);
        printf("Name: ");
            fgets(students[i].name,30,stdin);
        printf("ID (***-***): ");
            fgets(students[i].id,10,stdin);
        printf("Field of study: ");
            fgets(students[i].field_of_study,30,stdin);
    }

    printf("Type the number of student's info to be printed: ");
        scanf("%d", &number_of_students);

    for (int i = 0; i < number_of_students; i++)
    {
        printf("\t\tStudent #%d\n", (i + 1));
        puts(strtok(students[i].name,"\n"));
        puts(strtok(students[i].id,"\n"));
        puts(strtok(students[i].field_of_study,"\n"));
        printf("\n");
    }
    
    return 0;
}