#include <stdio.h>

int main() {
    int n, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        int digit = n % 10;
        int fact = 1;
        for (int i = 1; i <= digit; ++i) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }

    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);

    return 0;
}