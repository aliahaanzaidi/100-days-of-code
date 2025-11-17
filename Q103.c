#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = malloc((size_t)n * sizeof *arr);
    if (!arr) return 1;
    int total = 0, left = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (left == total - left - arr[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += arr[i];
    }
    printf("-1\n");
    free(arr);
    return 0;
}