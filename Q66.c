#include <stdio.h>

void insertSorted(int arr[], int *n, int element) {
    int i = *n - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;
    (*n)++;
}

int main() {
    int arr[100] = {1, 3, 5, 7, 9};
    int n = 5;
    int element = 6;

    insertSorted(arr, &n, element);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}