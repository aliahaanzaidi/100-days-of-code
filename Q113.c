#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int *arr = malloc((size_t)n * sizeof *arr);
    if (!arr) return 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    qsort(arr, (size_t)n, sizeof(int), compare);
    printf("%d", arr[k - 1]);
    free(arr);
    return 0;
}