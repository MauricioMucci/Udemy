#include <stdio.h>

typedef struct st_info
{
    char name[30], address[50];
    int age;
} info;

int main(int argc, char const *argv[])
{
    int number_of_people;

    printf("What's the number of people in this research?\n");
        scanf("%d", &number_of_people);

    info person[number_of_people];

    for (int i = 0; i < number_of_people; i++)
    {
        setbuf(stdin,NULL);
        printf("\t\tPerson #%d\n", (i +1));
        printf("Name: ");
            fgets(person[i].name,30,stdin);
        printf("Address: ");
            fgets(person[i].address,30,stdin);
        printf("Age: ");
            scanf("%d", &person[i].age);
    }
    
    for (int i = 0; i < number_of_people; i++)
    {
        printf("\t\tPerson #%d\n", (i +1));
        printf("Name: %s", person[i].name);
        printf("Address: %s", person[i].address);
        printf("Age: %d\n", person[i].age);
    }
    

    return 0;
}