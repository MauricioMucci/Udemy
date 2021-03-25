typedef struct st_company
{
    char name[30], gender[20], CPF[20], birthday[20], enrolled_in[30];
    int age, wage, id;
} Company;

void pause()
{
	printf("Press any key to continue!");
	getchar();
}

int menu(void)
{
    system("clear");
    int choice;
    do
    {
        printf("\t Menu \n");
        printf("1. Register new employee\n");
        printf("2. Unregister new employee\n");
        printf("3. Print\n");
        printf("4. Save\n");
        printf("5. Load list of employees\n");
        printf("6. Exit\n");
        printf("Option: ");
            scanf("%d", &choice);
    } while ((choice < 1) || (choice > 6));
    getchar();
    return choice;
}

void create_list(Company *pointer)
{
    for (int i = 0; i < MAX; i++)
        pointer[i].name[0] = '\0';
}

//verifica se o proximo registro esta livre para armazenar o próximo cadastro
int verify_space(Company *pointer)
{
    int i;

    for (i = 0; pointer[i].name[0] && i < MAX; i++)
    {
        if (i == MAX)
            return -1;
    }

    return i;
}

// faz a leitura dos dados do empregado 
void new_register(Company *pointer)
{
    system("clear");

    int position;
    position = verify_space(pointer);
    if (position == -1)
    {
        printf("No more free space!");
        return;
    }

    printf("\t Register #%d:\n", position);
    printf("Name: ");
        fgets(pointer[position].name,30,stdin);
    printf("Gender: ");
        fgets(pointer[position].gender,20,stdin);
    printf("CPF: ");
        fgets(pointer[position].CPF,20,stdin);
    printf("Birthday: ");
        fgets(pointer[position].birthday,20,stdin);
    printf("Work as: ");
        fgets(pointer[position].enrolled_in,20,stdin);
    printf("Age: ");
        scanf("%d", &pointer[position].age);
    printf("Wage: ");
        scanf("%d", &pointer[position].wage);
    printf("ID: ");
        scanf("%d", &pointer[position].id);

}

void unregister(Company *pointer)
{
    system("clear");

    int position;

    printf("Number of the register: ");
        scanf("%d", &position);
    setbuf(stdin,NULL);
    // se a posição é valida, e aquele registro existe
    if ((position >= 0) && (position < MAX) && (pointer[position].name[0] != '\0'))
    {
        printf("Unregister: %s - %d\n", pointer[position].name, pointer[position].id);
        printf("Choose between Y or N: ");

        char choice;
        choice = getchar();
        if ((choice == 'y') || (choice == 'Y'))
        {
            pointer[position].name[0] ='\0';
        } else
        {
            pause();
        }
    } else
    {
        printf("Register not found!!!\n");
        pause();
    }
}

// mostra a lista de empregados
void print(Company *pointer)
{
    system("clear");

    for (int i = 0; i < MAX; i++)
    {
        if (pointer[i].name[0] != '\0')
        {
            printf("\t Register #%d:\n", i);
            printf("Name: %s", pointer[i].name);
            printf("Gender: %s", pointer[i].gender);
            printf("CPF: %s", pointer[i].CPF);
            printf("Birthday: %s", pointer[i].birthday);
            printf("Work as: %s", pointer[i].enrolled_in);
            printf("Age: %d\n", pointer[i].age);
            printf("Wage: $%d\n", pointer[i].wage);
            printf("ID: %d\n", pointer[i].id);
        }
    }
    
    pause();
}

void archive(Company *pointer)
{
    system("clear");

    FILE *file;

    if ((file = fopen("list","w")) == NULL)
    {
        printf("Unable to access file!!!\n");
        pause();
        return;
    }  

    for (int i = 0; i < MAX; i++)
    {
        if (pointer[i].name[0] != '\0')
        {
            fprintf(file,"\t Register #%d:\n", i);
            fprintf(file,"Name: %s", pointer[i].name);
            fprintf(file,"Gender: %s", pointer[i].gender);
            fprintf(file,"CPF: %s", pointer[i].CPF);
            fprintf(file,"Birthday: %s", pointer[i].birthday);
            fprintf(file,"Work as: %s", pointer[i].enrolled_in);
            fprintf(file,"Age: %d\n", pointer[i].age);
            fprintf(file,"Wage: $%d\n", pointer[i].wage);
            fprintf(file,"ID: %d\n", pointer[i].id);
        }
    }
    fclose(file);
}


void load()
{
    system("clear");

    FILE *file;
    char read_file[1000], *verify;

    if ((file = fopen("list","r")) == NULL)
    {
        printf("Unable to access file!!!\n");
        pause();
        return;
    }

    while (!feof(file))
    {
        verify = fgets(read_file,1000,file);
        if (verify)
        {
            printf("%s", read_file);
        }
    }
    fclose(file);
    pause();
}
