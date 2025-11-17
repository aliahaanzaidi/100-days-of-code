#include <stdio.h>

int main() {
    int arr[] = {3, -1, 0, 7, -5, 0, 2};  // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zero: %d\n", zero);

    return 0;
}
