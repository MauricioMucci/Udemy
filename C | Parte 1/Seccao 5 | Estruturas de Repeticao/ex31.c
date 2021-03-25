#include<stdio.h>

int main(int argc, char const *argv[])
{
    float s = 0, i = 1, j = 1;

    while ((i < 99) && (j <50))
    {
        s += i / j;
        i += 2;
        j++;
    }
    printf("%.2f\n", s);

    return 0;
}
