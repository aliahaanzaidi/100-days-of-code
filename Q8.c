#include <stdio.h>

int main() 
{
    int n, sum;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: Please enter a non-negative integer\n");
        return 1;
    }

    if (n > 65535) {
        printf("Warning: Large values may cause integer overflow\n");
    }

    sum = (int)(((long long)n * (n + 1)) / 2);

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}