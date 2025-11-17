#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
    if (scanf("%d", &n) != 1) return 1;
    int *arr = malloc((size_t)n * sizeof(int));
    if (!arr) return 1;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) arr[i] = 0;
    }
    if (scanf("%d", &x) != 1) { free(arr); return 1; }
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) { index = i; break; }
    }
    printf("%d\n", index);
    free(arr);
    return 0;
}