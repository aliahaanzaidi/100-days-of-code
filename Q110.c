#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;
    int *arr;
    int i, j;
    scanf("%d %d", &n, &k);
    arr = malloc((size_t)n * sizeof(int));
    if (!arr) return 1;
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max) max = arr[i + j];
        }
        printf("%d ", max);
    }
    printf("\n");
    free(arr);
    return 0;
}