#include <stdio.h>

int main() {
    int num;
    int count[10] = {0};

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Count digit frequencies
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    int max_digit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > count[max_digit]) {
            max_digit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", max_digit);

    return 0;
}