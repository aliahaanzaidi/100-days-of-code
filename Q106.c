#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    int i, j;
    scanf("%d", &n);
    arr = malloc((size_t)n * sizeof(int));
    if (!arr) return 1;
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        int next = -1;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1) printf(",");
    }
    printf("\n");
    free(arr);
    return 0;
}