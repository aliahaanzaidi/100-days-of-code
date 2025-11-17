#include <stdio.h>

int main() 
{
    int a, b, temp;

    printf("Enter the first number (a): ");
    if (scanf("%d", &a) != 1) {
        printf("Error: Invalid input for first number\n");
        return 1;
    }

    printf("Enter the second number (b): ");
    if (scanf("%d", &b) != 1) {
        printf("Error: Invalid input for second number\n");
        return 1;
    }

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First number (a): %d\n", a);
    printf("Second number (b): %d\n", b);

    return 0;
}