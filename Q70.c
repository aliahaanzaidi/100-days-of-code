#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for(j = 0; j < k; j++) {
        temp = arr[n - 1];
        for(i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }

    printf("Array after rotating to the right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}