#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = malloc((size_t)n * sizeof *arr);
    if (!arr) return 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max_sum = arr[0], current_sum = arr[0];
    for (int i = 1; i < n; i++) {
        if (current_sum < 0) {
            current_sum = arr[i];
        } else {
            current_sum += arr[i];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    printf("%d", max_sum);
    free(arr);
    return 0;
}