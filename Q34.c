#include <stdio.h>

int main(void) {
    int n, i, isPrime = 1;
    if (scanf("%d", &n) != 1) return 1;

    if (n <= 1) {
        printf("Not a prime number\n");
        return 0;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("Prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}