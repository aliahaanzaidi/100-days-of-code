#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 1, den = 2;
    for (i = 1; i <= n; ++i) {
        if (i == 1)
            sum += 1.0;
        else
            sum += (double)num / den;
        num += 2;
        den += 2;
    }

    printf("Sum of the series: %.2f\n", sum);
    return 0;
}