#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n, k;
    int *arr;
    scanf("%d %d", &n, &k);
    arr = malloc((size_t)n * sizeof(int));
    if (!arr) return 1;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int maxSum = INT_MIN;
    for (int i = 0; i <= n - k; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) sum += arr[i + j];
        if (sum > maxSum) maxSum = sum;
    }
    printf("%d\n", maxSum);
    free(arr);
    return 0;
}