#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *a = malloc((size_t)n * sizeof *a);
    if (!a) return 1;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) a[i] = 0;
    }

    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("Max: %d\nMin: %d\n", max, min);

    free(a);
    return 0;
}
