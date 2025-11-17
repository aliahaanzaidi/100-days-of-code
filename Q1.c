#include <stdio.h>

int main() 
{
    int num1, num2, sum;

    if (scanf("%d", &num1) != 1) {
        printf("Error: Invalid input for first number\n");
        return 1;
    }
    if (scanf("%d", &num2) != 1) {
        printf("Error: Invalid input for second number\n");
        return 1;
    }

    sum = num1 + num2;

    printf("%d\n", sum);

    return 0;
}