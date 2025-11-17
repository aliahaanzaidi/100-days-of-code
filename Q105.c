#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *nums;
    int i, count, candidate, verify;

    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    nums = malloc((size_t)n * sizeof(int));
    if (!nums) return 1;
    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) nums[i] = 0;
    }

    count = 0; candidate = 0;
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) count++;
        else count--;
    }

    /* verify candidate */
    verify = 0;
    for (i = 0; i < n; i++) if (nums[i] == candidate) verify++;
    if (verify > n / 2) printf("%d\n", candidate);
    else printf("-1\n");

    free(nums);
    return 0;
}