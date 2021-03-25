#include <stdio.h>

float conversao(float x, float y, float z)
{
    x *= 3600;
    y *= 60;
    return z + y + x;
}

int main(int argc, char const *argv[])
{
    float horas, minutos, segundos, resultado;

    printf("Informe a hora: ");
        scanf("%f", &horas);
    printf("Informe os minutos: ");
        scanf("%f", &minutos);
    printf("Informe a segundos: ");
        scanf("%f", &segundos);

    resultado = conversao(horas, minutos, segundos);

    printf("%.0f:%.0f:%.0f\n", horas, minutos, segundos);
    printf("Em segundos: %.0f\n", resultado);

    return 0;
}