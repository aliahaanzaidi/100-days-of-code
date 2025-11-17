#include <stdio.h>

int main(void) {
    int n, original, sum = 0;
    if (scanf("%d", &n) != 1) return 1;
    original = n;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    if (original == sum)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}