#include <stdio.h>

int main(void) {
    int n, original, reversed = 0;
    if (scanf("%d", &n) != 1) return 1;
    original = n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}