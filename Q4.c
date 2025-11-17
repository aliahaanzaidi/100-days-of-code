#include <stdio.h>
#define PI 3.14159265358979323846

int main() 
{
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Error: Invalid input for radius\n");
        return 1;
    }

    area = PI * radius * radius;
    circumference = 2.0 * PI * radius;
    
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}