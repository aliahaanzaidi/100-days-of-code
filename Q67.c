#include <stdio.h>

void insertAtPosition(int arr[], int *n, int element, int position) {
    if (position < 0 || position > *n) {
        printf("Invalid position\n");
        return;
    }

    for (int i = *n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    (*n)++;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int element = 25;
    int position = 2;

    insertAtPosition(arr, &n, element, position);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}