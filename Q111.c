#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, k;
    if (scanf("%d", &n) != 1) return 1;
    int *arr = malloc((size_t)n * sizeof *arr);
    if (!arr) return 1;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) arr[i] = 0;
    }
    if (scanf("%d", &k) != 1) { free(arr); return 1; }
    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) printf("0 ");
    }
    printf("\n");
    free(arr);
    return 0;
}