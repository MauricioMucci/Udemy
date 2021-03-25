#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct st_class
{
    char name[30], id[10];
    float exam1, exam2, exam3, average;
} Class;


int main(int argc, char const *argv[])
{
    int number_of_students;

    printf("Type the number of student's info to be informed: ");
        scanf("%d", &number_of_students);
    
    Class students[number_of_students];

    for (int i = 0; i < number_of_students; i++)
    {
        setbuf(stdin,NULL);
        printf("\t\tStudent #%d\n", (i + 1));
        printf("Name: ");
            fgets(students[i].name,30,stdin);
        printf("ID (***-***): ");
            fgets(students[i].id,10,stdin);
        printf("Grade #1: ");
            scanf("%f", &students[i].exam1);
        printf("Grade #2: ");
            scanf("%f", &students[i].exam2);
        printf("Grade #3: ");
            scanf("%f", &students[i].exam3);
        
        students[i].average = (students[i].exam1 + students[i].exam2 + students[i].exam3) / 3;

    }

    int greatest_grade, greatest_average, lowest_average;
    char greatest_grade_name[30], greatest_average_name[30], lowest_average_name[30];

    for (int i = 0; i < number_of_students; i++)
    {
        if (i == 0)
        {
            greatest_grade = students[i].exam1;
            greatest_average = students[i].exam1;
            lowest_average = students[i].exam1;
            strcpy(greatest_grade_name,students[i].name);
            strcpy(greatest_average_name,students[i].name);
            strcpy(lowest_average_name,students[i].name);
            
        } else
        {
            if (students[i].exam1 > greatest_grade) 
            {
                greatest_grade = students[i].exam1;
                strcpy(greatest_grade_name,students[i].name);
            }
            if (students[i].average > greatest_average)
            {
                greatest_average = students[i].average;
                strcpy(greatest_average_name,students[i].name);
            } 
            if (students[i].average < lowest_average)
            {
                lowest_average = students[i].exam1;
                strcpy(lowest_average_name,students[i].name);
            }
        }  
    }
    
    system("clear");

    printf("Student with the greatest grade in the first exam is: %s", greatest_grade_name);
    printf("Student with the greatest average grade is: %s", greatest_average_name);
    printf("Student with the lowest average grade is: %s", lowest_average_name);

    for (int i = 0; i < number_of_students; i++)
    {
        if (students[i].average >= 6)
        {
            printf("%s has passed\n", strtok(students[i].name,"\n"));
        } else
        {
            printf("%s flunked\n", strtok(students[i].name,"\n"));
        }
    }

    return 0;
}