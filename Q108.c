#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
        int *nums, *left, *right, *result;
        int i;
        scanf("%d", &n);
    nums = malloc((size_t)n * sizeof(int));
    left = malloc((size_t)n * sizeof(int));
    right = malloc((size_t)n * sizeof(int));
    result = malloc((size_t)n * sizeof(int));
        if (!nums || !left || !right || !result) {
            free(nums); free(left); free(right); free(result);
            return 1;
        }
        for (i = 0; i < n; i++) scanf("%d", &nums[i]);
        left[0] = 1;
        for (i = 1; i < n; i++) left[i] = left[i - 1] * nums[i - 1];
        right[n - 1] = 1;
        for (i = n - 2; i >= 0; i--) right[i] = right[i + 1] * nums[i + 1];
        for (i = 0; i < n; i++) result[i] = left[i] * right[i];
        for (i = 0; i < n; i++) printf("%d ", result[i]);
    printf("\n");
    free(nums); free(left); free(right); free(result);
    return 0;
}