#include <stdio.h>

int main() 
{
    double length, breadth, area, perimeter;
    
    printf("Enter the length of the rectangle: ");
    if (scanf("%lf", &length) != 1) {
        printf("Error: Invalid input for length\n");
        return 1;
    }

    printf("Enter the breadth of the rectangle: ");
    if (scanf("%lf", &breadth) != 1) {
        printf("Error: Invalid input for breadth\n");
        return 1;
    }

    area = length * breadth;
    perimeter = 2.0 * (length + breadth);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
