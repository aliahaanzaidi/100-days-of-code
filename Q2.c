#include <stdio.h>

int main() 
{
    int num1, num2;
    
    scanf("%d", &num1);
    scanf("%d", &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    if (num2 != 0) 
    {
        double quotient = (double)num1 / num2;
        printf("Sum: %d\n", sum);
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: %.2f\n", quotient);
    } else 
    {
        printf("Sum: %d\n", sum);
        printf("Difference: %d\n", difference);
        printf("Product: %d\n", product);
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0;
}
