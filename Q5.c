#include <stdio.h>

int main() 
{
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Error: Invalid input for temperature\n");
        return 1;
    }

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}