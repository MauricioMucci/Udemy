#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit, kelvin;
    int c = 0;

    for(;;){
        do{
            printf("Choose between the following:\n");
            printf("\t 1. Celsius to Fahrenheit\n");
            printf("\t 2. Fahrenheit to Celsius\n");
            printf("\t 3. Celsius to Kelvin\n");
            printf("\t 4. Kelvin to Celsius\n");
            printf("\t 5. Sair\n");
                scanf("%d", &c);
            system("clear");
        } while((c <= 0)||(c > 5));
        
        switch (c){
        case 1:
            printf("What's the temperature in Celsius: ");
                scanf("%f", &celsius);

            fahrenheit = celsius * (9/5) + 32;

            printf("\nThe new temperature is %.2fF\n", fahrenheit);
            break;
        case 2:
            printf("What's the temperature in Fahrenheit: ");
                scanf("%f", &fahrenheit);

            celsius = 5 * (fahrenheit - 32)/9;

            printf("\nThe new temperature is %.2fC\n", celsius);
            break;
        case 3:
            printf("What's the temperature in Celsius: ");
                scanf("%f", &celsius);

            kelvin = celsius + 273;

            printf("\nThe new temperature is %.2fK\n", kelvin);
            break;
        case 4:
            printf("What's the temperature in Kelvin: ");
                scanf("%f", &kelvin);

            celsius = kelvin - 273;

            printf("\nThe new temperature is %.2fC\n", celsius);
            break;
        case 5:
            return 0;
        }
    }
}