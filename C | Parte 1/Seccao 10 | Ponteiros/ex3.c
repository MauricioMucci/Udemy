#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;

    printf("Insira a variavel x: ");
        scanf("%d", &x);

    printf("Insira a variavel y: ");
        scanf("%d", &y);

    int *pont_x, *pont_y;

    pont_x = &x;
    pont_y = &y;

    if (pont_x > pont_y)
    {
        printf("A memoria do valor x eh maior\n%p\n%p\n", &x ,&y);
    } else
    {
        printf("A memoria do valor y eh maior\n%p\n%p\n", &y ,&x);
    }
    
    return 0;
}
