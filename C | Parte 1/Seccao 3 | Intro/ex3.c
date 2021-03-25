#include <stdio.h>

int main()
{
    int numbers[3], sum = 0, i;

    printf("Type 3 integers:\n");
    for(i = 0; i < 3; i++){
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("/nSum = %d/n", sum);

    return 0;
}