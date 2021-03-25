#include<stdio.h>

int main(int argc, char const *argv[])
{
    float wage, loan;

    printf("What's your wage?\n");
        scanf("%f", &wage);

    printf("What's the loan you require?\n");
        scanf("%f", &loan);

    if (loan > (wage - wage * 0.8))
    {
        printf("Invalid amount!\n");
    }
    else
    {
        printf("Valid amount!\n");
    }    
    return 0;
}


