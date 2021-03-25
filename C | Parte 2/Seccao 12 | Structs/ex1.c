#include <stdio.h>
#include <string.h>

typedef struct st_meeting
{
    char time[10];
    char date[10];
    char related_to[1000];
} Meeting;

void archive();

int main(int argc, char const *argv[])
{
    int quantity;

    printf("How many meetings will he/she have?\n");
        scanf("%d", &quantity);

    Meeting meetings[quantity];

    for (int i = 0; i < quantity; i++)
    {  
        setbuf(stdin,NULL);
        printf("Type the date of the meeting #%d as requested: **/**/**\n", (i + 1));
            fgets(meetings[i].date, 10, stdin);
        printf("Type the time of the meeting #%d as requested: **:**:**\n", (i + 1));
            fgets(meetings[i].time, 10, stdin);
        printf("Describe the meeting #%d in a thousand words or less\n", (i + 1));
            fgets(meetings[i].related_to, 1000, stdin);
    }

    printf("\n\t\t Schedule\n");
    for (int i = 0; i < quantity; i++)
    {
        printf("\t\t Meeting %d\n", (i + 1));
        puts(meetings[i].date);
        puts(meetings[i].time);
        puts(meetings[i].related_to);
    }

    Meeting *pointer;

    pointer = meetings;

    archive(quantity,pointer);

    return 0;
}

void archive(int quantity, Meeting *pointer)
{
    FILE *file;

    if ((file = fopen("meetings.txt","a")) == NULL)
    {
        printf("Unable to access the requested file!\n");
        getchar();
        return;
    }

    for (int i = 0; i < quantity; i++)
    {
        fputs(pointer[i].date, file);
        fputs(pointer[i].time, file);
        fputs(pointer[i].related_to, file);
    }
    fclose(file);
}