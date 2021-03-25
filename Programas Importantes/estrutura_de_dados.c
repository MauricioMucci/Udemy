#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
#include "lib.h"



int main(int argc, char const *argv[])
{
    Company list[MAX];

    int choice;

    create_list(list);

    for (;;)
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            new_register(list);
            break;
        case 2:
            unregister(list);
            break;
        case 3:
            print(list);
            break;
        case 4:
            archive(list);
            break;
        case 5:
            load();
            break;
        case 6:
            exit (0);
            break;
        }
    }

    return 0;
}