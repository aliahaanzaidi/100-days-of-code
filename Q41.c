#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits = 0, temp, swapped;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    // Find number of digits and first digit
    while (temp > 0) {
        first = temp % 10;
        temp /= 10;
        digits++;
    }

    // If single digit, no swap needed
    if (digits == 1) {
        printf("Swapped number: %d\n", n);
        return 0;
    }

    // Remove first and last digit from n
    int middle = n % (int)pow(10, digits - 1);
    middle /= 10;

    // Construct swapped number
    swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("Swapped number: %d\n", swapped);
    return 0;
}