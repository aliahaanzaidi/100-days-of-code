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
        int prev = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if (i < n - 1) printf(",");
    }
    printf("\n");
    free(arr);
    return 0;
}