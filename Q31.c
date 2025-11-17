#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int highest = 1;
    while (highest <= n) highest <<= 1;
    highest >>= 1;

    while (highest > 0) {
        putchar((n & highest) ? '1' : '0');
        highest >>= 1;
    }
    putchar('\n');
    return 0;
}