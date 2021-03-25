#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct st_vector
{
    float x, y, z;
} Vector;

int main(int argc, char const *argv[])
{
    Vector u, v, resultant;

    printf("Type de x,y,z component of the first vector:\n");
        scanf("%f", &u.x);
        scanf("%f", &u.y);
        scanf("%f", &u.z);
    printf("Type de x,y,z component of the second vector:\n");
        scanf("%f", &v.x);
        scanf("%f", &v.y);
        scanf("%f", &v.z);

    resultant.x = u.x + v.x;
    resultant.y = u.y + v.y;
    resultant.z = u.z + v.z;

    printf("R = (%.1f,%.1f,%.1f)\n", resultant.x, resultant.y, resultant.z);

    return 0;
}